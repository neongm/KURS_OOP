#include "chart_manager.h"

chart_manager::chart_manager(){}

void chart_manager::set_chart(System::Windows::Forms::DataVisualization::Charting::Chart^ _chart)
{
	target_chart = _chart;
}

void chart_manager::draw(System::String^ _series_name, std::vector<size_t> _array_y)
{
	target_chart->Series[_series_name]->Points->Clear();
	for (size_t i = 0; i < _array_y.size(); i++)
	{                        
		target_chart->Series[_series_name]->Points->AddXY(i, _array_y[i]);
	}
}
