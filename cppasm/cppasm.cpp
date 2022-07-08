

#include <iostream>

using std::cout;

using std::endl;

struct IntegerValue32{

    unsigned int answer = 0x0;

};

IntegerValue32 massValue;

int sum(__int32 value1, __int32 value2) 
{
    auto answerValue = massValue.answer;

    __asm
    {
    MAIN:

        mov eax, value1

        mov ebx, value2

        xor edx,edx
        
        add eax, ebx
        
        mov answerValue, eax
        
    }

    return answerValue;
}

int devide(__int32 value1, __int32 value2) {

    auto answerValue = massValue.answer;

    __asm
    {
    MAIN:
        mov eax, value1

        mov ebx, value2

        xor edx, edx

        div ebx

        mov answerValue, eax

    }

    return answerValue;
}

int multiply(__int32 value1, __int32 value2) {

    auto answerValue = massValue.answer;

    __asm
    {
    MAIN:
        mov eax, value1

        mov ebx, value2

        mul ebx

        mov answerValue, eax

    }


    return answerValue;
}
int substract(__int32 value1, __int32 value2) {

    auto answerValue = massValue.answer;

    __asm
    {
    MAIN:
        mov eax, value1

        mov ebx, value2

        sub eax, ebx

        mov answerValue, ebx
        
    }

    return answerValue;
}
int reverceNumber(__int32 value1) {

    auto answerValue = massValue.answer;

    __asm
    {
    MAIN:
        
        mov eax, value1

        neg eax

        mov answerValue, eax
        
    }

    return answerValue;
}
int multiplyValues(__int32 value1, __int8 powerValue) {

    auto answerValue = massValue.answer;

    __asm
    {
    MAIN:

        mov eax, value1

        mov cl, powerValue

        dec cl

        shl eax, cl

        mov answerValue, eax

    }

    return answerValue;
}

float square_root(float radicand)
{
    __asm {
        sqrtss xmm0, radicand
    }
}

int main()
{
    long value = 4;
    long a = 1;
    long b = 16;
    float h = 9.0;
    
    cout << square_root(h) << endl;
    //cout << reverceNumber(15);
}

