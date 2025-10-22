#include <Arduino.h>

// LED 1 configuration
#define LED_PIN_1 18
#define PWM_CH_1  0

// LED 2 configuration
#define LED_PIN_2 19
#define PWM_CH_2  1

#define FREQ      5000
#define RES       8  // 8-bit resolution (0-255)

void setup() {
  // Setup LED 1
  ledcSetup(PWM_CH_1, FREQ, RES);
  ledcAttachPin(LED_PIN_1, PWM_CH_1);

  // Setup LED 2
  ledcSetup(PWM_CH_2, FREQ, RES);
  ledcAttachPin(LED_PIN_2, PWM_CH_2);
}

void loop() {
  // Fade in
  for (int d = 0; d <= 255; d++) {
    ledcWrite(PWM_CH_1, d);  // LED 1 brightness
    ledcWrite(PWM_CH_2, 255 - d);  // LED 2 fades opposite
    delay(10);
  }

  // Fade out
  for (int d = 255; d >= 0; d--) {
    ledcWrite(PWM_CH_1, d);  // LED 1 brightness
    ledcWrite(PWM_CH_2, 255 - d);  // LED 2 fades opposite
    delay(10);
  }
}
