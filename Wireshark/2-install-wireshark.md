# Step 2: Install Wireshark

Once you’ve downloaded Wireshark, follow these steps to install it.

---

## Installation Instructions

### For Windows:
1. Double-click the downloaded `.exe` file to launch the installer.
2. Follow the setup wizard:
   - Accept the License Agreement.
   - Select the default installation options (recommended).
   - Ensure **Npcap** or **WinPcap** is installed (for packet capturing).
3. Finish the installation and launch Wireshark.

### For macOS:
1. Open the `.dmg` file.
2. Drag the Wireshark icon to the **Applications** folder.
3. Launch Wireshark from the **Applications** folder.
4. Grant permissions if prompted.

### For Linux:
1. Install Wireshark using your package manager:
   - **Debian/Ubuntu**:  
     ```bash
     sudo apt update
     sudo apt install wireshark
     ```
   - **Fedora/RHEL**:  
     ```bash
     sudo dnf install wireshark
     ```
2. Enable non-root capture (optional):
   ```bash
   sudo groupadd wireshark
   sudo usermod -aG wireshark <your-username>
