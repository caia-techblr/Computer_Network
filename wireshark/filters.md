# Wireshark Filters Cheat Sheet

Wireshark is a powerful tool for network packet analysis. Here are some commonly used filters for both **display** and **capture**.

---

## **1. Display Filters**
Use these filters to isolate specific packets after capturing the data.

### **Filter by Protocol**
- **HTTP**: `http`
- **DNS**: `dns`
- **TCP**: `tcp`
- **UDP**: `udp`
- **ICMP**: `icmp`
- **TLS/SSL**: `ssl`

### **Filter by IP Address**
- **Source IP**: `ip.src == 192.168.1.1`
- **Destination IP**: `ip.dst == 192.168.1.1`
- **Specific IP**: `ip.addr == 192.168.1.1`

### **Filter by Port**
- **Source Port**: `tcp.srcport == 80`
- **Destination Port**: `tcp.dstport == 443`
- **Specific Port**: `tcp.port == 22`

### **Filter by MAC Address**
- **Source MAC**: `eth.src == 00:1A:2B:3C:4D:5E`
- **Destination MAC**: `eth.dst == 00:1A:2B:3C:4D:5F`

### **Filter by Subnet**
- **Example**: `ip.addr == 192.168.1.0/24`

### **Filter by Data**
- **Search for Text in Payload**: `frame contains "example"`

### **Filter by Flags**
- **TCP SYN**: `tcp.flags.syn == 1`
- **TCP ACK**: `tcp.flags.ack == 1`

---

## **2. Capture Filters**
Use these filters while starting a capture to limit what data is collected.

### **Capture by Protocol**
- **TCP Only**: `tcp`
- **UDP Only**: `udp`
- **ICMP Only**: `icmp`

### **Capture by IP Address**
- **Host IP**: `host 192.168.1.1`
- **Source IP**: `src host 192.168.1.1`
- **Destination IP**: `dst host 192.168.1.1`

### **Capture by Port**
- **Specific Port**: `port 443`
- **Source Port**: `src port 80`
- **Destination Port**: `dst port 22`

### **Capture by Network**
- **Subnet**: `net 192.168.1.0/24`

---

## **3. Advanced Filters**

### **Combine Filters**
- **AND Condition**: `ip.src == 192.168.1.1 && tcp.port == 80`
- **OR Condition**: `ip.src == 192.168.1.1 || ip.dst == 192.168.1.2`
- **NOT Condition**: `!tcp`

### **Filter by Packet Length**
- **Packets Greater than 1000 Bytes**: `frame.len > 1000`

### **Filter by Time**
- **Packets in a Time Range**: `frame.time >= "2024-11-01 00:00:00" && frame.time <= "2024-11-01 12:00:00"`

---

## **4. References**
- [Wireshark Display Filters Documentation](https://www.wireshark.org/docs/wsug_html_chunked/ChWorkBuildDisplayFilterSection.html)
- [Wireshark Capture Filters Documentation](https://www.wireshark.org/docs/wsug_html_chunked/ChCapCaptureFilterSection.html)

---

Keep this cheat sheet handy for quick reference while using Wireshark!
