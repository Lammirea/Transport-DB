#include "create_delete_data.h"

void Create_Delete_Data::Create_Data(std::vector<Transport>& object) //функция создания новых записей
{
	int setTransportId, setYear; double setTransportWeight; std::string setTransportType, setTransportModel, setTransportBrand;
	int TransportAmount;
	Transport obj_pointer;
	std::cout << "Введите количество транспортных средств,информацию о которых Вы хотите внести: " << std::endl;
	std::cin >> TransportAmount;
	obj_pointer.Set_amount_of_info(TransportAmount);
	object.resize(TransportAmount);
	//Transport* object = new Transport[TransportAmount];
	for (unsigned i = 0; i < object.size(); i++)
	{
		std::cout << "Введите идентификационный номер:" << std::endl;
		std::cin >> setTransportId;
		object[i].Set_TransportId(setTransportId);
		std::cout << "Введите вид транспортного средства:" << std::endl;
		std::cin.ignore();
		std::getline(std::cin, setTransportType, '\n');
		object[i].Set_TransportType(setTransportType);
		std::cout << "Введите марку:" << std::endl;
		std::cin.ignore();
		std::getline(std::cin, setTransportBrand, '\n');
		object[i].Set_TransportBrand(setTransportBrand);
		std::cout << "Введите модель:" << std::endl;
		std::cin.ignore();
		std::getline(std::cin, setTransportModel, '\n');
		object[i].Set_TransportModel(setTransportModel);
		std::cout << "Введите год выпуска:" << std::endl;
		std::cin >> setYear;
		object[i].Set_Year(setYear);
		std::cout << "Введите вес в тоннах:" << std::endl;
		std::cin >> setTransportWeight;
		object[i].Set_TransportWeight(setTransportWeight);
	}
}


void Create_Delete_Data::Change_Data(std::vector<Transport>& obj)
{
	CreateTable table_obj;
	int choice = 0, id = 0;
	std::string param;

	//переменные, которые будем изменять
	int Change_TransportId = 0, Change_Year = 0;
	double Change_TransportWeight = 0;
	std::string Change_TransportType, Change_TransportModel, Change_TransportBrand;
	//////////////////////////////////////////////////////////////////////////////////////
	std::cout << "Выберите действие: 1 - Изменить всю информацию об объекте\n 2- Изменить выбранный параметр\n";
	std::cin >> choice;
	switch (choice) {
	case 1:
		std::cout << "Введите идентификационный номер транспортного средства, которое хотите изменить:\n";
		std::cin >> id;
		for (unsigned i = 0; i < obj.size(); i++)
		{
			if (id == obj[i].Get_TransportId_info())
			{
				std::cout << "Введите идентификационный номер:" << std::endl;
				std::cin >> Change_TransportId;
				obj[i].Set_TransportId(Change_TransportId);
				std::cout << "Введите вид транспортного средства:" << std::endl;
				std::cin.ignore();
				std::getline(std::cin, Change_TransportType, '\n');
				obj[i].Set_TransportType(Change_TransportType);
				std::cout << "Введите марку:" << std::endl;
				std::cin.ignore();
				std::getline(std::cin, Change_TransportBrand, '\n');
				obj[i].Set_TransportBrand(Change_TransportBrand);
				std::cout << "Введите модель:" << std::endl;
				std::cin.ignore();
				std::getline(std::cin, Change_TransportModel, '\n');
				obj[i].Set_TransportModel(Change_TransportModel);
				std::cout << "Введите год выпуска:" << std::endl;
				std::cin >> Change_Year;
				obj[i].Set_Year(Change_Year);
				std::cout << "Введите вес в тоннах:" << std::endl;
				std::cin >> Change_TransportWeight;
				obj[i].Set_TransportWeight(Change_TransportWeight);
			}
		}
		table_obj.print_fill_table(obj);
		break;
	case 2:
		std::cout << "Введите идентификационный номер транспортного средства, которое хотите изменить:\n";
		std::cin >> id;
		for (unsigned i = 0; i < obj.size(); i++) {
			if (id == obj[i].Get_TransportId_info()) {
				std::cout << "Введите параметр, который вы хотите изменить (ID , Вид, Марка, Модель, Вес, Год):\n";
				std::cin >> param;
				std::for_each(param.begin(), param.end(), [](char& c) {
					c = ::tolower(c);
				});
				if (param == "id")
				{
					std::cout << "Введите идентификационный номер:\n";
					std::cin >> Change_TransportId;
					obj[i].Set_TransportId(Change_TransportId);

				}
				else if (param == "вид") {
					std::cout << "Введите вид транспортного средства:" << std::endl;
					std::cout << "Введите модель:" << std::endl;
					std::cin.ignore();
					std::getline(std::cin, Change_TransportType, '\n');
					obj[i].Set_TransportType(Change_TransportType);
				}
				else if (param == "марка") {
					std::cout << "Введите марку:" << std::endl;
					std::cout << "Введите модель:" << std::endl;
					std::cin.ignore();
					std::getline(std::cin, Change_TransportBrand, '\n');
					obj[i].Set_TransportBrand(Change_TransportBrand);
				}
				else if (param == "модель") {
					std::cout << "Введите модель:" << std::endl;
					std::cout << "Введите модель:" << std::endl;
					std::cin.ignore();
					std::getline(std::cin, Change_TransportModel, '\n');
					obj[i].Set_TransportModel(Change_TransportModel);
				}
				else if (param == "вес") {
					std::cout << "Введите вес в тоннах:" << std::endl;
					std::cin >> Change_TransportWeight;
					obj[i].Set_TransportWeight(Change_TransportWeight);
				}
				else if (param == "год") {
					std::cout << "Введите год выпуска:" << std::endl;
					std::cin >> Change_Year;
					obj[i].Set_Year(Change_Year);
				}
			}
		}
		table_obj.print_fill_table(obj);
		break;

	default:
		break;
	}
}

void Create_Delete_Data::Delete_Data(std::vector <Transport>& arr_obj) //функция удаления объектов
{
	CreateTable table_obj;

	//Transport obj;
	int choice = 0, ID = 0;
	std::cout << "Выберите действие:\n 1 - Удалить данные о всех транспортных средствах; \n 2 - Удалить данные о конкретном транспортном средстве.\n";
	std::cin >> choice;
	switch (choice)
	{
	case 1:
		arr_obj.clear();
		std::cout << "Данные о транспортах удалены!\n";
		break;
	case 2:
		std::cout << "Введите идентификационный номер объекта, который хотите удалить: " << std::endl;
		std::cin >> ID;
		for (unsigned i = 0; i < arr_obj.size(); i++)
		{
			if ((ID == arr_obj[i].Get_TransportId_info()) /*&& (std::find(arr_obj.begin(), arr_obj.end(), ID) != arr_obj.end())*/) {
				arr_obj.erase(arr_obj.begin() + i);
			}
		}
		table_obj.print_fill_table(arr_obj);
		break;
	default:
		break;
	}
}

Create_Delete_Data::~Create_Delete_Data()
{
}