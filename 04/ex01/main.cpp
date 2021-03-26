#include <iostream>

#include "Character.hpp"

#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"

#include "RadScorpion.hpp"
#include "SuperMutant.hpp"

int
main(void)
{
    Character *Jean = new Character("Jean");
    std::cout << *Jean << std::endl;

    Enemy *rad1 = new RadScorpion();
    Enemy *rad2 = new RadScorpion();

    Enemy *sup1 = new SuperMutant();

    AWeapon *pr = new PlasmaRifle();
    AWeapon *pf = new PowerFist();
    
    Jean->equip(pr);
    std::cout << std::endl;

    std::cout << *Jean << std::endl;

    Jean->attack(sup1);
    std::cout << std::endl;

    Jean->attack(sup1);
    std::cout << std::endl;

    std::cout << *Jean << std::endl;

    Jean->equip(pf);
    std::cout << std::endl;

    Jean->attack(rad1);
    std::cout << std::endl;

    std::cout << *Jean << std::endl;

    Jean->equip(pr);

    std::cout << *Jean << std::endl;

    Jean->attack(rad1);

    std::cout << *Jean;

    Jean->attack(rad1);
    std::cout << std::endl;

    std::cout << *Jean << std::endl;


    Jean->attack(rad2);

    std::cout << *Jean;

    Jean->attack(rad2);

    std::cout << *Jean;

    Jean->attack(rad2);
    std::cout << std::endl;

    std::cout << *Jean;
    Jean->recoverAP();
    std::cout << *Jean;

    delete Jean;
    delete pr;
    delete pf;
    delete rad2;
    delete sup1;

    return (0);
}