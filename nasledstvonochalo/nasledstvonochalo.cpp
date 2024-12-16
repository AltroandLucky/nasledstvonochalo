#include <iostream> 
#include <string>   

using namespace std; 

// ����������� ������ PC (������������ ���������)
class PC {
public:
    string name; 
    string cpu;  
    string gpu;  
    string ssd;  
    string ram;  
    double price; 

    // ����� ��� ������ ���� ����������
    void GetPrice() {
        cout << "�ost: " << price << " $" << endl; // ����� ��������� ���������� � �������
    }
};

int main() {
    // �������� ������� officePC � ������������� ��� �����
    PC officePC;
    officePC.name = "Office PC"; 
    officePC.cpu = "Intel i3";  
    officePC.gpu = "Intel UHD"; 
    officePC.ssd = "256GB";     
    officePC.ram = "8GB";       
    officePC.price = 500.0;     

    // �������� ������� gamePC � ������������� ��� �����
    PC gamePC;
    gamePC.name = "Game PC";
    gamePC.cpu = "Intel i9";
    gamePC.gpu = "RTX 3080";
    gamePC.ssd = "1TB";
    gamePC.ram = "32GB";
    gamePC.price = 2000.0;

    // �������� ������� homePC � ������������� ��� �����
    PC homePC;
    homePC.name = "Home PC";
    homePC.cpu = "Intel i5";
    homePC.gpu = "GTX 1650";
    homePC.ssd = "512GB";
    homePC.ram = "16GB";
    homePC.price = 800.0;

    // ����� ���� � ���������� ������������
    cout << "Menu:" << endl;
    cout << "1. " << officePC.name << endl; 
    cout << "2. " << gamePC.name << endl;   
    cout << "3. " << homePC.name << endl;   

    int choice; // ���������� ��� �������� ������ ������������
    cout << "Choose PC (1-3): "; // ������ ������ ������������
    cin >> choice; // ������ �����

    // ��������� ������ ������������
    if (choice == 1) {
        // ���� ������������ ������ Office PC
        cout << officePC.name << " xaracterno:" << endl; // ����� ��������
        officePC.GetPrice(); // ����� ������ ��� ������ ����
    }
    else if (choice == 2) {
        // ���� ������������ ������ Game PC
        cout << gamePC.name << " xaracterno:" << endl;
        gamePC.GetPrice();
    }
    else if (choice == 3) {
        // ���� ������������ ������ Home PC
        cout << homePC.name << " xaracterno:" << endl;
        homePC.GetPrice();
    }
    else {
        // ���� ������������ ���� �������� �����
        cout << "wrong choice!" << endl;
    }

    return 0; 
}
//����� ������� �� ����� ��������