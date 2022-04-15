#include "Trasport_class.h"

Transport::Transport(const Transport& info)
{
	TransportId = info.TransportId;
	YearMade = info.YearMade;
	TransportWeight = info.TransportWeight;
	TransportType = info.TransportType;
	TransportModel = info.TransportModel;
}


Transport::~Transport()
{
}