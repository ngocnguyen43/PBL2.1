#include "Product.h"
class Store
{
private:
    vector<Product *> listProduct;
    int length;

public:
    Store(/* args */);
    ~Store() {}
    void setLength();
    int getLength();
    void setdata();
    void mapData();
    void showProduct();
};