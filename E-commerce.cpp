#include <iostream>
#include <vector>
using namespace std;
struct Product{ string name; int price; };
int main(){
    vector<Product> cart;
    Product p1={"Earbuds",1500}, p2={"Watch",2500}, p3={"Mobile Cover",800};
    cart.push_back(p1); cart.push_back(p2);
    int total=0;
    cout<<"YOUR CART:\n";
    for(auto p: cart){ cout<<p.name<<" - "<<p.price<<endl; total+=p.price; }
    cout<<"Delivery: 200\nTotal: "<<total+200<<endl;
    cout<<"Discount Code HAMMAD10 10% off: "<<(total+200)*0.9<<endl;
    return 0;
}
