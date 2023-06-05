#include "MyTestSuite.h"


int main(int argc, char* argv[])
{
    setlocale(LC_ALL, "");
    
    //ThatUsesDB dbconnect;
    //dbconnect.openDB("***", "***", "***"); //вместо звёздочек надо ввести юзера, пароль и имя БД
    //dbconnect.createTable();
    //dbconnect.insertUser("Masha", "Mamasha", "12345");
    //dbconnect.insertUser("Ivan", "Vano", "54321");
    //dbconnect.printUsers();
    ////dbconnect.deleteTable();
    //dbconnect.closeDB();

    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();

    return  0;
}