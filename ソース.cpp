#include <stdio.h>
#include <stdint.h>
#include <string.h>

#include <intrin0.h>// bash irq.
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
};
struct  IP_2nd
{
	char S[13] = "TRANCEPORT2";
};
struct IP_3rd
{
	char S[13] = "TRANCEPORT3";
	int U[40] = { 0, };
};
struct  IP_4th
{
	char S[11] = "TCP/IPv4\n";
};
struct  IP_5th
{
	char S[13] = "TRANCEPORT5";
};
struct  IP_6th
{
	char S[13] = "TRANCEPORT6";
};
struct  IP_7th
{
	char S[13] = "TRANCEPORT7";
};
struct  IP_8th
{
	char S[13] = "TRANCEPORT8";

};

bool ConstructNetWarkHaed(int IRQ) {
	return false;
}

bool Write(NetWarkHard N, void* T, size_t L) {

}
bool Read(NetWarkHard N, void* T, size_t L) {

}
bool IsConnect(NetWarkHard N) {
	return false;
}

bool Connect(IPv4& In) {
	if (IsConnect(In.Hard) == false) { return false; }

	char T[10240] = { 0, };

	sprintf(T, "Hello IRQ%d. I want Connect To \"#d,#d,#d,#d\". are you ok?", 8, In.IP.IP[0], In.IP.IP[1], In.IP.IP[2], In.IP.IP[3]);

	Write(In.Hard, T,sizeof(T));

	Read(In.Hard, T, sizeof(T));

	if (strcmp(T, "ok.")==0) { return true; }

	return false;
}


template <class T>
intmax_t Write(IPv4& In,T* D,size_t L){
	char S[] = "I try write.ok?";
	char S2[] = "Start.";
	Wrire(In.Hard, S, size_t(S));
	Read(In.Hard, S, sizeof(S));

	if (strcmp(S, "ok.")==0) { return 0; }
	Wrire(In.Hard, S2, size_t(S2));

	Write(In.Hard, (void*)D, L * sizeof(T));]

	return 0xdeadbeef;
}
template <class T>
intmax_t Read(IPv4& In,T* D,size_t L){
	char S[] = "I try Read.ok?";
	char S2[] = "Start.";
	Wrire(In.Hard, S, size_t(S));
	Read(In.Hard, S, sizeof(S));

	if (strcmp(S, "ok.")==0) { return 0; }
	Wrire(In.Hard, S2, size_t(S2));

	Read(In.Hard, (void*)D, L * sizeof(T));]

	return 0xdeadbeef;
}

template<class T,class U>
bool TCP_Wrire(IPv4& In, T* D, size_t L, U* comment, size_t N) {
	IP_1st A;
	IP_2nd B;
	IP_3rd C;
	IP_4th DD;
	IP_1st E;
	IP_2nd F;
	IP_3rd G;
	IP_4th H;

	Write(In.Hard, (void*)A,  sizeof(A));
	Write(In.Hard, (void*)B,  sizeof(B));
	Write(In.Hard, (void*)C,  sizeof(C));
	Write(In.Hard, (void*)DD,  sizeof(D));

	Write(In.Hard, (void*)D, L * sizeof(T));
	Write(In.Hard, (void*)comment, N*sizeof(U));

	Write(In.Hard, (void*)E,  sizeof(A));
	Write(In.Hard, (void*)F,  sizeof(B));
	Write(In.Hard, (void*)G,  sizeof(C));
	Write(In.Hard, (void*)H,  sizeof(D));

	if (strcmp(S, "ok.")==0) { return true; }

	return false;
}
bool DisConnect(IPv4& In) {
	if (IsConnect(In.Hard) == false) { return false; }

	char S[1240] = "I tring to DisConnect. See you.";

	Write(In, S, sizeof(S));
	Read(In, S, sizeof(S));

	if (strcmp(S, "ok.")!=0) { printf("%s", S); }
	
	return true;
}