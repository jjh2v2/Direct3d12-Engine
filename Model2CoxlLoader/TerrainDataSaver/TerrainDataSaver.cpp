// TerrainDataSaver.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "ModelLoader.h"
#include "BinaryConverter.h"
#include "HeightPlaneConverter.h"
int main()
{

	std::cout << "Choose: m (model), h (Heightmap)" << std::endl;
	std::string choice;
	std::getline(std::cin, choice);

	std::cout << "Input Path:" << std::endl;

	std::string inPath;
	std::getline(std::cin, inPath);

	std::cout << "Output Path:" << std::endl;

	std::string outPath;
	std::getline(std::cin, outPath);


	auto loader = ModelLoader();
	auto data = loader.LoadModelFromFile(inPath);
	if (choice == "m") {
		BinaryConverter writer(data, outPath);
	}
	if (choice == "h") {
		HeightPlaneConverter heightConv(data, outPath);
	}

	std::cout << "complete" << std::endl;
	auto exit = std::string("");
	std::cin >> exit;
	return 0;
}

