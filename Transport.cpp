// Transport.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include "libs.h"
#include "userActions.h"

//Требования к приложению:
//Приложение должно предоставлять возможность учета транспортных средств.Каждое транспортное средство представлено записью в таблице.
//Каждая запись должна содержать следующие поля :
//Уникальный идентификатор(числовой)
//Тип транспортного средства(автомобиль, катер, самолет, космический корабль, …)
//Марка
//Модель
//Год выпуска
//Вес

//Требуемые действия с записями :
//Создание
//Редактирование
//Удаление
//Отображение всего списка с сортировкой по выбранному полю
//Поиск по выбранному полю
//Сохранение всех записей в файл
//Загрузка всех записей из файла


//class Car :public Transport
//{
//public:
//	Car() {};
//	~Car();
//
//private:
//
//};
//
//Car::~Car()
//{
//}
//
//class Airplane :public Transport
//{
//public:
//	Airplane() {};
//	~Airplane();
//
//private:
//
//};
//
//Airplane::~Airplane()
//{
//}
//
//class SpaceShip :public Transport
//{
//public:
//	SpaceShip() {};
//	~SpaceShip();
//
//private:
//
//};
//
//
//SpaceShip::~SpaceShip()
//{
//}
//
//class Boat :public Transport
//{
//public:
//	Boat() {};
//	~Boat();
//
//private:
//
//};
//
//Boat::~Boat()
//{
//}


//вывод таблицы данных на экраны

int main() {
	//setlocale(NULL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	UserActions actions;
	actions.ChooseActions();
	return 0;
}


