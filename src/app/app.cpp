#include <string>
#include "window/window.hpp"


class Application{
	private:
		std::string name;
		Window app_window;
	public:
		Application(std::string app_name):name(app_name){};
};
