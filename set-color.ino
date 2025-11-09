#include <Modulino.h>

// Create a ModulinoPixels object
ModulinoPixels leds;

int brightness = 10;

// Function to set all LEDs to the same color at once
void set_color(ModulinoColor color) {
  for (int i = 0; i < 8; i++) {
    leds.set(i, color, brightness);
  }
  leds.show();
}

void setup(){
  // Initialize Modulino I2C communication
  Modulino.begin();
  // Detect and connect to pixels module
  leds.begin();
}

void loop(){
  // Now you can easily change colors
  set_color(GREEN);
  delay(1000);
  
  set_color(BLUE);
  delay(1000);
  
  set_color(RED);
  delay(1000);
  
  set_color(VIOLET);
  delay(1000);
  
  set_color(WHITE);
  delay(1000);
}
