#include <Modulino.h>

// Create a ModulinoPixels object
ModulinoPixels leds;

int brightness = 10;

void setup(){
  // Initialize Modulino I2C communication
  Modulino.begin();
  // Detect and connect to pixels module
  leds.begin();
}

void loop(){
  // Set all 8 LEDs to blue color
  for (int i = 0; i < 8; i++) {
    // Set each LED (index, color, brightness)
    // Available colors: RED, BLUE, GREEN, VIOLET, WHITE
    leds.set(i, BLUE, brightness);
    // Update the physical LEDs with new settings
    leds.show();
  }
}
