#include <Arduino.h>

// --- LED Configuration ---
#define LED_PIN_1   18
#define PWM_CH_1    0

#define LED_PIN_2   19
#define PWM_CH_2    1

#define LED_FREQ    5000
#define LED_RES     8  // 8-bit resolution (0-255)

// --- Buzzer Configuration ---
#define BUZZER_PIN      27
#define BUZZER_CH       2  // Use different PWM channel for buzzer
#define BUZZER_FREQ     2000
#define BUZZER_RES      10 // 10-bit resolution (0-1023)

void setup() {
  // --- Setup LEDs ---
  ledcSetup(PWM_CH_1, LED_FREQ, LED_RES);
  ledcAttachPin(LED_PIN_1, PWM_CH_1);

  ledcSetup(PWM_CH_2, LED_FREQ, LED_RES);
  ledcAttachPin(LED_PIN_2, PWM_CH_2);

  // --- Setup Buzzer ---
  ledcSetup(BUZZER_CH, BUZZER_FREQ, BUZZER_RES);
  ledcAttachPin(BUZZER_PIN, BUZZER_CH);

  // --- 1. Simple beep pattern ---
  for (int i = 0; i < 3; i++) {
    ledcWriteTone(BUZZER_CH, 2000 + i * 400); // change tone
    delay(150);
    ledcWrite(BUZZER_CH, 0);                  // stop tone
    delay(150);
  }

  // --- 2. Frequency sweep (400Hz → 3kHz) ---
  for (int f = 400; f <= 3000; f += 100) {
    ledcWriteTone(BUZZER_CH, f);
    delay(20);
  }
  ledcWrite(BUZZER_CH, 0);
  delay(500);

  // --- 3. Short melody ---
  int melody[] = {262, 294, 330, 349, 392, 440, 494, 523};
  for (int i = 0; i < 8; i++) {
    ledcWriteTone(BUZZER_CH, melody[i]);
    delay(250);
  }
  ledcWrite(BUZZER_CH, 0); // stop buzzer
}

void loop() {
  // LED cross-fade loop
  for (int d = 0; d <= 255; d++) {
    ledcWrite(PWM_CH_1, d);        // LED 1 increases
    ledcWrite(PWM_CH_2, 255 - d);  // LED 2 decreases
    delay(10);
  }

  for (int d = 255; d >= 0; d--) {
    ledcWrite(PWM_CH_1, d);        // LED 1 decreases
    ledcWrite(PWM_CH_2, 255 - d);  // LED 2 increases
    delay(10);
  }
}
