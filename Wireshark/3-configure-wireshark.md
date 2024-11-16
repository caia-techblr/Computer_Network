
# Step 3: Configure Wireshark

After installing Wireshark, follow these steps to configure it for your network analysis tasks.

---

## Instructions

1. **Launch Wireshark**:
   - Open Wireshark from the Start menu (Windows) or Applications folder (macOS/Linux).

2. **Choose a Network Interface**:
   - Select the interface for capturing packets (e.g., Ethernet, Wi-Fi).
   - Ensure the correct interface is active for your network.

3. **Set Up Filters**:
   - Use capture filters to limit the packets captured:
     - Example: `tcp`, `udp`, `ip`.
     - Example: `http` to capture web traffic only.

4. **Save Preferences**:
   - Configure settings such as default capture interface and file locations.
   - Go to **Edit > Preferences** to customize Wireshark for your use.

---

## Additional Notes
- On Linux, ensure you have permission for non-root packet capture.
- Wireshark’s **Packet Filters** can also be used after capturing data for focused analysis.
