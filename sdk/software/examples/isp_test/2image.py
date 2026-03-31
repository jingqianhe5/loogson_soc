from PIL import Image
import os

file_name = 'image_out.hex'
if not os.path.exists(file_name):
    print(f"找不到 {file_name} 文件，请检查路径！")
    exit()

# 在你之前的 hex2img.py 里，把这两行改掉：
width, height = 64, 64
img = Image.new('L', (width, height))
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
                    # 转灰度
                    gray_val = int(r * 0.299 + g * 0.587 + b * 0.114)
                    pixels[x, y] = gray_val
                except ValueError:
                    pixels[x, y] = 0
                idx += 1

output_name = 'output_image.jpg'
img.save(output_name, 'JPEG')
img.show()
print(f"完美！灰度图片 {output_name} ({width}x{height}) 生成完毕！")