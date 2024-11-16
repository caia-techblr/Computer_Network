# Step 5: Troubleshooting Wireshark

If you encounter issues while using Wireshark, follow this troubleshooting guide.

---

## Common Problems and Solutions

### 1. **No Traffic Captured**
- **Solution**:
  - Verify the correct network interface is selected.
  - Check your system firewall or antivirus settings.

### 2. **Permission Issues (Linux)**
- **Symptoms**: You cannot capture packets as a non-root user.
- **Solution**:
  ```bash
  sudo groupadd wireshark
  sudo usermod -aG wireshark <your-username>
