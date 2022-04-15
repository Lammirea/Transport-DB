#include "userActions.h"
void UserActions::ChooseActions()
{
	std::string choice, CarType, CarModel, CarBrand;
	int CarAmount = 0, CarId = 0, YearMade = 0, contin = 1;
	int* p;
	double CarWeight = 0;
	std::vector<Transport> obj;
	Create_Delete_Data cre_del;
	while (contin == 1) {
		std::cout << "Выберите действие:" << "\n" << "Создание - нажмите на букву C" << "\n" << "Редактирование - нажмите на букву Р" << "\n" << "Удаление - нажмите на букву У" << "\n"
			<< "Отображение всего списка с сортировкой по выбранному полю - нажмите на букву О" << "\n" << "Поиск по выбранному полю - нажмите на букву П" << "\n"
			<< "Сохранение всех записей в файл - нажмите на букву Ф" << "\n" << "Загрузка всех записей из файла - нажмите на букву З\n" << "Вывод всех данных в консоль - нажмите букву В" << std::endl;
		std::cin >> choice;
		std::cout << std::endl;

		if (choice == "С" || choice == "с")
		{
			cre_del.Create_Data(obj);
			//object.Set_all_CarInfo();
		}
		else if (choice == "Р" || choice == "р")
		{
			cre_del.Change_Data(obj);
		}
		else if (choice == "У" || choice == "у")
		{
			cre_del.Delete_Data(obj);
		}
		else if (choice == "О" || choice == "о")
		{
			//сортировка по убыванию, возростанию, от а до я и наоборот
			Sort_Search_Info sort;
			sort.Sort_Needed(obj);
		}
		else if (choice == "П" || choice == "п")
		{
			Sort_Search_Info search;
			search.Search_Needed(obj);
		}
		else if (choice == "Ф" || choice == "ф")
		{
			AcionsWithTxtFile input_obj;
			input_obj.input(obj);
		}
		else if (choice == "З" || choice == "з")
		{
			AcionsWithTxtFile output_obj;
			output_obj.output();
		}
		else if (choice == "В" || choice == "в")
		{
			CreateTable table_obj;
			table_obj.print_fill_table(obj);
		}

		std::cout << "Продолжить? (yes - 1)" << std::endl;
		std::cin >> contin;
	}
}

UserActions::~UserActions()
{
}