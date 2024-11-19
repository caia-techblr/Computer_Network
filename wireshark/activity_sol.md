# Wireshark Tutorial

## 1. Introduction to Wireshark

### Topics:
- Basics of Wireshark
- Interface Overview
- Capture and Display Filters
- Protocols and Ports

### Lab Activities:

#### 1. Install Wireshark:
1. Download Wireshark from [https://www.wireshark.org/download.html](https://www.wireshark.org/download.html).
2. Follow the installation steps based on your operating system.
3. Launch Wireshark after installation.

#### 2. Perform Your First Packet Capture:
1. Open Wireshark and select the network interface (e.g., Wi-Fi or Ethernet) for capturing traffic.
2. Click on the **Start Capturing Packets** button (shaped like a blue shark fin).
3. Let it run for a few seconds and then click the **Stop Capturing Packets** button.

#### 3. Use Basic Capture and Display Filters:
1. **Capture Filters**:
   - Before starting the capture, set a capture filter. For example:
     - To capture only HTTP traffic: `port 80`.
     - To capture traffic from a specific IP: `host 192.168.1.1`.
2. **Display Filters**:
   - After capturing packets, refine the display using filters. Examples:
     - Show only HTTP packets: `http`.
     - Show DNS traffic: `dns`.

#### 4. Identify Common Protocols:
1. Look for the **Protocol** column in the captured packets.
2. Locate packets for **HTTP**, **DNS**, and **ARP**.
3. Right-click on a packet and select **Follow > TCP/UDP Stream** to examine detailed communication.

---

## 2. TCP/IP Protocol Stack Analysis

### Topics:
- TCP/IP Layers: Link, Internet, Transport, Application
- Protocol Encapsulation

### Lab Activities:

#### 1. Capture Packets of Different Protocols:
1. Start capturing on a selected interface.
2. Perform network activities like:
   - Visiting a website for **HTTP/HTTPS** traffic.
   - Pinging a server for **ICMP** packets.
   - Downloading/uploading files for **TCP/UDP** traffic.
3. Stop the capture and examine the packets.

#### 2. Identify Layer-Specific Headers:
1. Click on a packet in the capture window.
2. Expand the **Packet Details Pane** (middle section) to see headers:
   - Link Layer: Ethernet header
   - Internet Layer: IP header
   - Transport Layer: TCP/UDP header
   - Application Layer: Protocol-specific data (e.g., HTTP requests)

---

## 3. HTTP/HTTPS Traffic Analysis

### Topics:
- HTTP vs. HTTPS
- Basics of SSL/TLS Encryption
- HTTP Request and Response Headers

### Lab Activities:

#### 1. Capture HTTP Traffic:
1. Start Wireshark and visit an **HTTP** (not HTTPS) website, such as a local server or a testing site.
2. Use the display filter: `http`.
3. Examine HTTP request and response headers:
   - Right-click an HTTP packet and select **Follow > HTTP Stream**.

#### 2. Capture HTTPS Traffic:
1. Browse to an **HTTPS** website.
2. Use the display filter: `ssl` or `tls`.
3. Look for the **TLS Handshake** process:
   - Examine packets for **Client Hello**, **Server Hello**, and **Certificate** messages.

#### 3. Discuss Encryption Aspects:
1. Note that HTTPS traffic will appear encrypted.
2. Highlight how SSL/TLS ensures security.

---

## 4. TCP Flow Analysis and Troubleshooting

### Topics:
- TCP Three-Way Handshake
- Sequence and Acknowledgment Numbers
- Flow Control (Window Size)
- Retransmissions

### Lab Activities:

#### 1. Capture a Large File Download:
1. Start Wireshark before downloading a large file (e.g., an ISO image).
2. Use the display filter: `tcp`.

#### 2. Analyze the TCP Connection:
1. Locate the **TCP Stream** related to the file download.
2. Right-click on a packet and select **Follow > TCP Stream**.

#### 3. Examine Sequence Numbers and Acknowledgment:
1. Expand the **TCP Header** in the **Packet Details Pane**.
2. Note the **Sequence Number**, **Acknowledgment Number**, and **Window Size**.

#### 4. Identify Retransmission Events:
1. Use the display filter: `tcp.analysis.retransmission`.
2. Look for retransmission packets and discuss possible causes (e.g., network congestion or packet loss).

---

**Happy Learning with Wireshark!**
