#pragma once
#include<iostream>
#include<string>
using namespace std;
class QInt
{
	QInt();
	QInt(QInt const &x);
	~QInt();

	void ScanQInt(QInt& x);
	void PrintQInt(QInt& x);
	bool* DecToBin(QInt x);
	QInt BinToDec(bool* bit);
	char* BinToHex(bool* bit);
	char* DecToHex(QInt x);
};
