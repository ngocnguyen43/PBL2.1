
#include <iostream>
#include <limits>
#include "Store.h"
using namespace std;
std::ifstream &GotoLine(std::ifstream &file, unsigned int num)
{
    file.seekg(std::ios::beg);
    for (int i = 0; i < num - 1; ++i)
    {
        file.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    return file;
}
// void read_record()
// {
//     fstream fin;
//     fin.open(".\\Data\\text2.csv", ios::in);
//     vector<string> row;
//     string line, word, temp;
//     row.clear();
//     while (fin.peek() != EOF)
//     {
//         while (getline(fin, word, ','))
//         {
//             row.push_back(word);
//         }
//     }

//     for (int i = 0; i < row.size(); i++)
//     {

//         cout << row[i] << ",";
//     }
//     cout << endl;
//     double h = stod(row[0]);
// }
int main()
{
    // ifstream myfile("text1.csv");
    // // myfile.open("text2.csv", ios::out | ios::app);
    // fstream fin;
    // fin.open("text2.csv", ios::in);

    // // GotoLine(myfile, 3);
    // int i = 0;

    // string line;
    // // getline(myfile, name, ',');
    // //  cin.get();
    // // while (getline(fin, line))
    // // {
    // //     ++i;
    // // }
    // // cout << i;
    // vector<string> row;
    // char comma;
    // row.clear();
    // while (fin.peek() != EOF)
    // {
    //     // getline(myfile, line);
    //     //  row.push_back(line);
    //     //   used for breaking words

    //     //   stringstream s(line);
    //     // getline(fin, line);
    //     string id, name, brand, year, mass, color, fuel, cyde, gas, amount, discount, price;
    //     fin >> std::quoted(id) >> comma >> std::quoted(name) >> comma >> std::quoted(brand) >> comma >> std::quoted(year) >> comma >> std::quoted(mass) >> comma >> std::quoted(color) >> comma >> std::quoted(fuel) >> comma >> std::quoted(cyde) >> comma >> std::quoted(gas) >> comma >> std::quoted(amount) >> comma >> std::quoted(discount) >> comma >> std::quoted(price) >> std::ws;
    //     // fin >> id >> comma >> name >> comma >> brand >> comma >> year >> comma >> mass >> comma >> color >> comma >> fuel >> comma >> cyde >> comma >> gas >> comma >> amount >> comma >> discount >> comma >> price >> comma;
    //     cout << id << ","
    //          << name << ","
    //          << brand << ","
    //          << year << ","
    //          << mass << ","
    //          << color << ","
    //          << fuel << ","
    //          << cyde << ","
    //          << gas << ","
    //          << amount << ","
    //          << discount << ","
    //          << price << endl;

    //     // while (getline(fin, name, ','))
    //     // {

    //     //     // add all the column data
    //     //     // of a row to a vector
    //     //     row.push_back(name);
    //     // }
    // }
    // for (int i = 0; i < row.size(); i++)
    // {
    //     cout << row[i] << ",";
    //     /* code */
    // }

    // myfile.close();
    // read_record();
    // Product *p = new Product[1];
    // int id = 1;
    // string nameProduct = "Air Blade";
    // string brandName = "Honda";
    // int year = 2022;
    // string massProduct = "129kg";
    // string color = "red";
    // string fuelCap = "XXX";
    // string cydeCap = "YYY";
    // string gasConsume = "ZZZ";
    // int amount = 1;
    // double discount = 15;
    // double price = 1000;
    // p->setProduct(id, nameProduct, brandName, year, massProduct, color, fuelCap, cydeCap, gasConsume, amount, discount, price);
    // system("pause");
    Store s;
    s.setLength();
    // cout << s.getLength();
    s.setdata();
    s.showProduct();
    return 0;
}