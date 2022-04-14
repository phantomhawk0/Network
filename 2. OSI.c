1. THE OPEN SYSTEM INTERCONNECTION MODEL (OSI)


		Concepts 

				One of the greatest functions of the OSI specifications is to assist in data transfer between disparate hosts regardless of whether they’re Unix/Linux, Windows, 
			or macOS-based.
			But keep in mind that the OSI model isn’t a physical model; it’s a conceptual and comprehensive yet fluid set of guidelines, that application developers utilize 
			to create and implement applications that run on a network. It also provides a framework for creating and implementing networking standards, devices, and 
			internetworking schemes. 


		Layers 


			- Application (layer 7) 
			- Presentation (layer 6) 
			- Session (layer 5) 
			- Transport (layer 4) 
			- Network (layer 3) 
			- Data Link (layer 2) 
			- Physical (layer 1)



		Advantage

			- The OSI model divides network communication processes into smaller and simpler components, thus aiding component development, design, and troubleshooting.
			- It allows various types of network hardware and software to communicate.




2. MODEL OSI LAYERS 


		Layers functions			(Upper Layers)

				- Application      	- File, print, message, database, and application services
				- Presentation		- Data encryption, compression, and translation services
				- session			- Dialog control

									(Lower layers)

				- Transport			- End-to-end connection
				- network           - routing 
				- Data Link         - Framing
				- Physical          - Physical topology





3. APPLICATION LAYER 


		- The Application layer of the OSI model marks the spot where users actually communicate or interact with the computer. Technically, users communicate with the 
		  network stack through application processes, interfaces, or application programming interfaces (APIs) that connect the application in use to the operating system of the 
		  computer. The Application layer chooses and determines the availability of communicating partners along with the resources necessary to make their required connections

		- The Application layer is also responsible for identifying and establishing the availability of the intended communication partner and determining whether 
		  sufficient resources for the requested communication exist

		- It’s important to remember that the Application layer acts as an interface between application programs. 



		PRESENTATION LAYER 

				- The Presentation layer gets its name from its purpose: it presents data to the Application layer and is responsible for data translation and code formatting. 




		 SESSION LAYER 

				- The Session layer is responsible for setting up, managing, and then tearing down sessions between Presentation layer entities. This layer also provides dialog control 
				  between devices, or nodes. It coordinates communication between systems and serves to organize their communication by offering three different modes: one direction 
				  (simplex), both directions, but only one direction at a time (half-duplex), and bi-directional (full-duplex). 





		TRANSPORT LAYER 

				- The Transport layer segments and reassembles data into a data stream. Services located in the Transport layer handle data from upper-layer applications and unite it onto 
				  the same data stream. 

				- FLOW CONTROL: Data integrity is ensured at the Transport layer by maintaining flow control and by allowing users to request reliable data transport between systems. 
				  Flow control provides a means for the receiver to govern the amount of data sent by the sender. It prevents a sending host on one side of the connection from 
				  overflowing the buffers in the receiving host—an event that can result in lost data. 

				- WINDOWING: Windows are used to control the amount of outstanding, unacknowledged data segments.




		NETWORK LAYER 

				- The Network layer manages logical device addressing, tracks the location of devices on the network, and determines the best way to move data. This means that the 
				  Network layer must transport traffic between devices that aren’t locally attached. Routers are layer 3 devices that are specified at the Network layer and provide the 
				  routing services within an internetwork.

			 	- Data Packets These are used to transport user data through the internetwork. Protocols used to support data traffic are called routed protocols. Two examples of 
				  routed protocols are Internet Protocol (IP) and Internet Protocol version 6 (IPv6), which you’ll learn all about coming up in Chapter 7, “IP Addressing.”

				- Route-Update Packets These are used to update neighboring routers about the networks connected to all routers within the internetwork. Protocols that send route-update 
				  packets are called routing protocols, and some common ones are Routing Information Protocol (RIP), RIPv2, Enhanced Interior Gateway Routing Protocol (EIGRP), 
				  and Open Shortest Path First (OSPF). Route-update packets are used to help build and maintain routing tables on each router.




		DATA LINK LAYER 

				- The Data Link layer provides the physical transmission of the data and handles error notification, network topology, and flow control. This means the Data Link layer 
				  ensures that messages are delivered to the proper device on a LAN using hardware (MAC) addresses and translates messages from the Network layer into bits for the Physical 
				 layer to transmit.
			    - The Data Link layer formats the message into pieces, each called a data frame and adds a customized header containing the destination and source hardware addresses. 
			      This added information forms a sort of capsule that surrounds the original message in much the same way that engines, navigational devices, and other tools were attached 
			      to the lunar modules of the Apollo project. 


			  	- MAC (MAC address Control): Defines how packets are placed on the media. Contention media access is “first come, first served” access, where everyone shares the same 
			      bandwidth—hence the name. 




		PHYSICAL LAYER 

				- The Physical layer specifies the electrical, mechanical, procedural, and functional requirements for activating, maintaining, and deactivating a physical link 
				  between end systems.




4. ENCAPSULATION


		- When a host transmits data across a network to another device, the data goes through encapsulation: It’s wrapped with protocol information at each layer of the OSI model. 
		  Each layer communicates only with its peer layer on the receiving device.

		- To communicate and exchange information, each layer uses protocol data units (PDUs). These hold the control information attached to the data at each layer of the model. 
		  They’re usually attached to the header in front of the data field but can also be in the trailer, or end, of it.




5. MODULATION 

		- In networks, modulation is the process of varying one or more properties of a waveform, called the carrier signal, with a signal that typically contains information to 
		  be transmitted. Modulation of a waveform transforms a baseband (Ethernet or wireless) message signal into a passband signal (a passband, also known as a bandpass filtered signal, 
		  is the range of frequencies or wavelengths that can pass through a filter without being attenuated). In current networks, modulation takes a digital or analog signal and puts 
		  it is another signal that can be physically transmitted.



