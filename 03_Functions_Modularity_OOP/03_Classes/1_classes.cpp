/*
Create a Book class that stores:
Title
Author
Page count
Keep these variables private.
Write public setter methods (setTitle, setAuthor, setPageCount) to assign values.
Write public getter methods (getTitle, getAuthor, getPageCount) to retrieve values.
In main(), create two Book objects, assign them values using setters, and print their details using getters.
*/
#include<string>
#include <iostream>  
class Book
{
    private:
        std::string title;
        std::string author;
        int page_count = 0;
    public:
        void set_title(std::string t)
        {
            title = t;
        }
        void set_author(std::string a)
        {
            author = a;
        }
        void set_page_count(int p)
        {
            page_count = p;
        }
        std::string get_title()
        {
            return title;
        }
        std::string get_author()
        {
            return author;
        }
        int get_page_count()
        {
            return page_count;
        }
};
int main()
{
    Book book1;
    book1.set_author("Rio");
    book1.set_title("I Robot");
    book1.set_page_count(20);

    Book book2;
    book2.set_author("Gary");
    book2.set_title("I God");
    book2.set_page_count(25);

    std::cout << "Book 1 author is : " << book1.get_author() <<std::endl;
    std::cout << "Book 1 title is : " << book1.get_title() <<std::endl;
    std::cout << "Book 1 page_count is : " << book1.get_page_count() <<std::endl;

    std::cout << "Book 2 author is : " << book2.get_author() <<std::endl;
    std::cout << "Book 2 title is : " << book2.get_title() <<std::endl;
    std::cout << "Book 2 page_count is : " << book2.get_page_count() <<std::endl;

    return 0;
}
