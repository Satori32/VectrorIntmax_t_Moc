#pragma once
#include <stdio.h>
#include <stdint.h>

struct Integer
{
	intmax_t V = 0xdeadbeef;
};
Integer ConstructInteger8(char A, char B, char C, char D, char E, char F, char G, char H);
bool Free(Integer& In);
Integer Add8(Integer& In, Integer& B);
Integer Sub8(Integer& In, Integer& B);
Integer Mul8(Integer& In, Integer& B);
Integer Div8(Integer& In, Integer& B);
Integer Mod8(Integer& In, Integer& B);
Integer And8(Integer& In, Integer& B);
Integer Or8(Integer& In, Integer& B);
Integer Not8(Integer& In);
Integer Xor8(Integer& In, Integer& B);
Integer Nand8(Integer& In, Integer& B);
Integer Nor8(Integer& In, Integer& B);
Integer Equal8(Integer& In, Integer& B);