#include "temperature.h"
#include "temperature_data.h"

int main() 
{
	vector <Temperature> out_temps{ Temperature(1, 98.9), Temperature(2, 99.5),
		Temperature(3, 99) };

	TemperatureData data;

	data.save_temps(out_temps);
	vector<Temperature> in_temps = data.get_temps();

	for (auto temp : in_temps) 
	{
		std::cout << temp.get_hour() << " " << temp.get_reading() << "\n";
	}

	return 0;
}