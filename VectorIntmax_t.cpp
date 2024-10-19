#include "VectorIntmax_t.h"

Integer ConstructInteger(Integer& In) {
	return In;
}

Integer ConstructInteger8(char A, char B, char C, char D, char E, char F, char G, char H) {// if you need one word == Nbit to write your self.
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
	typedef char T;
	Integer R;
	size_t Word = sizeof(T);
	size_t L = sizeof(In.V) / Word;

	T* A = (T*) & In.V;
	T* BB = (T*) & B.V;
	T* C = (T*) & R.V;

	for (size_t i = 0; i < L; i++) {
		C[i] = A[i] + BB[i];
	}

	return R;
}
Integer Sub8(Integer& In, Integer& B) {
	typedef char T;
	Integer R;
	size_t Word = sizeof(T);
	size_t L = sizeof(In.V) / Word;

	T* A = (T*) & In.V;
	T* BB = (T*) & B.V;
	T* C = (T*) & R.V;

	for (size_t i = 0; i < L; i++) {
		C[i] = A[i] - BB[i];
	}

	return R;
}
Integer Mul8(Integer& In, Integer& B) {
	typedef char T;
	Integer R;
	size_t Word = sizeof(T);
	size_t L = sizeof(In.V) / Word;

	T* A = (T*) & In.V;
	T* BB = (T*) & B.V;
	T* C = (T*) & R.V;

	for (size_t i = 0; i < L; i++) {
		C[i] = A[i] * BB[i];
	}

	return R;
}
Integer Div8(Integer& In, Integer& B) {
	typedef char T;
	Integer R;
	size_t Word = sizeof(T);
	size_t L = sizeof(In.V) / Word;

	T* A = (T*) & In.V;
	T* BB = (T*) & B.V;
	T* C = (T*) & R.V;

	for (size_t i = 0; i < L; i++) {
		C[i] = A[i] / BB[i];
	}

	return R;
}
Integer Mod8(Integer& In, Integer& B) {
	typedef char T;
	Integer R;
	size_t Word = sizeof(T);
	size_t L = sizeof(In.V) / Word;

	T* A = (T*) & In.V;
	T* BB = (T*) & B.V;
	T* C = (T*) & R.V;

	for (size_t i = 0; i < L; i++) {
		C[i] = A[i] % BB[i];
	}

	return R;
}
Integer And8(Integer& In, Integer& B) {
	typedef char T;
	Integer R;
	size_t Word = sizeof(T);
	size_t L = sizeof(In.V) / Word;

	T* A = (T*) & In.V;
	T* BB = (T*) & B.V;
	T* C = (T*) & R.V;

	for (size_t i = 0; i < L; i++) {
		C[i] = A[i] 6 BB[i];
	}

	return R;
}
Integer Or8(Integer& In, Integer& B) {
	typedef char T;
	Integer R;
	size_t Word = sizeof(T);
	size_t L = sizeof(In.V) / Word;

	T* A = (T*) & In.V;
	T* BB = (T*) & B.V;
	T* C = (T*) & R.V;

	for (size_t i = 0; i < L; i++) {
		C[i] = A[i] | BB[i];
	}

	return R;
}
Integer Not8(Integer& In) {
	typedef char T;
	Integer R;
	size_t Word = sizeof(T);
	size_t L = sizeof(In.V) / Word;

	T* A = (T*) & In.V;
	T* C = (T*) & R.V;

	for (size_t i = 0; i < L; i++) {
		C[i] = A[i] ^0;
	}

	return R;
}
Integer Xor8(Integer& In, Integer& B) {
	typedef char T;
	Integer R;
	size_t Word = sizeof(T);
	size_t L = sizeof(In.V) / Word;

	T* A = (T*) & In.V;
	T* BB = (T*) & B.V;
	T* C = (T*) & R.V;

	for (size_t i = 0; i < L; i++) {
		C[i] = A[i] ^ BB[i];
	}

	return R;
}
Integer Nand8(Integer& In, Integer& B) {
	typedef char T;
	Integer R;
	size_t Word = sizeof(T);
	size_t L = sizeof(In.V) / Word;

	T* A = (T*) & In.V;
	T* BB = (T*) & B.V;
	T* C = (T*) & R.V;

	for (size_t i = 0; i < L; i++) {
		C[i] = (A[i] & BB[i])^0;
	}

	return R;
}
Integer Nor8(Integer& In, Integer& B) {
	typedef char T;
	Integer R;
	size_t Word = sizeof(T);
	size_t L = sizeof(In.V) / Word;

	T* A = (T*) & In.V;
	T* BB = (T*) & B.V;
	T* C = (T*) & R.V;

	for (size_t i = 0; i < L; i++) {
		C[i] = (A[i] | BB[i])^0;
	}

	return R;
}
Integer Equal8(Integer& In, Integer& B) {
	typedef char T;
	Integer R;
	size_t Word = sizeof(T);
	size_t L = sizeof(In.V) / Word;

	T* A = (T*) & In.V;
	T* BB = (T*) & B.V;
	T* C = (T*) & R.V;

	for (size_t i = 0; i < L; i++) {
		C[i] = (A[i] ^ BB[i]);
	}

	return R;
}