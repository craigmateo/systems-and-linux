# Module 13: Networks

This module covers the basics of computer networks, including their history, layout configurations, key terminology, essential hardware, and how to set up a static IP address in Windows 10.

### Learning Outcomes

By the end of this module, you should be able to:

- Explain computer networks, layout configurations, and terminology  
- Understand network hardware  
- Configure a Windows 10 laptop with a static IP address  

### Key Terms and Concepts

- **Closed System**  
  An offline machine not connected to a network and unavailable for communication.

- **Host Name**  
  A unique name assigned to each device on a network.

- **Network**  
  A system where multiple computers connect to share information and resources.

- **Open System**  
  An online machine connected to a network and ready to communicate.

- **Protocol**  
  Rules that define how devices communicate (e.g., TCP, IP, UDP, ARP, DHCP, FTP).

- **Socket**  
  A unique combination of an IP address and port number.

## Computer Networks

A computer network connects multiple computers and devices to enable communication and resource sharing. Early examples include the U.S. military’s SAGE radar system and the 1969 ARPANET linking universities, marking the beginning of the internet.

### Uses of Networks
- Communication via email, instant messaging, video calls  
- Sharing hardware like printers and scanners  
- File and data sharing  
- Sharing operating systems and applications  
- Multiplayer gaming across locations

### Network Topologies
Common layouts include:  
- Bus  
- Star  
- Mesh  
- Ring  
- Daisy Chain  
- Hybrid  
- Point-to-Point  
- Tree

### Types of Networks
- Local Area Network (LAN)  
- Personal Area Network (PAN)  
- Home Area Network (HAN)  
- Wide Area Network (WAN)  
- Metropolitan Area Network (MAN)  
- Campus Networks  
- Enterprise Private Networks  
- Internetworks  
- Backbone Networks (BBN)  
- Global Area Networks (GAN)  
- The Internet

### IP Address
- Logical address identifying a device on a network  
- IPv4 is 32 bits long, allowing ~4.3 billion unique addresses  
- Find via command: `ipconfig`

### MAC Address
- Physical, unique address tied to a device’s network card  
- 48 bits long  
- Find via command: `ipconfig /all`

### Firewall
- Security system managing network traffic based on rules  
- Separates trusted and untrusted networks

## Network Components

A computer network relies on various hardware devices working together, such as routers, switches, hubs, bridges, and network cables.

### Common Devices

| Router         | Hub           | Bridge          |
| -------------- | ------------- | --------------- |
| Wireless Router| Switch        | Wireless Bridge |

#### Network Cables
Used to connect computers and devices within a local area network (LAN).  
- Common types: Category 5 (CAT5) and Category 6 (CAT6) cables.  
- CAT5 with RJ-45 connector is widely used today.

#### Distributors
- For small networks, devices can connect directly.  
- For larger networks, a central device (distributor) manages connections and traffic between devices like computers, printers, scanners, etc.  
- Examples: Switches, hubs, and routers.

#### Router
- Acts as the central leader in the network.  
- Forwards data packets between devices.  
- Has physical ports and often supports wireless connections for cable-free networking.

#### Network Interface Card (NIC)
Also called Network Interface Controller, it allows a device to connect to the network.

- **Internal NIC:**  
  - Installed inside the computer motherboard.  
  - Types:  
    - PCI (Peripheral Component Interconnect) – local computer bus slot.  
    - ISA (Industry Standard Architecture) – older 16-bit bus architecture.

- **External NIC:**  
  - Connects externally, commonly via PCI or USB ports.  
  - Wireless NICs (WNIC) use antennas to connect to wireless networks without physical cables.

#### Universal Serial Bus (USB)
- A common interface for connecting peripherals like cameras, mice, keyboards, printers, and storage devices.  
- Supports plug-and-play, allowing devices to be detected without rebooting.  
- Newer versions include mini-USB and USB-C, popular for mobile devices.

## Setting Up Static IP Address

When connecting to a network, there are two types of IP addresses:

- **Dynamic IP Address**  
  - Changes over time without the end-user noticing.  
  - Assigned by Internet Service Providers (ISP).  
  - Cost-effective for both ISP and users.

- **Static IP Address**  
  - Remains constant over time.  
  - Preferred by businesses and organizations needing reliable and dedicated internet services.  
  - Usually costs extra and requires a special request.
