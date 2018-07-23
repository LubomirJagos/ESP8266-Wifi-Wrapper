#include <ArduinoOTA.h>
#include <Ticker.h>
using namespace std;
/***** interruption *****/
void StaticVIReferenceUID_212(){
LVSubVI_ESP8266_WiFi_WrapperOTA_Blink_LED();
}
/***** end interruption *****/
void LVSubVI_ESP8266_WiFi_WrapperOTA_Blink_LED(){
    String wireUID_641_ = "Imageine LED blink.";
    Serial.println(wireUID_641_);
    
} //SubVI not locked auto-generated call
Ticker LVgen_ticker_1;

void ESP8266_WiFi_WrapperOTA_Test_1(){
    unsigned long wireUID_741_ = 20;
    //Refnum wireUID_210_;
    String wireUID_645_ = "LPC1763lpc";
    String wireUID_541_ = "dlink";
    long wireUID_366_ = 115200;
    /* StaticVIReference transcripted, ISR name "StaticVIReferenceUID_212" */
    Serial.begin(wireUID_366_);
    WiFi.mode(WIFI_STA);
    char _ESP8266WiFiWrapper_wifi_ssid[wireUID_541_.length()+1]; wireUID_541_.toCharArray(_ESP8266WiFiWrapper_wifi_ssid, sizeof(_ESP8266WiFiWrapper_wifi_ssid));char _ESP8266WiFiWrapper_wifi_password[wireUID_645_.length()+1]; wireUID_645_.toCharArray( _ESP8266WiFiWrapper_wifi_password, sizeof(_ESP8266WiFiWrapper_wifi_password));WiFi.begin(_ESP8266WiFiWrapper_wifi_ssid, _ESP8266WiFiWrapper_wifi_password);
    while (WiFi.waitForConnectResult() != WL_CONNECTED) {
      Serial.println("Connection Failed! Rebooting...");
      delay(5000);
      ESP.restart();
    }
    
    // Port defaults to 8266
    // ArduinoOTA.setPort(8266);
    
    // Hostname defaults to esp8266-[ChipID]
    // ArduinoOTA.setHostname("myesp8266");
    
    // No authentication by default
    // ArduinoOTA.setPassword("admin");
    
    // Password can be set with it's md5 value as well
    // MD5(admin) = 21232f297a57a5a743894a0e4a801fc3
    // ArduinoOTA.setPasswordHash("21232f297a57a5a743894a0e4a801fc3");
    
    ArduinoOTA.onStart([]() {
      String type;
      if (ArduinoOTA.getCommand() == U_FLASH) {
        type = "sketch";
      } else { // U_SPIFFS
        type = "filesystem";
      }
    
      // NOTE: if updating SPIFFS this would be the place to unmount SPIFFS using SPIFFS.end()
      Serial.println("Start updating " + type);
    });
    ArduinoOTA.onEnd([]() {
      Serial.println("");
      Serial.println("End");
    });
    ArduinoOTA.onProgress([](unsigned int progress, unsigned int total) {
      Serial.printf("Progress: %u%%\r", (progress / (total / 100)));
    });
    ArduinoOTA.onError([](ota_error_t error) {
      Serial.printf("Error[%u]: ", error);
      if (error == OTA_AUTH_ERROR) {
        Serial.println("Auth Failed");
      } else if (error == OTA_BEGIN_ERROR) {
        Serial.println("Begin Failed");
      } else if (error == OTA_CONNECT_ERROR) {
        Serial.println("Connect Failed");
      } else if (error == OTA_RECEIVE_ERROR) {
        Serial.println("Receive Failed");
      } else if (error == OTA_END_ERROR) {
        Serial.println("End Failed");
      }
    });
    ArduinoOTA.begin();
    Serial.println("Ready");
    Serial.print("IP address: ");
    Serial.println(WiFi.localIP());
    LVgen_ticker_1.attach_ms(wireUID_741_, StaticVIReferenceUID_212);
    /***** BEGIN WhileLoop ********/
    bool wireUID_433_ = false; //LoopEndRef.
    int iteratorUID_754 = 0; //loop iterator
    do{
     //shift register init and get front value
        long wireUID_883_ = 10;
        ArduinoOTA.handle();
        delay(wireUID_883_);
         //C code
        
         //output assgn.
        iteratorUID_754++; //iterator increment
    }while(!wireUID_433_); //negation because in LabVIEW it is when stop (oposite)
    /****** END WhileLoop */
    
}

void setup(){}
void loop(){
    ESP8266_WiFi_WrapperOTA_Test_1();
}

