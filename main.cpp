//Во всех задачах необходимо использование битовых операций.
//Использование арифметических операций запрещено.
//Входное число лежит в диапазоне 0..232 - 1 и вводится в десятичном виде.
//
//1.3 Если в числе содержится только один бит со значением 1, записать в выходной поток OK. Иначе записать FAIL

#include <iostream>

//Функция, которая возвращает true, если в числе содержится только один бит со значением 1, иначе - false
bool checkNumber( unsigned int number ) {
    // Проверяем, содержится ли в числе только один бит со значением 1
    if ( number != 0 and ( number & ( number - 1 )) == 0 ) {
        return true;
    }
    else {
        return false;
    }
}

int main(){
    unsigned int number = 0;
    std::cin >> number;
    std::cout << ( checkNumber( number ) ? "OK" : "FAIL" );
    return 0;
}