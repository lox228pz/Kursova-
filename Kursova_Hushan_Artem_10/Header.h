#include<string>
#include<iostream>
#include<msclr/marshal.h>
#include<fstream>

using namespace std;
class CBox//наш основний клас Коробка
{
private:
	string sMaterial;//Поле з назвою матеріалу
	double dWidth;//Поле ширина коробки у метрах
	double dLength;// Поле довжина коробки у метрах
	double dHeight;// Поле висота коробки у метрах
	double dPriceForOneSquareMeter;//Поле ціна матеріалу за 1 кв. метр
	double dMaterialPrice;//Поле собівартості матеріалів
	double dBoxPrice;//Поле собівартості коробки
public:
	string  Get_sMaterial() const// Метод для отримання назви матеріалу
	{
		return sMaterial;
	}
	double Get_dWidth()const//Метод для отримання ширини
	{
		return dWidth;
	}
	double Get_dLength() const//Метод для отримання довжини
	{
		return dLength;
	}
	double Get_dHeight() const//Метод для отримання висоти
	{
		return dHeight;
	}
	double Get_dPriceForOneSquareMeter() const // Метод для отримання ціни за 1 кв. метр
	{
		return dPriceForOneSquareMeter;
	}
	double Get_dMaterialPrice() const//Метод для отримання собівартості матеріалів
	{
		return dMaterialPrice;
	}
	double Get_dBoxPrice() const//Метод для отримання собівартості коробки
	{
		return dBoxPrice;
	}
	void Set_sMaterial(string sMaterial)//Метод для задання назви матеріалу
	{
		this->sMaterial = sMaterial;
	}
	void Set_dWidth(double dWidth)//Метод для задання ширини матеріалу
	{
		this->dWidth = dWidth;
	}
	void Set_dLength(double dLength)//Метод для задання довжини матеріалу
	{
		this->dLength = dLength;
	}
	void Set_dHeight(double dHeight)//Метод для задання висоти матеріалу
	{
		this->dHeight = dHeight;
	}
	void Set_dPriceForOneSquareMeter(double dPriceForOneSquareMeter)//Метод для задання Ціни за 1 кв. метр 
	{
		this->dPriceForOneSquareMeter = dPriceForOneSquareMeter;
	}
	CBox()//Конструктор за замовчуванням 
	{
		sMaterial = " ";
		dWidth = 0;
		dLength = 0;
		dHeight = 0;
		dPriceForOneSquareMeter = 0;
		dMaterialPrice = 0;
		dBoxPrice = 0;
	}
	CBox(string material, double width, double length, double height, double price) //Конструктор з параметрами
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
	CBox(const CBox& other)//Конструктор копіювання 
	{
		this->sMaterial = other.sMaterial;
		this->dWidth = other.dWidth;
		this->dLength = other.dLength;
		this->dHeight = other.dHeight;
		this->dPriceForOneSquareMeter = other.dPriceForOneSquareMeter;
		this->dMaterialPrice = other.dMaterialPrice;
		this->dBoxPrice = other.dBoxPrice;
	}
	double CalculateSquareBox()//Метод для вираховування площі коробки
	{
		return (2 * ((dWidth * dLength) + (dWidth * dHeight) + (dLength * dHeight)));
	}
	void CalculatedMaterialPrice()//метод для вираховування собівартості матеріалів як поля класу
	{
		dMaterialPrice = CalculateSquareBox() * dPriceForOneSquareMeter;
	}
	void CalculatedBoxPrice()//Метод для розрахування ціни коробки
	{
		dBoxPrice = dMaterialPrice*1.5 * (1 + 0.1 + 0.13567);
		dBoxPrice = round(dBoxPrice * 100) / 100; // Заокруглення до 2 знаків після коми
	}
	friend std::ostream& operator<<(std::ostream& os, const CBox& box)//Перевантажений оператор виводу
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
	friend ifstream& operator>>(ifstream& in, CBox& box)// Перевантажений оператор вводу
	{
		in >> box.sMaterial;
		in >> box.dWidth;
		in >> box.dLength;
		in >> box.dHeight;
		in>> box.dPriceForOneSquareMeter;
			std::string line;
			while (std::getline(in, line)) {
				if (line == "======================") {
					break;  // Зупинитись, якщо знайдено роздільник
				}
			}
			return in;
	}

};