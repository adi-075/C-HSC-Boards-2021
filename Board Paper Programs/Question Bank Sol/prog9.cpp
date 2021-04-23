#include <iostream>
using namespace std;

class inventory
{
  private:
    int item_no; 
    char item_name[50];
  public:
    int discounted_price;
    double item_price;
    int discount_percent;
    void accept_details();
    void print_details();
};

void inventory::accept_details()
{
  cout << "\nEnter Item Name: ";
  cin >> item_name;
  cout << "Enter Item No: ";
  cin >> item_no;
  cout << "Enter Item Price: ";
  cin >> item_price;
  cout << "Enter Discount Percent: ";
  cin >> discount_percent;
  cout << "-------------------" << endl;
  discounted_price = item_price-item_price*discount_percent/100; //Calculate discounted price
}

void inventory::print_details()
{
  cout << "\nItem Name: "<< item_name << endl;
  cout << "Item No: " << item_no << endl;
  cout << "Item Price: " << item_price << endl;
  cout << "Discounted Percent: "<<discount_percent << endl;
  cout << "Discounted Price: "<<discounted_price << endl;
  cout << "\n----------------------\n"<<endl;
}
int main(){
  inventory a1[100];
  int i, cnt, discount=0, price=0;
  cout << "\nHow Many Items do you want to enter?" << endl;
  cin >> cnt;
  cout << "-------------------" << endl;
  cout << "\n****BILL CALCULATOR****"<<endl;
  for(i=1;i<=cnt;i++)
  {
    a1[i].accept_details();
  }
  cout << "\n****BILL INVOICE****"<<endl;
  for(i=1;i<=cnt;i++)
  {
    a1[i].print_details();
  }
  for(i=1;i<=cnt;i++)
  {
    price = price + a1[i].item_price;
  }
  for(i=1;i<=cnt;i++)
  {
    discount = discount+a1[i].item_price-a1[i].discounted_price;
  }
  cout << "\nTotal Price: "<<price << endl;
  cout << "\nTotal Discount: "<<discount;
}
