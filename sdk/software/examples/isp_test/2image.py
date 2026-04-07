from PIL import Image
import os

file_name = 'image_out.hex'
if not os.path.exists(file_name):
    print(f"找不到 {file_name} 文件，请检查路径！")
    exit()

# 按 RGB 原样还原输出图像
width, height = 128, 128
img = Image.new('RGB', (width, height))
pixels = img.load()

with open(file_name, 'r') as f:
    lines = f.readlines()
    idx = 0
    for y in range(height):
        for x in range(width):
            if idx < len(lines):
                try:
                    val = int(lines[idx].strip(), 16)
                    # 去掉高 8 位，保留低 24 位 RGB
                    rgb_24bit = val & 0xFFFFFF
                    r = (rgb_24bit >> 16) & 0xFF
                    g = (rgb_24bit >> 8)  & 0xFF
                    b = rgb_24bit         & 0xFF
                    pixels[x, y] = (r, g, b)
                except ValueError:
                    pixels[x, y] = (0, 0, 0)
                idx += 1

output_name = 'output_image.jpg'
img.save(output_name, 'JPEG')
img.show()
print(f"完美！彩色图片 {output_name} ({width}x{height}) 生成完毕！")
