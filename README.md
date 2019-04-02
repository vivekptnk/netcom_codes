# Network and Communication
Codes to learn for LABFAT, under Prof. Navamani TM. :sparkles: :metal:

## 1. Network Configuration Commands
Commands under this sub-section might not come for LABFAT, but it's general understanding is required for VIVA or QUIZ.
### 1.1) ping
Ping is a computer network administration software utility used to test the reachability of a host on an Internet Protocol network.
```bash
ping www.vit.ac.in
```
--------------------------------------------------------------------------
### 1.2) netstat
metstat (network statistics) displays network connections for the Transmission Control Protocol (both incoming and outgoing), routing tables, and a number of network interface (network interface controller or software-defined network interface) and network protocol statistics
```bash
netstat -a
```
--------------------------------------------------------------------------
### 1.3) tcpdump
This is a sniffer, a program that captures packets off a network interface and interprets them.
```bash
tcpdump -D
```
--------------------------------------------------------------------------
### 1.4) hostname
The hostname command is used to show or set a computer's host name and domain name.
```bash
hostname
```
--------------------------------------------------------------------------
### 1.5) traceroute
Traceroute is a command which can show you the path a packet of information takes from your computer to one you specify.
```bash
traceroute www.vit.ac.in
```
--------------------------------------------------------------------------
### 1.6) traceroute
Traceroute is a command which can show you the path a packet of information takes from your computer to one you specify.
```bash
traceroute www.vit.ac.in
```
--------------------------------------------------------------------------
### 1.7) finger
Finger may be used to look up users on a remote machine. 
```bash
finger
```
--------------------------------------------------------------------------
### 1.8) ifconfig
Running ifconfig with no options will display the configuration of all active interfaces. 
```bash
ifconfig
```
--------------------------------------------------------------------------
### 1.9) dig
Dig stands for (Domain Information Groper) is a network administration command-line tool for querying Domain Name System (DNS) name servers. It is useful for verifying and troubleshooting DNS problems and also to perform DNS lookups and displays the answers that are returned from the name server that were queried. 
```bash
dig
```
--------------------------------------------------------------------------
### 1.10) telnet
Telnet is a user command and an underlying TCP/IP protocol for accessing remote computers. Through Telnet, an administrator or another user can access someone else's computer remotely. 
```bash
telnet 10.10.5.21 [only on available IP addresses, might not work on every IP.]
```
--------------------------------------------------------------------------
### 1.11) ftp
ftp stands for file transfer protocol and can be used by servers to download or upload data through a specific link.
```bash
ftp 10.30.151.151
```
--------------------------------------------------------------------------
### 1.12) arp
The "arp" Command. arp displays and modifies entries in the Address Resolution Protocol (ARP) cache, which contains one or more tables that are used to store IP addresses and their resolved Ethernet or Token Ring physical addresses.
```bash
arp -e
```

There are many more commands but this should suffice.

# 2. Error Detection and Correction (C PROGRAMS)
    2.1) Parity Checking
    2.2) Checksum
    2.3) CRC
    2.4) Hamming Code

# 3. Flow Control
    3.1) Stop and Wait
        1) Sender
        2) Reciever
    3.2) Selective Repeat
    3.3) Go Back N
    
# 4. IP Addressing (PYTHON PROGRAMS)
    4.1) IP Address Validity
    4.2) Analysis of IP Address

# 5. Packet Tracing (WireShark)
    5.1) TCP Socket Programming
        1) Server
        2) Client
    5.2) UDP Socket Programming
        1) Server
        2) Client

# 6. Network Simulation
    NS2 has some code that I dont understand yet, for now what I have understood is up in the 6th script.
    6) NS2 
