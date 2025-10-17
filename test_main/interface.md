## 1. GPIO (General Purpose Input/Output)

### 1) 개념 및 역할
- 범용 입출력 핀.  
- 외부 신호(버튼, 센서 등) 입력 또는 LED, 릴레이 등 출력 제어.

### 2) 사용 구조
- 디지털 신호(High/Low) 입출력  
- 입력모드: 센서, 버튼 등 신호 읽음  
- 출력모드: LED, 모터 등 신호 보냄

### 3) 사용 단계
1. 핀을 입력/출력 모드로 설정
2. 입력: 값 읽기 (0/1)
3. 출력: 원하는 값(0/1) 출력

### 4) 예시 코드 (C 언어/Pseudo)
```c
// 1. 출력핀 설정
pinMode(LED_PIN, OUTPUT);
// 2. 출력(LED ON)
digitalWrite(LED_PIN, HIGH);
// 3. 입력핀 설정
pinMode(BUTTON_PIN, INPUT);
// 4. 입력 읽기
int state = digitalRead(BUTTON_PIN);
```

---

## 2. UART (Universal Asynchronous Receiver/Transmitter)

### 1) 개념 및 역할
- 직렬 통신, 비동기 방식(클럭 신호 없음)
- 두 장치가 TX(전송)과 RX(수신) 신호선으로 데이터 송수신

### 2) 사용 구조
- 기본 2선(TX, RX) + (Optional: GND, RTS/CTS)
- 속도(baud rate), 데이터 비트, 패리티, 스톱 비트 등 설정

### 3) 프로토콜/동작
1. 송신(TX) : 데이터를 비트 단위로 직렬 출력
2. 수신(RX) : 직렬 입력 받아 병렬 데이터로 변환
3. 송수신 속도, 데이터 형식 사전 일치 필요

### 4) 예시 (Linux C)
```c
// 시리얼 포트 열기
int fd = open("/dev/ttyS1", O_RDWR);
// 속도/포맷 설정 (termios 활용)
// 송신
write(fd, "Hello", 5);
// 수신
read(fd, buf, sizeof(buf));
```

---

## 3. I2C (Inter-Integrated Circuit)

### 1) 개념 및 역할
- 2선식(클럭 SCL, 데이터 SDA) 직렬 동기 통신
- 마스터-슬레이브 구조 (최대 127개 슬레이브)
- 센서, EEPROM 등 저속/저전력 디바이스 연결

### 2) 사용 구조
- SCL(클럭), SDA(데이터)
- 마스터가 클럭 생성, 슬레이브는 주소로 구분

### 3) 프로토콜/동작
1. 마스터가 START 신호 전송
2. 슬레이브 주소 및 읽기/쓰기 비트 전송
3. 데이터 송/수신 (8비트 단위, ACK/NACK)
4. STOP 신호로 종료

### 4) 예시 (Pseudo)
```c
// I2C 장치 파일 열기
int fd = open("/dev/i2c-1", O_RDWR);
// 슬레이브 주소 설정
ioctl(fd, I2C_SLAVE, 0x50);
// 데이터 쓰기
write(fd, buf, len);
// 데이터 읽기
read(fd, buf, len);
```

---

## 4. SPI (Serial Peripheral Interface)

### 1) 개념 및 역할
- 4선식(클럭 SCLK, 마스터출력/슬레이브입력 MOSI, 마스터입력/슬레이브출력 MISO, 슬레이브선택 SS/CS)
- 동기식 고속 직렬 통신 (EEPROM, 플래시, 센서 등)

### 2) 사용 구조
- 하나의 마스터, 여러 슬레이브 (SS/CS로 구분)
- 풀 듀플렉스(동시에 송수신)

### 3) 프로토콜/동작
1. 마스터가 SS/CS로 슬레이브 선택
2. 클럭(SCLK) 생성, 데이터(MOSI/MISO) 송수신
3. 송수신 동기화, 전송길이/모드 사전 설정

