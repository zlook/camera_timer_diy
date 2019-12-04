from gpiozero import LED
from time import sleep

led = LED(17)

while True:
    led.on()  # 引脚置高
    sleep(1)  # 延时0.2
    led.off() # 引脚置高
    sleep(1)  # 延时0.2
    sleep(20) # 延时20s拍一张照片
