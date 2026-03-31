from PIL import Image, ImageDraw

# 1. 尺寸设定为极其小巧的 64x64
width, height = 64, 64

# 2. 用 Python 画一张高对比度的彩色测试图
img = Image.new('RGB', (width, height), color='blue')  # 蓝色背景
draw = ImageDraw.Draw(img)
draw.ellipse((10, 10, 54, 54), fill='red')             # 画一个大红圆
draw.rectangle((24, 24, 40, 40), fill='yellow')        # 中心画一个黄方块

# 保存出来给你看一眼原图
img.save('test_64x64.jpg')
print("✅ 生成了测试原图: test_64x64.jpg (快打开看看长什么样！)")

# 3. 转换为 Vivado 可读的 hex 文件
pixels = img.load()
with open('image_in.hex', 'w') as f:
    for y in range(height):
        for x in range(width):
            r, g, b = pixels[x, y]
            # 格式: 0x00RRGGBB
            pixel_32bit = (r << 16) | (g << 8) | b
            f.write(f"{pixel_32bit:08x}\n")

print("✅ 生成了微型 image_in.hex (仅 4096 行)，仿真将会飞速完成！")