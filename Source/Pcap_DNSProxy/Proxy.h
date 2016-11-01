﻿// This code is part of Pcap_DNSProxy
// A local DNS server based on WinPcap and LibPcap
// Copyright (C) 2012-2016 Chengr28
// 
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either
// version 2 of the License, or (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.


#include "Base.h"

//Global variables
extern CONFIGURATION_TABLE Parameter;
extern GLOBAL_STATUS GlobalRunningStatus;

//Functions
bool SOCKS_Selection_Exchange(
	std::vector<SOCKET_DATA> &SocketDataList, 
	std::vector<SOCKET_SELECTING_DATA> &SocketSelectingDataList, 
	std::vector<ssize_t> &ErrorCodeList);
bool SOCKS_Authentication_Exchange(
	std::vector<SOCKET_DATA> &SocketDataList, 
	std::vector<SOCKET_SELECTING_DATA> &SocketSelectingDataList, 
	std::vector<ssize_t> &ErrorCodeList);
bool SOCKS_Client_Command_Request(
	const uint16_t Protocol, 
	std::vector<SOCKET_DATA> &SocketDataList, 
	std::vector<SOCKET_SELECTING_DATA> &SocketSelectingDataList, 
	std::vector<ssize_t> &ErrorCodeList, 
	SOCKET_DATA * const UDP_ASSOCIATE_Address);
bool HTTP_CONNECT_Exchange(
	std::vector<SOCKET_DATA> &SocketDataList, 
	std::vector<SOCKET_SELECTING_DATA> &SocketSelectingDataList, 
	std::vector<ssize_t> &ErrorCodeList);
