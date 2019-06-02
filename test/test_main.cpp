#include <Arduino.h>
#include <unity.h>
#include <WiFiClientSecure.h>
#include <time.h>

const char* ssid      = "Buffalo-G-FAA8";   //AP SSID
const char* password  = "34ywce7cffyup";    //AP Pass Word

#define JST     3600* 9

const char* MapYahooApisURL = "https://map.yahooapis.jp/weather/V1/place?appid=dj00aiZpPU5xUWRpRTlhZXpBMCZzPWNvbnN1bWVyc2VjcmV0Jng9MzY-&coordinates=135.449513,34.537694&output=json";

// void setUp(void) {
// // set stuff up here
// }

// void tearDown(void) {
// // clean stuff up here
// }

void setup() {

  delay(2000);
  Serial.begin(115200);

  WiFi.begin(ssid, password);
  while(WiFi.status() != WL_CONNECTED) {
    Serial.print('.');
    delay(500);
  }
  Serial.println();
  Serial.printf("Connected, IP address: ");
  Serial.println(WiFi.localIP());

  configTime( JST, 0, "ntp.nict.jp", "ntp.jst.mfeed.ad.jp");

  UNITY_BEGIN();    // IMPORTANT LINE!

  //RUN_TEST(test_shift_bit);
  //RUN_TEST(test_send_line_data);

  UNITY_END(); // stop unit testing
}

void loop() {

}

