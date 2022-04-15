#include "ActionsWithTXT.h"
//������ � ����
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
		std::cout << "���� ������\n";
		for (unsigned i = 0; i < obj.size(); i++)
		{
			//out << "\n����������������� �����:\t";
			out << obj[i].Get_TransportId_info();
			//out << "\n���:\t";
			out << "\n";
			out << obj[i].Get_TransportType_Info();
			//out << "\n�����:\t";
			out << "\n";
			out << obj[i].Get_TransportBrand_info();
			//out << "\n������:\t";
			out << "\n";
			out << obj[i].Get_TransportModel_Info();
			//out << "\n���:\t";
			out << "\n";
			out << obj[i].Get_TransportWeight_info();
			//out << "\n��� �������:\t";
			out << "\n";
			out << obj[i].Get_YearMade_info();
			out << "\n";
			//out.write(reinterpret_cast<char*>(&obj[i]), sizeof(obj));
		}

	}
	std::cout << "������ �������� � ����!" << std::endl;
	out.close();
	return 0;
}

//����� ������ �� ����� � �������
int AcionsWithTxtFile::output()
{
	std::vector <Transport> read_from_file;
	std::ifstream in("C:\\input_data.txt"); // ��������� ���� ��� ������
	int TransportId_txt = 0, YearMade_txt = 0;                             //�������
	double TransportWeight_txt = 0;                                   //������� ��������� 
	std::string TransportType_txt, TransportModel_txt, TransportBrand_txt;   //�� �����
	if (in.is_open())
	{
		std::cout << "���� ������ ��� ������!" << std::endl;
		while (!in.eof())
		{
			in >> TransportId_txt >> TransportType_txt >> TransportBrand_txt >> TransportModel_txt >> TransportWeight_txt >> YearMade_txt;
			read_from_file.push_back(Transport(TransportId_txt, TransportType_txt, TransportBrand_txt, TransportModel_txt, TransportWeight_txt, YearMade_txt));
		}
	}
	in.close();     // ��������� ����
	CreateTable table;
	table.print_fill_table(read_from_file);

	return 0;
}
