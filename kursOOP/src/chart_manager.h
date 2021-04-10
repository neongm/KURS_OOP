#pragma once
#include <msclr\auto_gcroot.h>
#include <vector>

class chart_manager
{
private:
	gcroot< System::Windows::Forms::DataVisualization::Charting::Chart^> target_chart;

public:	
	chart_manager();
	void set_chart(System::Windows::Forms::DataVisualization::Charting::Chart^ _chart);
	void draw(System::String^ _series_name, std::vector<size_t> _array_y);
};

