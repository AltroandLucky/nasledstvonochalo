#include <iostream> 
#include <string>   

using namespace std; 

// Определение класса PC (Персональный компьютер)
class PC {
public:
    string name; 
    string cpu;  
    string gpu;  
    string ssd;  
    string ram;  
    double price; 

    // Метод для вывода цены компьютера
    void GetPrice() {
        cout << "Сost: " << price << " $" << endl; // Вывод стоимости компьютера в консоль
    }
};

int main() {
    // Создание объекта officePC и инициализация его полей
    PC officePC;
    officePC.name = "Office PC"; 
    officePC.cpu = "Intel i3";  
    officePC.gpu = "Intel UHD"; 
    officePC.ssd = "256GB";     
    officePC.ram = "8GB";       
    officePC.price = 500.0;     

    // Создание объекта gamePC и инициализация его полей
    PC gamePC;
    gamePC.name = "Game PC";
    gamePC.cpu = "Intel i9";
    gamePC.gpu = "RTX 3080";
    gamePC.ssd = "1TB";
    gamePC.ram = "32GB";
    gamePC.price = 2000.0;

    // Создание объекта homePC и инициализация его полей
    PC homePC;
    homePC.name = "Home PC";
    homePC.cpu = "Intel i5";
    homePC.gpu = "GTX 1650";
    homePC.ssd = "512GB";
    homePC.ram = "16GB";
    homePC.price = 800.0;

    // Вывод меню с доступными компьютерами
    cout << "Menu:" << endl;
    cout << "1. " << officePC.name << endl; 
    cout << "2. " << gamePC.name << endl;   
    cout << "3. " << homePC.name << endl;   

    int choice; // Переменная для хранения выбора пользователя
    cout << "Choose PC (1-3): "; // Запрос выбора пользователя
    cin >> choice; // Чтение ввода

    // Обработка выбора пользователя
    if (choice == 1) {
        // Если пользователь выбрал Office PC
        cout << officePC.name << " xaracterno:" << endl; // Вывод названия
        officePC.GetPrice(); // Вызов метода для вывода цены
    }
    else if (choice == 2) {
        // Если пользователь выбрал Game PC
        cout << gamePC.name << " xaracterno:" << endl;
        gamePC.GetPrice();
    }
    else if (choice == 3) {
        // Если пользователь выбрал Home PC
        cout << homePC.name << " xaracterno:" << endl;
        homePC.GetPrice();
    }
    else {
        // Если пользователь ввел неверный выбор
        cout << "wrong choice!" << endl;
    }

    return 0; 
}
//Долго работал но вроде закончил