typedef struct _ether_header{
        uint8_t         destination_mac_address[6];
        uint8_t         source_mac_address[6];
	uint16_t	type;

}ether_header;


typedef struct _arp_header{
	uint16_t	hardware_type;
	uint16_t	protocol_type;
	uint8_t		hardware_address_length;
	uint8_t		protocol_address_length;
	uint16_t	option;
	uint8_t		source_mac_address[6];
	uint8_t		source_ip_address[4];
	uint8_t         destination_mac_address[6];
	uint8_t		destination_ip_address[4];
}arp_header;
