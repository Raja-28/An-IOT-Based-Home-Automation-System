
An IOT based Home Automation System

 Overview

The Home Automation System is an Arduino-based project that allows you to control home appliances such as CFL bulbs through a Bluetooth connection using a smartphone. This system is designed to make your home smarter and more convenient by enabling wireless control of electrical appliances.

 Features

- Bluetooth Control: Manage home appliances remotely via Bluetooth using your smartphone.
- Multiple Device Control: Control up to four devices (e.g., CFL bulbs) independently using a 4-channel relay module.
- Simple Interface: Use a basic Bluetooth terminal app to send commands and control the appliances.
- Scalable Design: The system can be expanded to control more devices or integrated with other home automation systems.

 Components Used

- Arduino Nano: The microcontroller that controls the relay module and communicates with the Bluetooth module.
- 4-Channel Relay Module: Switches the connected appliances (CFL bulbs) on and off.
- CFL Bulbs with Wires: Represents the home appliances controlled by the system.
- Bluetooth Module (HC-05): Enables wireless communication between the Arduino and your smartphone.
- Connecting Wires: Used to connect the components together.
- Power Supply: 5V DC for Arduino Nano and the relay module, 230V AC for the CFL bulbs.

 - CFL Bulbs:
  - Connect each bulb's live wire to the relay's COM (Common) terminal.
  - Connect the relay's NO (Normally Open) terminal to the AC supply's live terminal.
  - Neutral wires of the bulbs should be connected directly to the AC supply's neutral terminal.

 Installation

1. Assemble the Hardware:
   - Follow the circuit diagram to connect all components.
   - Ensure secure connections, especially when working with high-voltage AC power.

2. Upload the Arduino Code:
   - Connect your Arduino Nano to your computer.
   - Open the provided Arduino code in the Arduino IDE.
   - Upload the code to the Arduino Nano.
   - Ensure the Bluetooth module is disconnected from the RX and TX pins while uploading the code.

3. Pair the Bluetooth Module:
   - Power on the system and pair the HC-05 Bluetooth module with your smartphone.
   - Use the default pairing code, typically "1234" or "0000".

4. Control the Appliances:
   - Download a Bluetooth terminal app on your smartphone.
   - Connect to the HC-05 module via the app.
   - Use the following commands to control the appliances:
     - 1: Turn ON appliance 1
     - 2: Turn OFF appliance 1
     - 3: Turn ON appliance 2
     - 4: Turn OFF appliance 2
     - 5: Turn ON appliance 3
     - 6: Turn OFF appliance 3
     - 7: Turn ON appliance 4
     - 8: Turn OFF appliance 4

 How It Works

- The system uses the Arduino Nano to control the relays based on commands received via Bluetooth.
- The relays act as switches for the connected CFL bulbs (or other appliances), allowing you to control them remotely.
- The Bluetooth module (HC-05) enables communication between your smartphone and the Arduino Nano.

 Safety Precautions

- High Voltage Caution: Be careful when working with AC mains power. Ensure the power is disconnected before making or modifying connections.
- Proper Insulation: Make sure all connections involving high voltage are well insulated to prevent accidents.

 Future Enhancements

- Custom Mobile App: Develop a dedicated mobile app for more intuitive control instead of using a Bluetooth terminal.
- Voice Control: Integrate voice commands using platforms like Google Assistant or Amazon Alexa.
- Automation Scheduling: Add a feature to schedule appliances to turn on or off at specific times.

  Contributing

Contributions are welcome! Feel free to fork this repository, make your changes, and submit a pull request.

 Contact

For questions or feedback, please contact (mail : rajaccet28@gmail.com).
