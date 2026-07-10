// ---------------- Motor Pins ----------------
int IN1 = 8;
int IN2 = 9;
int ENA_F = A5;

int IN3 = 10;
int IN4 = 11;
int ENB_F = A4;

int IN5_F = 2;
int IN6_F = 3;

int IN7_F = 4;
int IN8_F = 5;

int ENA_B = A1;
int ENB_B = A2;

// ---------------- Ultrasonic ----------------
const int trig = 12;
const int echoPin = 13;

// ---------------- Read Distance ----------------
long readDistance() {
  digitalWrite(trig, LOW);
  delayMicroseconds(2);

  digitalWrite(trig, HIGH);
  delayMicroseconds(10);

  digitalWrite(trig, LOW);

  long duration = pulseIn(echoPin, HIGH, 30000);

  if (duration == 0)
    return 999;

  return duration * 0.034 / 2;
}

// ---------------- Setup ----------------
void setup() {

  Serial.begin(9600);

  pinMode(trig, OUTPUT);
  pinMode(echoPin, INPUT);

  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);

  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  pinMode(IN5_F, OUTPUT);
  pinMode(IN6_F, OUTPUT);

  pinMode(IN7_F, OUTPUT);
  pinMode(IN8_F, OUTPUT);

  pinMode(ENA_F, OUTPUT);
  pinMode(ENB_F, OUTPUT);

  pinMode(ENA_B, OUTPUT);
  pinMode(ENB_B, OUTPUT);
}

// ---------------- Forward ----------------
void forward(int sp) {

  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);

  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);

  digitalWrite(IN5_F, HIGH);
  digitalWrite(IN6_F, LOW);

  digitalWrite(IN7_F, LOW);
  digitalWrite(IN8_F, HIGH);

  analogWrite(ENA_F, sp);
  analogWrite(ENB_F, sp);
  analogWrite(ENA_B, sp);
  analogWrite(ENB_B, sp);
}

// ---------------- Backward ----------------
void backward(int sp) {

  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);

  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);

  digitalWrite(IN5_F, LOW);
  digitalWrite(IN6_F, HIGH);

  digitalWrite(IN7_F, HIGH);
  digitalWrite(IN8_F, LOW);

  analogWrite(ENA_F, sp);
  analogWrite(ENB_F, sp);
  analogWrite(ENA_B, sp);
  analogWrite(ENB_B, sp);
}

// ---------------- Stop ----------------
void stopMotors() {

  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);

  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);

  digitalWrite(IN5_F, LOW);
  digitalWrite(IN6_F, LOW);

  digitalWrite(IN7_F, LOW);
  digitalWrite(IN8_F, LOW);

  analogWrite(ENA_F, 0);
  analogWrite(ENB_F, 0);
  analogWrite(ENA_B, 0);
  analogWrite(ENB_B, 0);
}

// ---------------- Right Turn ----------------
void rightTurn(int sp) {

  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);

  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);

  digitalWrite(IN5_F, HIGH);
  digitalWrite(IN6_F, LOW);

  digitalWrite(IN7_F, HIGH);
  digitalWrite(IN8_F, LOW);

  analogWrite(ENA_F, sp);
  analogWrite(ENB_F, sp);
  analogWrite(ENA_B, sp);
  analogWrite(ENB_B, sp);
}

// ---------------- Left Turn ----------------
void leftTurn(int sp) {

  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);

  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);

  digitalWrite(IN5_F, LOW);
  digitalWrite(IN6_F, HIGH);

  digitalWrite(IN7_F, LOW);
  digitalWrite(IN8_F, HIGH);

  analogWrite(ENA_F, sp);
  analogWrite(ENB_F, sp);
  analogWrite(ENA_B, sp);
  analogWrite(ENB_B, sp);
}

// ---------------- Main Loop ----------------
void loop() {

  long d = readDistance();

  Serial.print("Distance: ");
  Serial.print(d);
  Serial.println(" cm");

  if (d <= 50) {

    stopMotors();
    delay(200);

    // Try right
    rightTurn(180);
    delay(700);

    stopMotors();
    delay(200);

    d = readDistance();

    // If still blocked, try left
    if (d <= 50) {

      leftTurn(180);
      delay(700);

      stopMotors();
      delay(200);
    }

  } else {

    forward(180);
  }

  delay(50);
}
