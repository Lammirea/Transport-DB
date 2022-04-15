#include "ActionsWithTXT.h"
//запись в файл
AcionsWithTxtFile::~AcionsWithTxtFile()
{
}
int AcionsWithTxtFile::input(std::vector<Transport>& obj)
{
	Transport obj_pointer;
	//obj_pointer.Set_amount_of_info(amount);
	setlocale(NULL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::ofstream out;
	out.open("C:\\input_data.txt", std::ios::app);
	out.imbue(std::locale(""));
	//Transport* obj = new Transport[obj_pointer.Get_amount()];
	if (out.is_open())
	{
		std::cout << "Файл создан\n";
		for (unsigned i = 0; i < obj.size(); i++)
		{
			//out << "\nИдентификационный номер:\t";
			out << obj[i].Get_TransportId_info();
			//out << "\nТип:\t";
			out << "\n";
			out << obj[i].Get_TransportType_Info();
			//out << "\nМарка:\t";
			out << "\n";
			out << obj[i].Get_TransportBrand_info();
			//out << "\nМодель:\t";
			out << "\n";
			out << obj[i].Get_TransportModel_Info();
			//out << "\nВес:\t";
			out << "\n";
			out << obj[i].Get_TransportWeight_info();
			//out << "\nГод выпуска:\t";
			out << "\n";
			out << obj[i].Get_YearMade_info();
			out << "\n";
			//out.write(reinterpret_cast<char*>(&obj[i]), sizeof(obj));
		}

	}
	std::cout << "Данные записаны в файл!" << std::endl;
	out.close();
	return 0;
}

//вывод данных из файла в таблицу
int AcionsWithTxtFile::output()
{
	std::vector <Transport> read_from_file;
	std::ifstream in("C:\\input_data.txt"); // открываем файл для чтения
	int TransportId_txt = 0, YearMade_txt = 0;                             //объекты
	double TransportWeight_txt = 0;                                   //которые считываем 
	std::string TransportType_txt, TransportModel_txt, TransportBrand_txt;   //из файла
	if (in.is_open())
	{
		std::cout << "Файл открыт для вывода!" << std::endl;
		while (!in.eof())
		{
			in >> TransportId_txt >> TransportType_txt >> TransportBrand_txt >> TransportModel_txt >> TransportWeight_txt >> YearMade_txt;
			read_from_file.push_back(Transport(TransportId_txt, TransportType_txt, TransportBrand_txt, TransportModel_txt, TransportWeight_txt, YearMade_txt));
		}
	}
	in.close();     // закрываем файл
	CreateTable table;
	table.print_fill_table(read_from_file);

	return 0;
}
