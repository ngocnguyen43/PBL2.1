#include "Store.h"
Store::Store()
{
    this->listProduct.clear();
    this->length = 0;
}
void Store::setLength()
{
    fstream fin;
    fin.open(".\\Data\\text2.csv", ios::in);
    int i = 0;
    string line;
    while (getline(fin, line))
    {
        ++i;
    }
    this->length = i;
}
int Store::getLength()
{
    return this->length;
}
void Store::setdata()
{
    fstream fin;
    fin.open(".\\Data\\text2.csv", ios::in);
    string line, word;
    int length = this->getLength();
    vector<string> temp;
    while (fin.peek() != EOF)
    {
        while (getline(fin, word, ','))
        {
            temp.push_back(word);
        }
    }
    int i = 0;
    for (int z = 0; z < this->getLength(); z++)
    {
        int id = stoi(temp[i]);
        string pruductName = temp[i + 1];
        string brandName = temp[i + 2];
        int year = stoi(temp[i + 3]);
        string productMass = temp[i + 4];
        string productColor = temp[i + 5];
        string productFuelCap = temp[i + 6];
        string productCydeCap = temp[i + 7];
        string productGasConsume = temp[i + 8];
        int productAmount = stoi(temp[i + 9]);
        double productDiscount = stod(temp[i + 10]);
        double productPrice = stod(temp[i + 11]);
        i = i + 12;
        Product *p = new Product[1];
        p->setProduct(id, pruductName, brandName, year, productMass, productColor, productFuelCap, productCydeCap, productGasConsume, productAmount, productDiscount, productPrice);
        this->listProduct.push_back(p);
    }
}
void Store::showProduct()
{
    cout << setw(10) << "ID"
         << "  "
         << setw(15) << "Ten Mat Hang"
         << "  "
         << setw(10) << "Khoi Luong"
         << "  "
         << setw(10) << "Mau Sac"
         << "\t"
         << setw(20) << "Dung Tich Xang"
         << "  "
         << setw(20) << "Dung Tich XiLanh"
         << "  "
         << setw(10) << "S di dc"
         << "  "
         << setw(10) << "Giam Gia"
         << "  "
         << setw(10) << "So Luong"
         << "  "
         << setw(10) << "Gia Ban" << endl;
    for (int i = 0; i < this->getLength(); i++)
    {
        this->listProduct[i]->showProduct();
    }
}