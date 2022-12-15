# 一、电路图
![在这里插入图片描述](https://img-blog.csdnimg.cn/f22ee9e87c3d408eaf971b8993efcfa3.png)
# 二、程序

```c
int led=5;
int beep=8;
void setup() {
  pinMode(beep,OUTPUT);
  pinMode(led,OUTPUT);

}

void loop()
 {
    sos();
}
void sos()
{
  for(int a=0;a<3;a++)
  {
  digitalWrite(beep,LOW);
  digitalWrite(led,HIGH);
  delay(200);
  digitalWrite(beep,HIGH);
  digitalWrite(led,LOW);
  delay(200);
  }
  delay(2000);
  for(int b=0;b<3;b++)
  {
  digitalWrite(beep,LOW);
  digitalWrite(led,HIGH);
  delay(1000);
  digitalWrite(beep,HIGH);
  digitalWrite(led,LOW);
  delay(1000);
  }
    for(int b=0;b<3;b++)
  {
  digitalWrite(beep,LOW);
  digitalWrite(led,HIGH);
  delay(200);
  digitalWrite(beep,HIGH);
  digitalWrite(led,LOW);
  delay(200);
  }
  delay(2000);
}
```
# 三、效果
![请添加图片描述](https://img-blog.csdnimg.cn/0488651cda894372b6ac691cae3d1641.gif)

