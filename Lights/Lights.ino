#include <Bridge.h>
#include <YunServer.h>
#include <YunClient.h> 
 
YunServer server;
String response;

 
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
    
    if (command == "lights-on") {
      digitalWrite(11,LOW);
    }
    else if (command == "lights-off") {
      digitalWrite(11,HIGH);
    }
    response = String(digitalRead(11));
    client.print(String("{\"state\":"+response+"}"));
    client.stop();
  }
 
  delay(50);
}
