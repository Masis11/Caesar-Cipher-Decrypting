#include <iostream>

class Decrypt
{
    public:
        Decrypt() {std::cout << "Enter a message to decrypt: ";}
        ~Decrypt() {std::cout << "Decrypted message: " << message;}
        void set_message();
        char* get_message();
        void  set_key();
        int get_key();
        void realization();


    private:
        char message[100];
        char ch;
        int key;
};
 
void Decrypt::set_message()
{
   std::cin.getline(message, 100);
}

char* Decrypt::get_message()
{
    return message;
}

void Decrypt::set_key()
{
    std::cout << "Enter key: ";
    std::cin >> key;
}

int Decrypt::get_key()
{
    return key;
}

void Decrypt::realization()
{
    for(int i = 0; message[i] != '\0'; ++i)
{
    ch = message[i];
    if(ch >= 'a' && ch <= 'z')
    {
        ch = ch - key;
        if(ch < 'a')
        {
            ch = ch + 'z' - 'a' + 1;
        }
    message[i] = ch;
    }
    else if(ch >= 'A' && ch <= 'Z')
    {
        ch = ch - key;
        if(ch > 'a')
        {
            ch = ch + 'Z' - 'A' + 1;
        }
    message[i] = ch;
    }
}

}

void Start_Decrypt()
{
    Decrypt obj;
    obj.set_message();
    obj.set_key();
    obj.realization();
}

int main()
{
  Start_Decrypt();
}