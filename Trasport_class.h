#pragma once
#include "libs.h"

class Transport
{
public:
	Transport() { };
	Transport(const Transport& info);
	Transport(int ID, std::string Type, std::string Brand, std::string Model, double weight, int Year) : TransportId(ID), TransportType(Type), TransportModel(Model),
		TransportBrand(Brand), TransportWeight(weight), YearMade(Year) { }
	std::string Get_TransportType_Info() { return TransportType; }
	std::string Get_TransportModel_Info() { return TransportModel; }
	int Get_TransportId_info() { return TransportId; }
	int Get_YearMade_info() { return YearMade; }
	double Get_TransportWeight_info() { return TransportWeight; }
	std::string Get_TransportBrand_info() { return TransportBrand; }
	int Get_amount() { return amount; }
	void Set_TransportId(int setTransportId) { TransportId = setTransportId; }
	void Set_Year(int setYear) { YearMade = setYear; }
	void Set_TransportWeight(double setTransportWeight) { TransportWeight = setTransportWeight; }
	void Set_TransportType(std::string setTransportType) { TransportType = setTransportType; }
	void Set_TransportModel(std::string setTransportModel) { TransportModel = setTransportModel; }
	void Set_TransportBrand(std::string setTransportBrand) { TransportBrand = setTransportBrand; }
	void Set_amount_of_info(int pointer) { amount = pointer; }
	friend bool CompareID(const Transport& left, const Transport& right); //сравнение id каждого объекта
	friend bool CompareType(const Transport& left, const Transport& right); //сравнение вида каждого объекта
	friend bool CompareModel(const Transport& left, const Transport& right); //сравнение модели каждого объекта
	friend bool CompareBrand(const Transport& left, const Transport& right); //сравнение марки каждого объекта
	friend bool CompareWeight(const Transport& left, const Transport& right); //сравнение веса каждого объекта
	friend bool CompareYear(const Transport& left, const Transport& right); //сравнение года выпуска каждого объекта

	~Transport();

private:
	int TransportId = 0, YearMade = 0;
	double TransportWeight = 0;
	std::string TransportType, TransportModel, TransportBrand;
	int amount;
};

