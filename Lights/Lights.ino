#include <Bridge.h>
#include <YunServer.h>
#include <YunClient.h> 
 
YunServer server;
 
void setup() {
  Bridge.begin();
  server.listenOnLocalhost();
  server.begin();
  pinMode(11,OUTPUT);
}
 
void loop() {
  YunClient client = server.accept();
 
  if (client) {
    String command = client.readString();
    command.trim();
    if (command == "status"){
      client.print(digitalRead(11));
    }
    else if (command == "lights-on") {
      digitalWrite(11,LOW);
      client.print(digitalRead(11));
    }
    else if (command == "lights-off") {
      digitalWrite(11,HIGH);
      client.print(digitalRead(11));
    }
    client.stop();
  }
 
  delay(50);
}
