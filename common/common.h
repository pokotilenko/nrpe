/************************************************************************
 *
 * COMMON.H - NRPE Common Include File
 * Copyright (c) 1999-2002 Ethan Galstad (nagios@nagios.org)
 * Last Modified: 02-21-2002
 *
 * License:
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 ************************************************************************/


#define PROGRAM_VERSION "1.3"
#define MODIFICATION_DATE "02-21-2002"

#define OK		0
#define ERROR		-1

#define TRUE		1
#define FALSE		0

#define	STATE_CRITICAL 	2	/* service state return codes */
#define STATE_WARNING 	1
#define STATE_OK       	0
#define STATE_UNKNOWN  	-1


#define DEFAULT_SOCKET_TIMEOUT	10	/* timeout after 10 seconds */
#define DEFAULT_SERVER_PORT	5666	/* default port to use */

#define MAX_INPUT_BUFFER	2048	/* max size of most buffers we use */

#define MAX_HOST_ADDRESS_LENGTH	256	/* max size of a host address */

#define NRPE_HELLO_COMMAND      "_NRPE_CHECK"


/**************** PACKET STRUCTURE DEFINITION **********/

#define QUERY_PACKET		1		/* id code for a packet containing a query */
#define	RESPONSE_PACKET		2		/* id code for a packet containing a response */

#define NRPE_PACKET_VERSION_1	1		/* packet version identifier (in case packet type changes in future versions) */

#define MAX_PACKETBUFFER_LENGTH	1024		/* max amount of data we'll send in one query/response */

typedef struct packet_struct{
	int packet_type;
	int packet_version;
	int result_code;
	int buffer_length;
	char buffer[MAX_PACKETBUFFER_LENGTH];
        }packet;