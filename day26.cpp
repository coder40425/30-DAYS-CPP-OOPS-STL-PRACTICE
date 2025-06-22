/* Day 26: Online Shopping Cart Design (OOPs - Class, STL)

Design classes: Product, Cart. Add/remove items and show total price.

*Output Example:*
Total: $320              */

//my solution
#include<iostream>
#include<vector>
#include<string>
using namespace std;

//class to represent a product
class Product{
    public:
      string name;
      double price;

      //contructor to initialize a product
      Product(string name, double price){
        this->name = name;
        this->price = price;
      }
};
//class to represent the shopping cart
class Cart{
    private:
        vector<Product> items; //vector to store all products added to the cart
    public:
        //method to add an item to the cart
        void addItem(const Product&p){
            items.push_back(p);
        }

        //method to remove an item by name
        void removeItem(string name){
            for(auto it = items.begin(); it!= items.end(); it++){
                if(it->name == name){
                    items.erase(it);  //remove item from vector
                    cout<<"Removed: "<<name<<endl;
                    return;
                }
            }
            cout<<"Item not found in cart: "<<name<<endl;
        }

        //method to display the total price of items in cart
        void showTotal(){
            double total = 0;
            for(auto& item : items){
                total= total + item.price;
            }
            cout<<"Total: $"<<total<<endl;
        }
};

int main(){
    Cart c;
    
    //create some products
    Product p1("Laptop", 200.0);
    Product p2("Phone", 100.0);
    Product p3("Mouse", 20.0);

    //add products to the cart
    c.addItem(p1);
    c.addItem(p2);
    c.addItem(p3);

    //show total price
    c.showTotal();

    //remove one item
    c.removeItem("Phone");

    //show total price
    c.showTotal();

    return 0;

}