### 4) 예시 (Pseudo)
```c
// SPI 장치 파일 열기
int fd = open("/dev/spidev0.0", O_RDWR);
// 설정(ioctl 등)
// 데이터 송수신
ioctl(fd, SPI_IOC_MESSAGE(1), &xfer);
```

---

## 5. CAN (Controller Area Network)

### 1) 개념 및 역할
- 차량, 산업용 네트워크 표준. 노드 간 메시지 기반 다중 접속 버스
- 고신뢰성, 실시간, 다중 마스터 지원

### 2) 사용 구조
- CAN_H, CAN_L 2선 버스 + 공통 GND
- 각 노드는 메시지 ID로 통신

### 3) 프로토콜/동작
1. 모든 노드가 버스 감시
2. 메시지 전송 시 충돌 발생하면 우선순위(ID)로 중재
3. 수신 노드는 ID 필터링 후 메시지 수신

### 4) 예시 (SocketCAN, Linux)
```bash
# CAN 인터페이스 활성화
sudo ip link set can0 up type can bitrate 500000
# 송신
cansend can0 123#11223344
# 수신
candump can0
```

---

## 6. PWM (Pulse Width Modulation)

### 1) 개념 및 역할
- 펄스 신호의 듀티비(High/Low 비율) 제어
- 모터 속도, 밝기, 음량 등 아날로그적 제어에 사용

### 2) 사용 구조
- PWM 출력 핀 사용, 주기/듀티비 설정

### 3) 동작/프로토콜
1. PWM 신호 생성 (주기, 듀티비 설정)
2. 외부 장치(모터, LED 등) 제어

### 4) 예시 (Pseudo)
```c
// PWM 주기/듀티 설정
set_pwm_period(20000);   // 20ms
set_pwm_duty(1000);      // 1ms (5%)
```

---

## 7. 기타 인터페이스

- **ADC (Analog to Digital Converter):**  
  아날로그 신호(전압 등)를 디지털로 변환, 센서 입력 등  
- **DAC (Digital to Analog Converter):**  
  디지털 신호를 아날로그로 출력, 오디오 출력 등  
- **USB (Universal Serial Bus):**  
  범용 고속 통신, 저장장치/카메라/네트워크 등 연결  
- **Ethernet:**  
  네트워크 통신, RJ45 커넥터 사용

---

# 요약 및 TIP

| 인터페이스 | 특징/용도                             | 연결 방식         | 주요 프로토콜/동작 요약          |
|------------|---------------------------------------|------------------|-----------------------------------|
| GPIO       | 범용 디지털 입출력, 단순제어           | 단일핀           | 입력/출력 설정, High/Low 제어     |
| UART       | 비동기 직렬통신, 간단/저속 통신        | TX/RX            | 속도/포맷 사전 일치 필요          |
| I2C        | 2선 동기, 다수 슬레이브 연결           | SCL/SDA          | 주소, START/STOP, ACK/NACK        |
| SPI        | 4선 동기, 고속/다중 슬레이브           | SCLK/MOSI/MISO/CS| 슬레이브 선택, 동시 송수신        |
| CAN        | 차량/산업 네트워크, 메시지 기반        | CAN_H/CAN_L      | ID 우선순위, 충돌 중재            |
| PWM        | 펄스 신호로 아날로그 제어              | PWM핀            | 주기/듀티비로 출력 조절           |
| ADC        | 아날로그→디지털 변환                   | ADC핀            | 입력 전압→디지털값                |
| DAC        | 디지털→아날로그 변환                   | DAC핀            | 디지털값→출력 전압                |

---

## 마치며

- 많은 센서/장치가 위 인터페이스 중 하나 또는 복수로 연결됨
- 각 인터페이스는 하드웨어적 특성 + 소프트웨어 설정(드라이버, 초기화, 데이터 처리)이 모두 중요
- 실제 코드 예시는 MCU/임베디드 OS마다 조금씩 다르니, 데이터시트/예제코드 확인 추천

---
