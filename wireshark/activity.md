# Wireshark Tutorial

## 1. Introduction to Wireshark

### Topics:
- Basics of Wireshark
- Interface Overview
- Capture and Display Filters
- Protocols and Ports

### Lab:
1. Install Wireshark on your system.
2. Perform your first packet capture.
3. Use basic capture and display filters.
4. Identify common protocols such as:
   - **HTTP**
   - **DNS**
   - **ARP**

---

## 2. TCP/IP Protocol Stack Analysis

### Topics:
- TCP/IP Layers:
  - Link Layer
  - Internet Layer
  - Transport Layer
  - Application Layer
- Protocol encapsulation

### Lab:
1. Capture packets of different protocols such as **TCP** and **UDP**.
2. Identify layer-specific headers and data within the captured packets.

---

## 3. HTTP/HTTPS Traffic Analysis

### Topics:
- Differences between HTTP and HTTPS
- Basics of SSL/TLS encryption
- Examining HTTP request and response headers

### Lab:
1. Capture HTTP traffic while browsing:
   - Use an HTTP website or a local server for non-encrypted analysis.
2. For HTTPS:
   - Capture SSL/TLS handshake messages.
   - Discuss encryption-related aspects.

---

## 4. TCP Flow Analysis and Troubleshooting

### Topics:
- TCP three-way handshake
- Sequence and acknowledgment numbers
- Flow control (window size)
- Retransmissions

### Lab:
1. Capture a large file download using Wireshark.
2. Analyze the TCP connection:
   - Examine sequence numbers and acknowledgment.
   - Track retransmission events.
   - Discuss the causes of retransmissions.

---

**Happy Packet Sniffing!**
