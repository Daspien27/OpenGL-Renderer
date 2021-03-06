// main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <boxer/boxer.h>
#include "Application.h"

#define SCREEN_WIDTH    600
#define SCREEN_HEIGHT   600

int main()
{
	try {
		Application MainApp (SCREEN_WIDTH, SCREEN_HEIGHT, "Open GL Window");

		MainApp.Run ();
	}
	catch (const std::exception& e)
	{
		boxer::show (e.what (), "Error", boxer::Style::Error, boxer::Buttons::OK);
		return -1;
	}

	return 0;
}

