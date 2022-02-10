#include <nall/nall.hpp>
#include <cstdio>

int main() {
    nall::string str = nall::terminal::color::red("hello");
    printf("%s\n", str.begin());
}