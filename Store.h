#include "Product.h"
class Store
{
private:
    vector<Product> listProduct;
    // Product *test;
    vector<Product> test;
    int length;

public:
    Store(/* args */);
    ~Store() {}
    void setLength(int);
    void setLength();
    int getLength();
    void setdata();
    void mapData();
    void showProduct();
    void NhapTay(int);
    void Buy();
    void deleteElement();
};