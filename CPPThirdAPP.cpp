#include <iostream>

// ТОВАР: МНОГОФАЙЛОВЫЕБ
// ЕНАМЫ: всякая всячина бла-бла-бла... (БЕЗ УТОЧНЕНИЯ МОДЕЛИ, МАРКИ И ТАК ДАЛЕЕ (АБСТРАКТНОЕ ОПРЕДЕЛЕНИЕ))
// КЛАСС: ТОВАР
enum E_Categorys
{
	Categorys_Electronic,
	Categorys_Furniture,		// - мебель
	Categorys_Dishes			// - посуда
};

class C_Product
{
public:
	C_Product()
	{
		name_product = (char*)"Товар...";
		categorys = E_Categorys::Categorys_Electronic;
	}
	C_Product(char* _name_product, E_Categorys _categorys)
	{
		name_product = _name_product;
		categorys = _categorys;
	}

	void void_categorys(E_Categorys e_categorys)
	{
		if (e_categorys == Categorys_Electronic)
		{
			std::cout << (char*)"Электроника";
		}
		else if (e_categorys == Categorys_Furniture)
		{
			std::cout << (char*)"Мебель";
		}
		else if (e_categorys == Categorys_Dishes)
		{
			std::cout << (char*)"Посуда";
		}
		else
		{
			std::cout << (char*)"?";
		}
	}

	void show_info()
	{
		std::cout << "Имя товара: " << name_product << "\n";
		std::cout << "Категория товара: " << categorys << "\n\n";
	}

private:
	char* name_product;
	E_Categorys categorys;
};

int main()
{
	setlocale(LC_ALL, "Russian");

	C_Product product1((char*)"Стул", Categorys_Furniture);
	product1.show_info();
}