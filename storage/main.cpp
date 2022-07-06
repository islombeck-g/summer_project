#include <iostream>

//just photo
//create-create new list, at the end creates new (.json)
//read-open (.json) and copy to list
//update-read. then delete or add or change then save to (.json)
//delete-read. delete. save (.json)
//list
//search-read. search
class LIST{
    struct Data{
        std::string name[10];
        std::string created[25];
        std::string modified[25];
        std::string path[35];
        std::string md5[39];
        std::string type[8];
        std::string mime_type[40];
        short int size;
        Data *next;
        Data *prev;
    };
    Data *head;
    Data *tail;
public:
    LIST();
    ~LIST();
    void create();
    void read();
    void update();
    void del();
    void search();
private:
    void del_all();

};
void LIST::del_all(){};
void LIST::search(){};
void LIST::del(){};
void LIST::update(){};
void LIST::read(){};
void LIST::create() {};
LIST::~LIST() {};
LIST::LIST() {
    del_all();
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
