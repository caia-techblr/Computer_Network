# Step 4: Verify Wireshark Installation

Verify that Wireshark is installed and working correctly by capturing and analyzing network traffic.

---

## Instructions

1. **Start a Capture**:
   - Open Wireshark and select a network interface.
   - Click the **Start Capturing Packets** button.

2. **Generate Traffic**:
   - Perform some network activities, such as opening a website or pinging a server.

3. **Stop the Capture**:
   - Click the **Stop Capturing Packets** button.

4. **Analyze Captured Data**:
   - Look at the packet list and use filters to focus on specific types of traffic (e.g., `tcp`, `http`).

---

## Common Issues and Fixes

1. **No Packets Captured**:
   - Ensure the correct interface is selected.
   - Check if your firewall or antivirus is blocking Wireshark.

2. **Permissions Issues**:
   - On Linux, ensure your user is added to the `wireshark` group.
   - On macOS, grant permissions to Wireshark in **System Preferences > Security & Privacy**.
