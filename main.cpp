#include <iostream>

#include "dynamicarray.h"
#include "set.h"
#include "multiset.h"
#include "map.h"

using namespace std;

int main(int argc, char *argv[])
{
    /** Set Usage **/
    Set set;
    std::cout << "Testing Set Container - Dynamic Array\n";
    std::cout << "=====================================\n";
    std::cout << "[Set] Is Empty: " << set.is_empty() << "\n";
    std::cout << "[Set] Inserting a\n";
    set.insert("a");
    std::cout << "[Set] Inserting b\n";
    set.insert("b");
    std::cout << "[Set] Inserting a again (not effect)\n";
    set.insert("a");
    std::cout << "[Set] Is Empty: " << set.is_empty() << "\n";
    std::cout << "[Set] a in Set:" << set.is_in("a") << "\n";
    std::cout << "[Set] b in Set:" << set.is_in("b") << "\n";
    std::cout << "[Set] c in Set:" << set.is_in("c") << "\n";
    std::cout << "[Set] Removing a\n";
    set.remove("a");
    std::cout << "[Set] a in Set:" << set.is_in("a") << "\n";
    std::cout << "[Set] b in Set:" << set.is_in("b") << "\n";
    /** MultiSet Usage **/
    MultiSet mset;
    std::cout << "Testing MultiSet Container - Dynamic Array\n";
    std::cout << "==========================================\n";
    std::cout << "[MultiSet] Is Empty: " << mset.is_empty() << "\n";
    std::cout << "[MultiSet] Inserting a\n";
    mset.insert("a");
    std::cout << "[MultiSet] Inserting b\n";
    mset.insert("b");
    std::cout << "[MultiSet] Inserting b again\n";
    mset.insert("b");
    std::cout << "[MultiSet] Inserting a again\n";
    mset.insert("a");
    std::cout << "[MultiSet] Is Empty: " << mset.is_empty() << "\n";
    std::cout << "[MultiSet] a in Set:" << mset.is_in("a") << "\n";
    std::cout << "[MultiSet] b in Set:" << mset.is_in("b") << "\n";
    std::cout << "[MultiSet] c in Set:" << mset.is_in("c") << "\n";
    std::cout << "[MultiSet] Removing a\n";
    mset.removeOne("a");
    std::cout << "[MultiSet] a in Set:" << mset.is_in("a") << "\n";
    std::cout << "[MultiSet] b in Set:" << mset.is_in("b") << "\n";
    std::cout << "[MultiSet] Removing all b\n";
    mset.removeAll("b");
    std::cout << "[MultiSet] b in Set:" << mset.is_in("b") << "\n";
    /** Map Usage **/
    Map map;
    std::cout << "Testing Map Container - Dynamic Array\n";
    std::cout << "=====================================\n";
    std::cout << "[Map] Inserting 1 value on key a\n";
    map.set("a", 1);
    std::cout << "[Map] getting value of the key a: " << map.get("a") << "\n";
    std::cout << "[Map] Inserting 2 value on key b\n";
    map.set("b", 2);
    std::cout << "[Map] getting value of the key b: " << map["b"] << "\n";
    return 0;
}
