<<<<<<< HEAD
// ÍÍĂÓ, ÂĚĘ, Ęóđń "Ěĺňîäű ďđîăđŕěěčđîâŕíč˙-2", Ń++, ÎÎĎ
//
// tbitfield.cpp - Copyright (c) Ăĺđăĺëü Â.Ď. 07.05.2001
//   Ďĺđĺđŕáîňŕíî äë˙ Microsoft Visual Studio 2008 Ńűńîĺâűě Ŕ.Â. (19.04.2015)
//
// Áčňîâîĺ ďîëĺ
=======
// ����, ���, ���� "������ ����������������-2", �++, ���
//
// tbitfield.cpp - Copyright (c) ������� �.�. 07.05.2001
//   ������������ ��� Microsoft Visual Studio 2008 �������� �.�. (19.04.2015)
//
// ������� ����

>>>>>>> fd8649f96a184ed262dd1aab6e5f32eddf50e9c7

#include <math.h>
#include "tbitfield.h"

TBitField::TBitField(int len)

{

	if (len < 0)
		throw "error";

<<<<<<< HEAD
	MemLen = ceil(static_cast<double>(len) / (sizeof(TELEM) * 8));
=======
	MemLen = ceil(static_cast<double>(len) / (sizeof(TELEM)* 8));
>>>>>>> fd8649f96a184ed262dd1aab6e5f32eddf50e9c7
	BitLen = len;
	pMem = new TELEM[MemLen];
	for (int i = 0; i < MemLen; i++)
		pMem[i] = 0;
}

<<<<<<< HEAD
TBitField::TBitField(const TBitField &bf) // ęîíńňđóęňîđ ęîďčđîâŕíč˙
=======
TBitField::TBitField(const TBitField &bf) // ����������� �����������
>>>>>>> fd8649f96a184ed262dd1aab6e5f32eddf50e9c7
{
	BitLen = bf.BitLen;
	MemLen = bf.MemLen;
	pMem = new TELEM[MemLen];

	for (int i = MemLen - 1; i >= 0; i--)
	{
		pMem[i] = bf.pMem[i];
	}
}

TBitField::~TBitField()
{
	delete[] pMem;
}

<<<<<<< HEAD
int TBitField::GetMemIndex(const int n) const // číäĺęń Ěĺě äë˙ áčňŕ n
=======
int TBitField::GetMemIndex(const int n) const // ������ ��� ��� ���� n
>>>>>>> fd8649f96a184ed262dd1aab6e5f32eddf50e9c7
{
	if (n < 0 || n > BitLen)
		throw "error";
	else if (n != 0)
<<<<<<< HEAD
		return MemLen - ceil(static_cast<double>(n) / (sizeof(TELEM) * 8));
=======
		return MemLen - ceil(static_cast<double>(n) / (sizeof(TELEM)* 8));
>>>>>>> fd8649f96a184ed262dd1aab6e5f32eddf50e9c7
	else
		return MemLen - 1;
}

<<<<<<< HEAD
TELEM TBitField::GetMemMask(const int n) const // áčňîâŕ˙ ěŕńęŕ äë˙ áčňŕ n
=======
TELEM TBitField::GetMemMask(const int n) const // ������� ����� ��� ���� n
>>>>>>> fd8649f96a184ed262dd1aab6e5f32eddf50e9c7
{
	if (n < 0 || n > BitLen)
		throw "error";
	else
		return 1 << n;
}

<<<<<<< HEAD
// äîńňóď ę áčňŕě áčňîâîăî ďîë˙

int TBitField::GetLength(void) const // ďîëó÷čňü äëčíó (ę-âî áčňîâ)
=======
// ������ � ����� �������� ����

int TBitField::GetLength(void) const // �������� ����� (�-�� �����)
>>>>>>> fd8649f96a184ed262dd1aab6e5f32eddf50e9c7
{
	return BitLen;
}

<<<<<<< HEAD
void TBitField::SetBit(const int n) // óńňŕíîâčňü áčň
=======
void TBitField::SetBit(const int n) // ���������� ���
>>>>>>> fd8649f96a184ed262dd1aab6e5f32eddf50e9c7
{
	if (n < 0 || n > BitLen)
		throw "error";
	else if (GetBit(n) != 1)
		pMem[GetMemIndex(n)] |= GetMemMask(n);
}

<<<<<<< HEAD
void TBitField::ClrBit(const int n) // î÷čńňčňü áčň
=======
void TBitField::ClrBit(const int n) // �������� ���
>>>>>>> fd8649f96a184ed262dd1aab6e5f32eddf50e9c7
{
	if (n < 0 || n > BitLen)
		throw "error";
	else if (GetBit(n) != 0)
		pMem[GetMemIndex(n)] ^= GetMemMask(n);
}

<<<<<<< HEAD
int TBitField::GetBit(const int n) const // ďîëó÷čňü çíŕ÷ĺíčĺ áčňŕ
=======
int TBitField::GetBit(const int n) const // �������� �������� ����
>>>>>>> fd8649f96a184ed262dd1aab6e5f32eddf50e9c7
{
	if (n < 0 || n > BitLen)
		throw "Unexpected bit index";
	else
		return (pMem[GetMemIndex(n)] & GetMemMask(n)) != 0 ? 1 : 0;
}

<<<<<<< HEAD
// áčňîâűĺ îďĺđŕöčč

