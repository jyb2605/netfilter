
#pragma pack(push,1)
typedef struct _ether_header{
        uint8_t         destination_mac_address[6];
        uint8_t         source_mac_address[6];
	uint16_t	type;	// 0x0800 -> ipv4, 0x86DD -> ipv6

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

typedef struct _ipv4{
	u_int8_t version_len;	// 4
	u_int8_t tos;
	u_int16_t total_len;
	u_int16_t ident;
	u_int16_t ip_flag_fragment;
	u_int8_t TTL;
	u_int8_t protocol;
	u_int16_t checksum;
	u_int8_t source_ip[4];
	u_int8_t destination_ip[4];
}ipv4_header;

typedef struct _ipv6{
	u_int32_t version_line;
	u_int16_t payload_len;
	u_int8_t next_header;
	u_int8_t hop_limit;
	u_int8_t source_ip[16];
	u_int8_t destination_ip[16];

}ipv6_header;


typedef struct _tcpH{
	u_int16_t source_port;
	u_int16_t destination_port;
	u_int32_t sequence_num;
	u_int32_t ack_num;
	u_int16_t hlen_line;
	u_int16_t window;
	u_int16_t checksum;
	u_int16_t urgent;
}tcp_header;

#pragma pack(pop)
