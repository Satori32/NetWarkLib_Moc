#pragma once

#include <stdio.h>
#include <stdint.h>
#include <string.h>

struct NetWarkHard
{
	void* Addless = NULL;
};

union IP {
	struct Alpha
	{
		uint8_t A, B, C, D;
	};
	uint8_t IP[4];
};

struct IPv4
{
	NetWarkHard Hard = {};
	IP IP = { 0, };
};

struct IP_1st
{
	char S[13] = "TRANCEPORT1";
	char U = 2;
	char Title[80] = { 0, };
	char coment[80] = { 0, };
};
struct  IP_2nd
{
	char S[13] = "TRANCEPORT2";
	char Title[32] = { 0, };
	char coment[256] = { 0, };

};
struct IP_3rd
{
	char S[13] = "TRANCEPORT3";
	int U[40] = { 0, };
	char Title[32] = { 0, };
	char coment[256] = { 0, };

};
struct  IP_4th//this code about 4th layer.
{
	char S[11] = "TCP/IPv4\n";
};
struct  IP_5th
{
	char S[13] = "TRANCEPORT5";
	char Title[32] = { 0, };
	char coment[256] = { 0, };

};
struct  IP_6th
{
	char S[13] = "TRANCEPORT6";
	char Title[32] = { 0, };
	char coment[256] = { 0, };

};
struct  IP_7th
{
	char S[13] = "TRANCEPORT7";
	char Title[32] = { 0, };
	char coment[256] = { 0, };

};
struct  IP_8th
{
	char S[13] = "TRANCEPORT8";
	char Title[32] = { 0, };
	char coment[256] = { 0, };

};

NetWarkHard ConstructNetWarkHaed(int IRQ);
bool Write(NetWarkHard N, void* T, size_t L);
bool Read(NetWarkHard N, void* T, size_t L);
bool IsConnect(NetWarkHard N);
NetWarkHard& GetNetWarkHard(IPv4& In);
bool Connect(IPv4& In, IP IPe);
template <class T> intmax_t Write(IPv4& In, T* D, size_t L);
template <class T> intmax_t Read(IPv4& In, T* D, size_t L);
template<class T, class U> bool TCP_Wrire(IPv4& In, T* D, size_t L, U* comment, size_t N);
template<class T, class U> bool TCP_Read(IPv4& In, T* D, size_t L, U* comment, size_t N);
bool DisConnect(IPv4& In);


