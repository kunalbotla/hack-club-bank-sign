#include <Adafruit_NeoPixel.h>

// Which pin on the Arduino is connected to the NeoPixels?
// On a Trinket or Gemma we suggest changing this to 1:
#define LED_PIN    6

// How many NeoPixels are attached to the Arduino?
#define LED_COUNT 16

// Declare our NeoPixel strip object:
Adafruit_NeoPixel strip(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800);
// Argument 1 = Number of pixels in NeoPixel strip
// Argument 2 = Arduino pin number (most are valid)
// Argument 3 = Pixel type flags, add together as needed:
//   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
//   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
//   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)
//   NEO_RGBW    Pixels are wired for RGBW bitstream (NeoPixel RGBW products)

void setup() {
  strip.begin();
  strip.show(); // Initialize all pixels to 'off'
}

void loop() {
  // put your main code here, to run repeatedly:

  // strip.setPixelColor(n, color);
  strip.fill(strip.Color(255, 0, 255), 0);
  strip.fill(strip.Color(255, 0, 0), 1, 3);
  strip.fill(strip.Color(0, 255, 0), 4, 6);
  strip.fill(strip.Color(255, 255, 0), 7, 9);
  strip.fill(strip.Color(0, 255, 255), 10, 13);
  strip.fill(strip.Color(255, 0, 255), 14, 55);
  strip.show();

  delay(2000);

  strip.fill(strip.Color(255, 0, 255), 0, 1);
  strip.fill(strip.Color(255, 0, 0), 2);
  strip.fill(strip.Color(0, 255, 0), 3, 7);
  strip.fill(strip.Color(255, 255, 0), 8, 9);
  strip.fill(strip.Color(0, 255, 255), 10, 11);
  strip.fill(strip.Color(255, 0, 255), 12, 15);
  strip.show();

  delay(2000);

  strip.fill(strip.Color(255, 0, 255), 0, 2);
  strip.fill(strip.Color(255, 0, 0), 3);
  strip.fill(strip.Color(0, 255, 0), 4, 7);
  strip.fill(strip.Color(255, 255, 0), 8, 9);
  strip.fill(strip.Color(0, 255, 255), 10, 12);
  strip.fill(strip.Color(255, 0, 255), 13, 15);
  strip.show();

  delay(2000);

//  strip.clear();
//  strip.show();
//
//  delay(5000);

}
