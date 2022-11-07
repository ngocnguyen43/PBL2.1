#include "Product.h"
Product::Product()
{
}
int Product::getId()
{
    return this->id;
}
string Product::getNameProduct()
{
    return this->nameProduct;
}
string Product::getBrandName()
{
    return this->brandName;
}
string Product::getMassProduct()
{
    return this->massProduct;
}
int Product::getYear()
{
    return this->year;
}
string Product::getColor()
{
    return this->color;
}
string Product::getFuelCap()
{
    return this->fuelCap;
}
string Product::getCydeCap()
{
    return this->cydeCap;
}
string Product::getGasConsume()
{
    return this->gasConsume;
}
int Product::getAmount()
{
    return this->amount;
}
double Product::getDiscount()
{
    return this->discount;
}
double Product::getPrice()
{
    return this->price;
}
void Product::setId(int id)
{
    this->id = id;
};
void Product::setNameProduct(string name)
{
    this->nameProduct = name;
};
void Product::setBrandName(string brand)
{
    this->brandName = brand;
};
void Product::setYear(int year)
{
    this->year = year;
};
void Product::setMassProduct(string mass)
{
    this->massProduct = mass;
};
void Product::setColor(string color)
{
    this->color = color;
};
void Product::setFuelCap(string fuel)
{
    this->fuelCap = fuel;
};
void Product::setCydeCap(string cyde)
{
    this->cydeCap = cyde;
};
void Product::setGasConsume(string gas)
{
    this->gasConsume = gas;
};
void Product::setAmount(int amount)
{
    this->amount = amount;
};
void Product::setDiscount(double discount)
{
    this->discount = discount;
};
void Product::setPrice(double price)
{
    this->price = price;
};
void Product::setProduct(int id, string name, string brand, int year, string mass, string color, string fuel, string cyde, string gas, int amount, double discount, double price)
{
    this->setId(id);
    this->setNameProduct(name);
    this->setBrandName(brand);
    this->setYear(year);
    this->setMassProduct(mass);
    this->setColor(color);
    this->setFuelCap(fuel);
    this->setCydeCap(cyde);
    this->setGasConsume(gas);
    this->setAmount(amount);
    this->setDiscount(discount);
    this->setPrice(price);
};
void Product::showProduct()
{
    cout << this->getId() << "," << this->getNameProduct() << "," << this->getPrice() << endl;
}