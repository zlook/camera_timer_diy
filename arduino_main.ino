#define PIN            9
void setup() {
  // 初始化9脚为输出脚
  pinMode(PIN, OUTPUT);
}

void loop() {
  digitalWrite(PIN, HIGH);   // 9管教置高
  delay(200);                // 延时0.2s
  digitalWrite(PIN, LOW);    // 9管教置低
  delay(200);                // 延时0.2s
　delay(20000);              // 相机多长时间拍一张照片,此处是20s
}
