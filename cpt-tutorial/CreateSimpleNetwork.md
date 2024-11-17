# Packet Tracer - Create a Simple Network

## Objectives
In this activity, you will build a simple network in Packet Tracer in the Logical Workspace.

---

## Part 1: Build a Simple Network

### Step 1: Add Network Devices to the Workspace
- Add the following devices using the **Device-Type Selection Box**:
  - **PC:** End Devices > End Devices > PC
  - **Laptop:** End Devices > End Devices > Laptop
  - **Cable Modem:** Network Devices > WAN Emulation > Cable Modem

> A cable modem allows communication with an Internet Service Provider (ISP) by converting a coaxial connection to an Ethernet connection.

### Step 2: Change Display Names of the Network Devices
1. Click the device icon in the Logical Workspace.
2. Go to the **Config** tab in the device configuration window.
3. Enter the new name into the **Display Name** field:
   - PC
   - Laptop
   - Cable Modem

### Step 3: Add Physical Cabling Between Devices
- **PC to Wireless Router:**
  - Use a **Copper Straight-Through Cable** to connect **FastEthernet0** of the PC to **Ethernet1** of the wireless router.
- **Wireless Router to Cable Modem:**
  - Use a **Copper Straight-Through Cable** to connect the **Internet** interface of the wireless router to **Port 1** of the cable modem.
- **Cable Modem to Internet Cloud:**
  - Use a **Coaxial Cable** to connect **Port 0** of the cable modem to **Coaxial 7** of the internet cloud.

---

## Part 2: Configure the End Devices and Verify Connectivity

### Step 1: Configure the PC
1. Click the PC and go to the **Desktop** tab.
2. Open **IP Configuration** and ensure **DHCP** is enabled. If there’s no IP address, select **DHCP** to obtain one.
   - The PC should receive an IPv4 address in the `192.168.0.x` range.
3. Open the **Command Prompt** in the Desktop tab:
   - Run the command: `ipconfig /all` to review the IPv4 addressing information.
   - Test connectivity to `cisco.srv` by running: `ping cisco.srv`. Expect four successful replies.

> **Note:** DHCP dynamically assigns IP addresses. The Wireless Router in this setup serves as the DHCP server.

---

### Step 2: Configure the Laptop
1. Click the Laptop and go to the **Physical** tab.
2. Replace the Ethernet copper module with the Wireless WPC300N module:
   - Power off the Laptop by clicking its power button.
   - Remove the Ethernet module by dragging it to the **MODULES** pane.
   - Install the Wireless WPC300N module from the **MODULES** pane to the empty port.
   - Power on the Laptop by clicking its power button again.
3. Connect the Laptop to the wireless network:
   - Go to the **Desktop** tab and open **PC Wireless**.
   - In the **Connect** tab, select the network `HomeNetwork` and click **Connect**.
4. Verify connectivity:
   - In the **Web Browser** on the Desktop tab, navigate to `cisco.srv`.

---

## Summary
This activity guides you in building a simple network, configuring devices, and verifying connectivity using Cisco Packet Tracer. Follow the steps sequentially to ensure successful configuration and operation of the network.
