#include<string>
#include<iostream>
#include<msclr/marshal.h>
#include<fstream>

using namespace std;
class CBox//��� �������� ���� �������
{
private:
	string sMaterial;//���� � ������ ��������
	double dWidth;//���� ������ ������� � ������
	double dLength;// ���� ������� ������� � ������
	double dHeight;// ���� ������ ������� � ������
	double dPriceForOneSquareMeter;//���� ���� �������� �� 1 ��. ����
	double dMaterialPrice;//���� ���������� ��������
	double dBoxPrice;//���� ���������� �������
public:
	string  Get_sMaterial() const// ����� ��� ��������� ����� ��������
	{
		return sMaterial;
	}
	double Get_dWidth()const//����� ��� ��������� ������
	{
		return dWidth;
	}
	double Get_dLength() const//����� ��� ��������� �������
	{
		return dLength;
	}
	double Get_dHeight() const//����� ��� ��������� ������
	{
		return dHeight;
	}
	double Get_dPriceForOneSquareMeter() const // ����� ��� ��������� ���� �� 1 ��. ����
	{
		return dPriceForOneSquareMeter;
	}
	double Get_dMaterialPrice() const//����� ��� ��������� ���������� ��������
	{
		return dMaterialPrice;
	}
	double Get_dBoxPrice() const//����� ��� ��������� ���������� �������
	{
		return dBoxPrice;
	}
	void Set_sMaterial(string sMaterial)//����� ��� ������� ����� ��������
	{
		this->sMaterial = sMaterial;
	}
	void Set_dWidth(double dWidth)//����� ��� ������� ������ ��������
	{
		this->dWidth = dWidth;
	}
	void Set_dLength(double dLength)//����� ��� ������� ������� ��������
	{
		this->dLength = dLength;
	}
	void Set_dHeight(double dHeight)//����� ��� ������� ������ ��������
	{
		this->dHeight = dHeight;
	}
	void Set_dPriceForOneSquareMeter(double dPriceForOneSquareMeter)//����� ��� ������� ֳ�� �� 1 ��. ���� 
	{
		this->dPriceForOneSquareMeter = dPriceForOneSquareMeter;
	}
	CBox()//����������� �� ������������� 
	{
		sMaterial = " ";
		dWidth = 0;
		dLength = 0;
		dHeight = 0;
		dPriceForOneSquareMeter = 0;
		dMaterialPrice = 0;
		dBoxPrice = 0;
	}
	CBox(string material, double width, double length, double height, double price) //����������� � �����������
	{
		this->sMaterial = material;
		this->dWidth = width;
		this->dLength = length;
		this->dHeight = height;
		this->dPriceForOneSquareMeter = price;
		this->dMaterialPrice = 0;
		this->dBoxPrice = 0;
		CalculatedMaterialPrice();
		CalculatedBoxPrice();
	}
	CBox(const CBox& other)//����������� ��������� 
	{
		this->sMaterial = other.sMaterial;
		this->dWidth = other.dWidth;
		this->dLength = other.dLength;
		this->dHeight = other.dHeight;
		this->dPriceForOneSquareMeter = other.dPriceForOneSquareMeter;
		this->dMaterialPrice = other.dMaterialPrice;
		this->dBoxPrice = other.dBoxPrice;
	}
	double CalculateSquareBox()//����� ��� ������������� ����� �������
	{
		return (2 * ((dWidth * dLength) + (dWidth * dHeight) + (dLength * dHeight)));
	}
	void CalculatedMaterialPrice()//����� ��� ������������� ���������� �������� �� ���� �����
	{
		dMaterialPrice = CalculateSquareBox() * dPriceForOneSquareMeter;
	}
	void CalculatedBoxPrice()//����� ��� ������������ ���� �������
	{
		dBoxPrice = dMaterialPrice*1.5 * (1 + 0.1 + 0.13567);
		dBoxPrice = round(dBoxPrice * 100) / 100; // ������������ �� 2 ����� ���� ����
	}
	friend std::ostream& operator<<(std::ostream& os, const CBox& box)//�������������� �������� ������
	{
		os << "Material: " << box.sMaterial << endl;
		os << "Width: " << box.dWidth << " meters" << endl;
		os << "Length: " << box.dLength << " meters" << endl;
		os << "Height: " << box.dHeight << " meters" << endl;
		os << "Price per square meter: $" << box.dPriceForOneSquareMeter << endl;
		os << "Material cost: $" << box.dMaterialPrice << endl;
		os << "Box cost: $" << box.dBoxPrice << endl;
		os << "======================" << endl;
		return os;
	}
	friend ifstream& operator>>(ifstream& in, CBox& box)// �������������� �������� �����
	{
		in >> box.sMaterial;
		in >> box.dWidth;
		in >> box.dLength;
		in >> box.dHeight;
		in>> box.dPriceForOneSquareMeter;
			std::string line;
			while (std::getline(in, line)) {
				if (line == "======================") {
					break;  // ����������, ���� �������� ���������
				}
			}
			return in;
	}

};