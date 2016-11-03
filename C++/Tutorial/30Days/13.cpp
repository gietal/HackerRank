//Write MyBook class
class MyBook: Book {
    public:
    MyBook(string _title, string _author, int _price) 
    : Book(_title, _author), price(_price)
    {
        
    }
    
    virtual void display() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
    }
    
    protected:
    int price;
};