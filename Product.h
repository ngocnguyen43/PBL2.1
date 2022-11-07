#pragma once
#include <iostream>
#include <vector>
#include <fstream>
#include <iomanip>
using namespace std;
class Product
{
private:
    int id;
    string nameProduct;
    string brandName;
    int year;
    string massProduct;
    string color;
    string fuelCap;
    string cydeCap;
    string gasConsume;
    int amount;
    double discount;
    double price;

public:
    Product(/* args */);
    ~Product() {}
    int getId();
    string getNameProduct();
    string getBrandName();
    int getYear();
    string getMassProduct();
    string getColor();
    string getFuelCap();
    string getGasConsume();
    string getCydeCap();
    int getAmount();
    double getDiscount();
    double getPrice();

    void setId(int);
    void setNameProduct(string);
    void setBrandName(string);
    void setYear(int);
    void setMassProduct(string);
    void setColor(string);
    void setFuelCap(string);
    void setCydeCap(string);
    void setGasConsume(string);
    void setAmount(int);
    void setDiscount(double);
    void setPrice(double);
    void setProduct(int, string, string, int, string, string, string, string, string, int, double, double);
    void showProduct();
};