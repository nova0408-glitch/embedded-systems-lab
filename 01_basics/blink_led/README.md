# Blink LED

## Objective
Understand basic digital output and timing in embedded systems.

## Components
- Arduino Uno / Nano
- LED (any color)
- 220Ω resistor (current limiting)

## Wiring
- LED anode (+) → 220Ω resistor → Pin 13
- LED cathode (-) → GND

## Key Concepts
- `pinMode()` — Set pin as OUTPUT
- `digitalWrite()` — HIGH (5V) / LOW (0V)
- `millis()` — Non-blocking timing (best practice)

## Common Issues & Fixes
- LED not lighting → Check polarity and resistor
- Code not uploading → Select correct board/port in IDE
- Flickering → Use proper current limiting

## Extensions
- Multiple LEDs with different patterns
- Button-controlled blinking
- Fade effect using PWM (`analogWrite`)
