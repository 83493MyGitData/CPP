#include<iostream>
using namespace std;

// Q2. class Product{
// int id;
// string title;
// double price;
// virtual void accept(){
// // partial complete function
// //todo to accept id,title,price;
// }
// virtual void display(){
// // partial complete function
// //todo to accept id,title,price;
// }
// };
// class Book : public Product{
// string author;
// void accept(){
// //complete function by accepting author;
// //also reuse the function of Product(Base) class accept
// //give discount of 10% on price and update the price.use mutators and inspector for price
// }
// virtual void display(){
// //complete function by displaying author;
// //also reuse the function of Product(Base) class display
// }
// };
// class Tape : public Product{
// string artist;
// void accept(){
// //complete function by accepting artist
// //also reuse the function of Product(Base) class accept
// //give discount of 5% on price and update the price.use mutators and inspector for price
// }
// virtual void display(){
// //complete function by displaying artist;
// //also reuse the function of Product(Base) class display
// //todo to display artist;
// }
// };
// int main(){
// Product *arr[3];
// // write menu driven code.
// // to calculate bill use for loop and call the getPrice to make total of all products

class Product
{
    private:
        int id;
        string title;
        double price;
    public:
    Product()
    {
        id = 0;
        title = " ";
        price = 0;
    }
    virtual void accept()
    {
        cout << "Please enter the product detail " << endl;
        cout << "Enter product id " << endl;
        cin >> id;
        cout << "Enter product title " << endl;
        cin >> title;
        cout << "Enter product price " << endl;
        cin >> price;
    }

    virtual void display()
    {
        cout << "The product details are id- " << id << "  title-" << title << "  price-" << price << endl;
    }

    void setPrice(int x)
    {
        if(x==1)
        price = price * 0.9;
        else
            price = price * 0.95;
    }
    // void SetPriceT()
    // {
    //     price = price * 0.95;
    // }

    double getPrice()
    {
        return price;
    }
};

class Tape:public Product
{
    private:
        string Artist;
        

    public:
        Tape()
        {
            Artist = " ";
    }

    void accept()
    {
        cout << "Please enter the Tape details " << endl;
        cout << "Enter Artist name " << endl;
        cin >> Artist;
        Product::accept();
        
       Product::setPrice(2);
        
    }

    void display()
    {
        cout << "The details of tape are " << endl;
        cout << "The author is " << Artist << endl;
        Product::display();
        cout << "The discounted price is " << Product::getPrice() << endl;
    }
};

class Book:public Product
{
    private:
        string Author;
    public:
    Book()
    {
        Author = " ";
    }

    void accept()
    {
        cout << "Please enter the Book details " << endl;
        cout << "Enter author name " << endl;
        cin >> Author;
        Product::accept();
        Product::setPrice(1);
        
    }

    void display()
    {
        cout << "The details of book are " << endl;
        cout << "The author is " << Author << endl;
        Product::display();
        cout << "The discounted price is " << Product::getPrice() << endl;
    }
};

int main()
{
    int choice;
    Product *arr[3];
    int index=0;
    double total;
    do
    {
        cout << "0. Exit" << endl;
        cout << "1. Enter book details" << endl;
        cout << "2. Enter tape details" << endl;
        cout << "3. Total bill of three products" << endl;
        cout << "4.The product details are " << endl;

        cout << "Enter choice - ";
        cin >> choice;
        switch (choice)
        {
        case 0:
            cout << "Thank You.." << endl;
            break;
        case 1:
            if (index < 3)
            {
                arr[index] = new Book(); // upcasting 
                arr[index]->accept();
                index++;
            }
            else
                cout << "Array is full.." << endl;
            break;
        case 2:
            if (index < 3)
            {
                arr[index] = new Tape();
                arr[index]->accept();
                index++;
            }
            else
                cout << "Array is full.." << endl;
            break;
        

        case 3:
            for (int i = 0; i < index; i++)
                {

                    total +=arr[i]->getPrice();
                };
                cout << "The total price of all 3 products is " << total << endl;
                break;

        case 4:
        for (int i = 0; i < index; i++)
                {
                    arr[i]->display();
                };
                break;
                
        default:
            cout << "Wrong choice.." << endl;
            break;
        }
    } while (choice != 0);

    for (int i = 0; i < index; i++)
        delete arr[i];
    return 0;
}