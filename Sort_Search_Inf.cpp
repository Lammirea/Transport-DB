#include "Sort_Search_Inf.h"
bool CompareID(const Transport& left, const Transport& right)
{
	return left.TransportId < right.TransportId;
}

bool CompareType(const Transport& left, const Transport& right)
{
	return left.TransportType < right.TransportType;
}

bool CompareModel(const Transport& left, const Transport& right)
{
	return left.TransportModel < right.TransportModel;
}

bool CompareBrand(const Transport& left, const Transport& right)
{
	return left.TransportBrand < right.TransportBrand;
}

bool CompareWeight(const Transport& left, const Transport& right)
{
	return left.TransportWeight < right.TransportWeight;
}

bool CompareYear(const Transport& left, const Transport& right)
{
	return left.YearMade < right.YearMade;
}

void Sort_Search_Info::Sort_Needed(std::vector<Transport>& obj)
{
	CreateTable print_sort;
	using namespace std::placeholders; //for _1,_2 ....
	Transport compare;
	std::string param;
	std::cout << "Введите критерий, по которому будет осуществляться сортировка (ID , Вид, Марка, Модель, Вес, Год)\n";
	std::cin >> param;
	std::for_each(param.begin(), param.end(), [](char& c) {
		c = ::tolower(c);
	});
	if (param == "id")
	{
		std::sort(obj.begin(), obj.end(), CompareID);
	}
	else if (param == "вид") {
		std::sort(obj.begin(), obj.end(), CompareType);
	}
	else if (param == "марка") {
		std::sort(obj.begin(), obj.end(), CompareBrand);
	}
	else if (param == "модель") {
		std::sort(obj.begin(), obj.end(), CompareModel);
	}
	else if (param == "вес") {
		std::sort(obj.begin(), obj.end(), CompareWeight);
	}
	else if (param == "год") {
		std::sort(obj.begin(), obj.end(), CompareYear);
	}
	print_sort.print_fill_table(obj);
}
void Sort_Search_Info::Search_Needed(std::vector<Transport>& obj)
{
	std::vector<Transport> copy_obj; //вектор, в который копируем найденное поле
	std::string criterion;
	std::cout << "Введите критерий поиска: (ID , Вид, Марка, Модель, Вес, Год)\n";
	std::cin >> criterion;
	std::for_each(criterion.begin(), criterion.end(), [](char& c) {
		c = ::tolower(c);
	});
	CreateTable print_search;
	if (criterion == "id") {
		int id = 0;
		std::cout << "Введите идентификационный номер искомого средства:\n";
		std::cin >> id;
		for (unsigned i = 0; i < obj.size(); i++) {
			if (id == obj[i].Get_TransportId_info()) {
				copy_obj.push_back(obj[i]);
				print_search.print_fill_table(copy_obj);
			}
		}
	}
	else if (criterion == "вид") {
		std::string type;
		std::cout << "Введите тип искомого средства:\n";
		std::cin >> type;
		std::cin.ignore();
		std::getline(std::cin, type, '\n');
		for (unsigned i = 0; i < obj.size(); i++) {
			if (type == obj[i].Get_TransportType_Info()) {
				copy_obj.push_back(obj[i]);
				print_search.print_fill_table(copy_obj);
			}
		}
	}
	else if (criterion == "модель") {
		std::string model;
		std::cout << "Введите модель искомого средства:\n";
		std::cin.ignore();
		std::getline(std::cin, model, '\n');
		for (unsigned i = 0; i < obj.size(); i++) {
			if (model == obj[i].Get_TransportModel_Info()) {
				copy_obj.push_back(obj[i]);
				print_search.print_fill_table(copy_obj);
			}
		}
	}
	else if (criterion == "марка") {
		std::string brand;
		std::cout << "Введите марку искомого средства:\n";
		std::cin.ignore();
		std::getline(std::cin, brand, '\n');
		for (unsigned i = 0; i < obj.size(); i++) {
			if (brand == obj[i].Get_TransportBrand_info()) {
				copy_obj.push_back(obj[i]);
				print_search.print_fill_table(copy_obj);
			}
		}
	}
	else if (criterion == "вес") {
		double weight = 0;
		std::cout << "Введите вес искомого средства:\n";
		std::cin >> weight;
		for (unsigned i = 0; i < obj.size(); i++) {
			if (weight == obj[i].Get_TransportWeight_info()) {
				copy_obj.push_back(obj[i]);
				print_search.print_fill_table(copy_obj);
			}
		}
	}
	else if (criterion == "год") {
		int year = 0;
		std::cout << "Введите год выпуска искомого средства:\n";
		std::cin >> year;
		for (unsigned i = 0; i < obj.size(); i++) {
			if (year == obj[i].Get_YearMade_info()) {
				copy_obj.push_back(obj[i]);
				print_search.print_fill_table(copy_obj);
			}
		}
	}
}
Sort_Search_Info::~Sort_Search_Info()
{
}