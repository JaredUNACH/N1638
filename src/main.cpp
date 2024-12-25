#include <Arduino.h>
#include "camera/camera_setup.h"
#include "server/server_setup.h"

void setup() {
  setupCamera();
  setupServer();
}

void loop() {
  // Main loop code
}