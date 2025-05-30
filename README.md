# InternetProtocolStackSimulation
Members: Gerry Summers, Kyle Wilson, Riley Suomi.
<hr>

## Description

This project is a C++ simulation of the Internet Protocol Stack, designed to demonstrate how data is transmitted and received across different layers of a network protocol. The simulation includes the following layers:

- **Application Layer**
- **Transport Layer**
- **Network Layer**
- **Link Layer**

Each layer in the simulation performs **encapsulation** by prepending its own header during the sending process and **decapsulation** by removing its header during the receiving process. The purpose of this project is to visualize and understand the flow of data across the protocol stack using terminal output.

The simulation excludes the Physical Layer for simplicity and focuses on clear console messages showing how the message changes at each step.

## How It Works

1. **Sending Process**:
    - The message starts at the Application Layer.
    - Each layer below adds its own header (e.g., `APP_HDR`, `TRANS_HDR`, etc.).
    - The final encapsulated message is displayed as it leaves the Link Layer.

2. **Receiving Process**:
    - The fully encapsulated message is passed back up the stack starting at the Link Layer.
    - Each layer removes its corresponding header.
    - The final message is recovered at the Application Layer and displayed as the received message.

## How to Run

### Running in VS Code

1. Open the project folder (`network_sim/`) in Visual Studio Code.
2. Press `Ctrl+Shift+B` to build and run the program using the configured task.
3. Output will appear in the terminal showing the send and receive process.
