# 🚗 Arduino Obstacle Avoiding Robot Car

![Arduino](https://img.shields.io/badge/Arduino-Uno-00979D?style=for-the-badge&logo=arduino&logoColor=white)
![Language](https://img.shields.io/badge/Language-Embedded%20C-blue?style=for-the-badge)
![IDE](https://img.shields.io/badge/IDE-Arduino_IDE-green?style=for-the-badge)
![Sensor](https://img.shields.io/badge/Sensor-HC--SR04-orange?style=for-the-badge)
![Motor Driver](https://img.shields.io/badge/Motor_Driver-L298N-red?style=for-the-badge)

An autonomous obstacle avoiding robot car built using **Arduino Uno**, **HC-SR04 Ultrasonic Sensor**, **L298N Motor Driver**, and **Embedded C**.

The robot continuously measures the distance to obstacles using an HC-SR04 ultrasonic sensor. When an object is detected within a predefined threshold (50 cm), it stops, attempts a right turn, checks the path again, and if still blocked, performs a left turn before continuing autonomous navigation.

---

## 📑 Table of Contents

- [📸 Project Images](#-project-images)
- [🎥 Demo Video](#-demo-video)
- [✨ Features](#-features)
- [🛠 Components Used](#-components-used)
- [💻 Software Used](#-software-used)
- [⚙️ Working Principle](#️-working-principle)
- [🔌 Pin Connections](#-pin-connections)
- [📁 Project Structure](#-project-structure)
- [🔧 Circuit Diagram](#-circuit-diagram)
- [🚀 Future Improvements](#-future-improvements)
- [👨‍💻 Author](#-author)

---
---

## 📸 Project Images

| Front View | Back View |
|------------|-----------|
| <img src="Images/Front_View.jpeg" width="450"/> | <img src="Images/Back_View.jpeg" width="450"/> |

| Left View | Right View |
|-----------|------------|
| <img src="Images/Left_View.jpeg" width="450"/> | <img src="Images/Right_View.jpeg" width="450"/> |
---

## 🎥 Demo Video

The demo video is available here:

[▶ Demo Video](Videos/Demo_video.mp4)

---

## ✨ Features

- 🚗 Autonomous obstacle avoidance
- 📏 Real-time distance measurement using HC-SR04
- 🔄 Automatic right and left turning logic
- ⚡ PWM-based motor speed control
- 🔋 Battery-powered mobile robot
- 🧠 Embedded C programming using Arduino IDE
- 🛞 Four-wheel robotic platform
---

# 🛠 Components Used

| Component | Quantity |
|-----------|----------|
| Arduino Uno | 1 |
| HC-SR04 Ultrasonic Sensor | 1 |
| L298N Motor Driver | 1 |
| DC Motors | 4 |
| Wheels | 4 |
| Robot Chassis | 1 |
| Battery Pack | 1 |
| Jumper Wires | Multiple |

---

# 💻 Software Used

- Arduino IDE
- Embedded C / Arduino Programming Language

---

# ⚙️ Working Principle

1. The robot continuously moves forward.
2. The ultrasonic sensor measures the distance to nearby obstacles.
3. If an obstacle is detected within 50 cm:
   - Stop
   - Turn right
   - Check again
   - If still blocked, turn left
4. Continue moving forward.
5. Repeat continuously.

---

# 🔌 Pin Connections

| Arduino Pin | Connected To |
|-------------|--------------|
| D8 | Motor Driver IN1 |
| D9 | Motor Driver IN2 |
| D10 | Motor Driver IN3 |
| D11 | Motor Driver IN4 |
| D2 | Motor Driver IN5 |
| D3 | Motor Driver IN6 |
| D4 | Motor Driver IN7 |
| D5 | Motor Driver IN8 |
| A5 | ENA Front |
| A4 | ENB Front |
| A1 | ENA Back |
| A2 | ENB Back |
| D12 | HC-SR04 Trigger |
| D13 | HC-SR04 Echo |

---

## 🔌 Circuit Diagram

The following diagram illustrates the hardware connections between the Arduino Uno, HC-SR04 ultrasonic sensor, L298N motor driver, battery pack, and DC motors.

![Circuit Diagram](Circuit/circuit_diagram.png)

# 📁 Project Structure

```
Arduino-Obstacle-Avoiding-Robot-Car
│
├── Arduino_Code
├── Images
├── Videos
├── README.md
└── LICENSE
```

---

# 🚀 Future Improvements

- Servo-mounted ultrasonic sensor
- Bluetooth control
- Mobile application control
- ESP32 Wi-Fi control
- Camera module integration
- AI object detection

---

# 👨‍💻 Author

**Rohit Sharma**

B.Tech Computer Science Engineering

IIIT Delhi