TBitField& TBitField::operator = (const TBitField &bf) // ďđčńâŕčâŕíčĺ
=======
// ������� ��������

TBitField& TBitField::operator = (const TBitField &bf) // ������������
>>>>>>> fd8649f96a184ed262dd1aab6e5f32eddf50e9c7
{
	if (bf.MemLen == 0)
		throw "error";
	else
	{
		BitLen = bf.BitLen;
		MemLen = bf.MemLen;
		pMem = new TELEM[MemLen];

		for (int i = MemLen - 1; i >= 0; i--)
		{
			pMem[i] = bf.pMem[i];
		}

		return *this;
	}
}

<<<<<<< HEAD
int TBitField::operator == (const TBitField &bf) const // ńđŕâíĺíčĺ
=======
int TBitField::operator == (const TBitField &bf) const // ���������
>>>>>>> fd8649f96a184ed262dd1aab6e5f32eddf50e9c7
{
	if (bf.MemLen == 0)
		throw "error";
	else
	{
		bool check = 1;
		int length;

		if (BitLen >= bf.BitLen)
		{
			length = bf.MemLen - 1;
			for (int i = MemLen - 1; i >= bf.MemLen - 1; i--, length--)
			{
				check &= pMem[i] == bf.pMem[length];
			}
		}
		else
		{
			length = MemLen - 1;
			for (int i = bf.MemLen - 1; i >= MemLen - 1; i--, length--)
			{
				check &= pMem[length] == bf.pMem[i];
			}
		}

		return check;
	}
}

<<<<<<< HEAD
int TBitField::operator != (const TBitField &bf) const // ńđŕâíĺíčĺ
=======
int TBitField::operator != (const TBitField &bf) const // ���������
>>>>>>> fd8649f96a184ed262dd1aab6e5f32eddf50e9c7
{
	return !(operator==(bf));
}

<<<<<<< HEAD
TBitField TBitField::operator|(const TBitField &bf) // îďĺđŕöč˙ "čëč"
=======
TBitField TBitField::operator|(const TBitField &bf) // �������� "���"
>>>>>>> fd8649f96a184ed262dd1aab6e5f32eddf50e9c7
{
	int len = BitLen;

	if (BitLen < bf.BitLen)
		len = bf.BitLen;

	TBitField tmp(len);

	for (int i = 0; i < MemLen; i++)
		tmp.pMem[i] = pMem[i];

	for (int i = 0; i < bf.MemLen; i++)
		tmp.pMem[i] |= bf.pMem[i];

	return tmp;
}

<<<<<<< HEAD
TBitField TBitField::operator & (const TBitField &bf) // îďĺđŕöč˙ "č"
=======
TBitField TBitField::operator & (const TBitField &bf) // �������� "�"
>>>>>>> fd8649f96a184ed262dd1aab6e5f32eddf50e9c7
{
	int len = BitLen;

	if (bf.BitLen > len)
		len = bf.BitLen;

	TBitField temp(len);

	for (int i = 0; i < MemLen; i++)
		temp.pMem[i] = pMem[i];

	for (int i = 0; i < bf.MemLen; i++)
		temp.pMem[i] &= bf.pMem[i];

	return temp;
}

<<<<<<< HEAD
TBitField TBitField::operator~ (void) // îňđčöŕíčĺ
=======
TBitField TBitField::operator~ (void) // ���������
>>>>>>> fd8649f96a184ed262dd1aab6e5f32eddf50e9c7
{
	TBitField tmp(BitLen);
	TELEM mask = 0;

<<<<<<< HEAD
	for (int i = (MemLen - 1) * sizeof(TELEM) * 8; i < BitLen; i++)
=======
	for (int i = (MemLen - 1) * sizeof(TELEM)* 8; i < BitLen; i++)
>>>>>>> fd8649f96a184ed262dd1aab6e5f32eddf50e9c7
		mask += GetMemMask(i);
	tmp.pMem[0] = pMem[0] ^ mask;

	for (int i = MemLen - 1; i > 0; i--)
		tmp.pMem[i] = ~pMem[i];
	return tmp;
}

<<<<<<< HEAD
// ââîä/âűâîä

istream &operator>>(istream &istr, TBitField &bf) // ââîä
=======
// ����/�����

istream &operator>>(istream &istr, TBitField &bf) // ����
>>>>>>> fd8649f96a184ed262dd1aab6e5f32eddf50e9c7
{
	int i = 0;
	char ch;
	do { istr >> ch; } while (ch != ' ');
	while (1)
	{
		istr >> ch;
		if (ch == '0')
			bf.ClrBit(i++);
		else if (ch == '1')
			bf.SetBit(i++);
		else break;
	}
	return istr;
}

<<<<<<< HEAD
ostream &operator<<(ostream &ostr, const TBitField &bf) // âűâîä
{
	for (int i = 0; i < bf.GetLength(); i++)
		if (bf.GetBit(i)) ostr << '1';
		else ostr << '0';
=======
ostream &operator<<(ostream &ostr, const TBitField &bf) // �����
{
	for (int i = 0; i < bf.GetLength(); i++)
	if (bf.GetBit(i)) ostr << '1';
	else ostr << '0';
>>>>>>> fd8649f96a184ed262dd1aab6e5f32eddf50e9c7
	return ostr;
}