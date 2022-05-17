#include <iostream>
using namespace std;
class animal{
    public:
    void animalSound()
    {
        cout << "The animal makes the sound "<<endl;
    }
};
class dog: public animal{
    public:
    void animalSound()
    {
        cout << "The dog barks "<<endl;
    }

};
class cat: public animal{
    public:
    void animalSound(){
        cout << "the cat meows "<<endl;
    }
};
int main()
{
    animal myanimal;
    dog mydog;
    cat mycat;

    myanimal.animalSound();
    mycat.animalSound();
    mydog.animalSound();
}