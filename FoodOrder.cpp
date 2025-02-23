// ********************************************************
// Programmer’s name: Luis Jimenez 
// Course Number:  CIS142
// Date:  September 15, 2022
// Assignment:  Lab 1 
// Description:  Self-Service application
// Files: foodOrder.cpp
// ********************************************************

#include <iostream>
using namespace std;

int main()

{
	//Variables are declared
	string usrname;
	int _slices;
	int _cups;
	int _bags;
	int _sides;
	int _total;

	//Const float variables are declared and given prices
	const float piz_slice = 2.75;
	const float ttl_drinks = 2.0;
	const float ttl_chips = 1.5;
	const float tt_salad = 4.25;

	//Food app Start up
	//Please allow my name I was trying to get creative!
	cout << "*****************************************************" << endl;
	cout << "*****        Welcome to Luis' Pizzeria          *****" << endl;
	cout << "*****************************************************" << endl;
	//From line 35-57; asks user for input
	//Asks for users first name and is stored in usrname
	cout << "Please enter your first name: ";
	cin >> usrname;
	cout << endl;
	//Amount of sausage pizza slices is stored in _slices
	cout << "Sausage Pizza Slices: ";
	cin >> _slices;
	cout << endl;
	//Amount of drinks is stored in _cups
	cout << "Drinks: ";
	cin >> _cups;
	cout << endl;
	//Amount of sides is stored in _bags
	cout << "Chips: ";
	cin >> _bags;
	cout << endl;
	//Amount of salads is stored in _sides
	cout << "Salads: ";
	cin >> _sides;
	cout << endl;

	cout << endl;
	//Asks user to enter cash
	cout << "Please enter you amount in cash: $";
	//Their value is stored in _total
	cin >> _total;
	cout << endl;


	//Securing final prices; total 
	//Getting total by multiplying the amount they ordered times the price.
	float ttl_piz = piz_slice * _slices;

	float drink_ttl = ttl_drinks * _cups;

	float chips_ttl = ttl_chips * _bags;

	float salad_ttl = tt_salad * _sides;
	//To get final price, add all amounts with the '+' 
	float fnl_price = ttl_piz + drink_ttl + chips_ttl + salad_ttl;

	//Prints the reciept format 
	cout << "Receipt:" << endl;

	cout << "================================================" << endl;

	cout << endl;
	//Display the users name 
	cout << "Name: " << usrname << endl;

	cout << "Product              Sale                Final" << endl;

	cout << "Description          Qty                 Price" << endl;

	cout << "------------------------------------------------" << endl;

	cout << endl;
	//White Spaces are used for alignment 
	cout << "Pizza (Slices):      "<< _slices << "                   $"<< ttl_piz << endl;
	//Provides total quantity asked by user and the final price for multiple items (if applied)
	cout << "Soft Drinks (Cups):  " << _cups << "                   $"<< drink_ttl << endl;

	cout << "Chips (Bags):        " << _bags << "                   $"<< chips_ttl << endl;

	cout << "Salads:              " << _sides << "                   $"<< salad_ttl << endl;

	cout << "------------------------------------------------" << endl;

	cout << endl;
	//Provides total
	cout << "Total order:                             $" << fnl_price << endl;
	
	cout << "------------------------------------------------" << endl;
	//Provides amount of cash entered by user
	cout << "Cash:           $" << _total << endl;
	//Provides change
	cout << "Change:         $" << (_total - fnl_price); 

	cout << endl;
	//Program ends and displays thank you message
	cout << "***** THANK YOU FOR SHOPPING! *****";


 
	return 0;
}
