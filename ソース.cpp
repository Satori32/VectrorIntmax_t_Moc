/** /#include <stdio.h>
#include <stdint.h>

struct Integer
{
	intmax_t V = 0xdeadbeef;
};

Integer ConstructInteger(Integer& In) {
	return In;
}

Integer ConstructInteger8(char A, char B, char C, char D, char E, char F, char G, char H) {// if you need one word == N to write your self.
	Integer I;
	intmax_t* P = &I.V;
	size_t Word = sizeof(char);
	size_t L = sizeof(I.V) / Word;
	P[0] = A;
	P[1] = B;
	P[2] = C;
	P[3] = D;
	P[4] = E;
	P[5] = F;
	P[6] = G;
	P[7] = H;

	return I;
}
bool Free(Integer& In) {
	In.V = 0;
	return 0;
}

Integer Add8(Integer& In, Integer& B) {
	Integer R;
	size_t Word = sizeof(char);
	size_t L = sizeof(In.V) / Word;

	char* A = (char*)&In.V;
	char* BB = (char*)&B.V;
	char* C = (char*)&R.V;

	for (size_t i = 0; i < L; i++) {
		C[i] = A[i] + BB[i];
	}

	return R;
}
/**/