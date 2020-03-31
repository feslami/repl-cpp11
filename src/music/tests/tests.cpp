
#include <music.h>

#include <iostream>
#include <cassert>
#include <string>

using namespace std;

bool test_create_music()
{
    auto music = Music("Foo", "Bar", "Mi");
    
    assert(music.album() == "Foo");
    assert(music.author() == "Bar");
    assert(music.title() == "Mi");

    auto music2 = music;

    assert(music == music2);

    return false;
}

int main()
{
    auto fail = false;
    test_create_music();
    return (fail) ? 1 : 0;
}