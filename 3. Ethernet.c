1. ETHERNET BASIC 


		- Ethernet is a contention media-access method that allows all hosts on a network to share the same bandwidth of a link. Ethernet is popular because it’s readily scalable, 
		  meaning that it’s comparatively easy to integrate new technologies, such as Fast Ethernet and Gigabit Ethernet, into an existing network infrastructure

		- Ethernet es la tecnología tradicional para conectar dispositivos en una red de área local (LAN) o una red de área amplia (WAN) por cable, lo que les permite comunicarse 
		  entre sí a través de un protocolo: un conjunto de reglas o lenguaje de red común




2. BROADBAND  / BASEBAND 

		- BROADBAND: We have two ways to send analog and digital signals down a wire: broadband and baseband. We hear the term broadband a lot these days because that is pretty much 
		             what everyone uses at home. It allows us to have both our analog voice and digital data carried on the same network cable or physical medium. Broadband allows us 
		             to send multiple frequencies of different signals down the same wire at the same time (called frequency-division multiplexing) and to send both analog and digital 
		             signals.

		- BASEBAND: Baseband is what all LANs use. This is where all the bandwidth of the physical media is used by only one signal. For example, Ethernet uses only one digital signal 
		            at a time, and it requires all the available bandwidth.





3. BINARY TO DECIMAL AND DECIMAL TO BINARY 


		- 1 BIT  =   The smallest unit of data. 
		- NIBBLE =   4 BITS
		- 1 BYTE =   8 BITS 




		- Binary: Each digit used is limited to being either a 1 (one) or a 0 (zero), and each digit is called 1 bit (short for binary digit). Typically, you count either 4 or 8 bits 
		          together, with these being referred to as a nibble and a byte, respectively.



		          Table binary to decimal. 

		          2^7 -  2^6  - 2^5 - 2^4 - 2^3 - 2^2 - 2^1 - 2^0             - Where there is a 0 no calculate, where there is a 1 calculate. Add all values. 

		          128    64     32     16    8     4     2     1

		          						1	 0	   1     1     0



		          Example: 10110 = 22    (16 + 4 + 2)





		          TABLE DECIMAL TO BINARY 

		           128    64     32     16    8     4     2     1        - We need to rest the decimal # to each position. example: 83 es mayor que 128? No = 0, Si = 1 y resta el numero

		           0       1     0       1    0     0     1     1 


		           83 = 01010011 





		  - MEMORIZATION CHART - Binary to Decinal 


		  	     - 10000000 = 128 
		  	     - 11000000 = 192
		  	     - 11100000 = 224 
		  	     - 11110000 = 240 
		  	     - 11111000 = 248 
		  	     - 11111100 = 252 
		  	     - 11111110 = 254 
		  	     - 11111111 = 255




4. HEXADECIMAL TO BINARY  TO DECINAL 

				
				   Hexadecimal Value         Binary Value         Decimal Value
				    
				   0                         0000                  0 
				   1                         0001                  1
				   2                         0010                  2 
				   3                         0011                  3
				   4                         0100                  4
				   5                         0101                  5 
				   6                         0110                  6
				   7                         0111                  7
				   8                         1000                  8
				   9                         1001                  9
				   A                         1010                  10 
				   B                         1011                  11
				   C                         1100                  12
				   D                         1101                  13
				   E                         1110                  14
				   F                         1111                  15



				   Example 1:   Convert 0x6a  to  Binary        ***ome manufacturers put 0x in front of characters so you know that they’re a hex value, while others just give you an h.

				   				- 6 = 0110 
				   				- a = 1010 
				   				- Result = 01101010 


				    Example 2: Convert binary to hex.  Convert 01010101 to Hex 

				    			- divide the binary in nibble (4)
				    			- 0101 = 5 
				    			- 0101 = 5 
				    			- Result = 55 



5. ETHERNET ADDRESSING 


		-   Media Access Control (MAC) address is burned into each and every Ethernet NIC. The MAC, or hardware, address is a 48-bit (6-byte) address written in a hexadecimal format.

			
			- The mac has 48 bits 
			- the first 24 bits are Organizationally Unique Identifier (OUI) (Assigned by IEEE) (The organizationally unique identifier (OUI) is assigned by the Institute of 
			  Electrical and Electronics Engineers (IEEE) to an organization)
			- the second 24 bits is Vendor Assigned 




6. ETHERNET FRAMES 


			- The Data Link layer is responsible for combining bits into bytes and bytes into frames. Frames are used at the Data Link layer to encapsulate packets 
			  handed down from the Network layer for transmission on a type of physical media access.



