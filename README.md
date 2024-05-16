# CPP00

## Table of Contents
- [ex00 - Megaphone](#ex00---megaphone)
- [ex01 - PhoneBook](#ex01---phonebook)
- [ex02 - Account](#ex02---account)

## ex00 - Megaphone
### Key Concepts
- Namespace
- `static_cast` & `dynamic_cast`
- String method `length`

## ex01 - PhoneBook
### Key Concepts
- Class
- Public & Private
- Getter & Setter
- Constructor & Destructor
- List Initialization
- Pretty Print (`stew`)
- `getline`
- String Methods: `empty`, `substr`, `length`
- `stringstream`'s `str` method
- Managing Input Buffer: `cin.clear`, `cin.eof`, `clearerr`

## ex02 - Account
### Key Concepts
- Class Static Variable
- Time & `localtime`
- Iterator: `for_each`, `mem_fun_ref`
- `pair`
- `vector` Methods: `begin`, `end`

---

# CPP01

## Table of Contents
- [ex00 - Zombie](#ex00---zombie)
- [ex01 - Zombie Horde](#ex01---zombie-horde)
- [ex02 - Brain](#ex02---brain)
- [ex03 - HumanA & HumanB](#ex03---humana--humanb)
- [ex04 - Implement Sed](#ex04---implement-sed)
- [ex05 - Harl](#ex05---harl)
- [ex06 - HarlFilter](#ex06---harlfilter)

## ex00 - Zombie
### Key Concepts
- `new` & `delete`

## ex01 - Zombie Horde
### Key Concepts
- Class array made by `new`

## ex02 - Brain
### Key Concepts
- `reference` vs `pointer`

## ex03 - HumanA & HumanB
### Key Concepts
- `reference` vs `pointer` (part 2)

## ex04 - Implement Sed
### Key Concepts
- `ifstream`, `ofstream`, `stringstream`
- `is_open`, `close`
- `c_str`
- `rdbuf`

## ex05 - Harl
### Key Concepts
- `this` pointer
- Function pointer array

## ex06 - HarlFilter
### Key Concepts
- Switch statement with `fallthrough`

---

# CPP02

## Table of Contents
- [ex00 - Fixed-point Arithmetic](#ex00---fixed-point-arithmetic)
- [ex01 - Fixed-point Arithmetic 2](#ex01---fixed-point-arithmetic-2)
- [ex02 - Fixed-point Arithmetic 3](#ex02---fixed-point-arithmetic-3)
- [ex03 - BSP](#ex03---bsp)

## ex00 - Fixed-point Arithmetic
### Key Concepts
- Orthodox Canonical Form
- Copy Constructor & Assignment Operator

## ex01 - Fixed-point Arithmetic 2
### Key Concepts
- IEEE 754 Floating-Point Standard
- Bitwise Operators: `<<`

## ex02 - Fixed-point Arithmetic 3
### Key Concepts
- Operator Overloading

## ex03 - BSP
### Key Concepts
- Determining if a Point is Inside a Triangle
- Counter-Clockwise (CCW) Algorithm

---

# CPP03

## Table of Contents
- [ex00 - ClapTrap](#ex00---claptrap)
- [ex01 - ScavTrap](#ex01---scavtrap)
- [ex02 - FragTrap](#ex02---fragtrap)
- [ex03 - DiamondTrap](#ex03---diamondtrap)

## ex00 - ClapTrap
### Key Concepts
- Base class for inheritance

## ex01 - ScavTrap
### Key Concepts
- Derived class from ClapTrap
- Inheritance
- Virtual Destructor & Virtual Functions
- Virtual Pointer
- Protected Type

## ex02 - FragTrap
### Key Concepts
- Derived class from ClapTrap

## ex03 - DiamondTrap
### Key Concepts
- Handling Name Conflicts between Parent and Child Variables
- Diamond Inheritance

### Inheritance Diagram
```plaintext
        ClapTrap
        /     \
    ScavTrap  FragTrap
        \     /
       DiamondTrap
```

---

# CPP04

## Table of Contents
- [ex00 - Animal](#ex00---animal)
- [ex01 - Brain](#ex01---brain)
- [ex02 - Abstract](#ex02---abstract)
- [ex03 - Materia](#ex03---materia)

## ex00 - Animal
### Key Concepts
- Consequences of not using `virtual`
- Upcasting: `const Animal* j = new Dog();`

## ex01 - Brain
### Key Concepts
- Composition Relationship
- Deep Copy
- Constructor & Destructor: Managing `Brain`
- Avoiding Memory Leaks in Assignment Operator & Copy Constructor

## ex02 - Abstract
### Key Concepts
- Pure Virtual Functions
- Abstract Classes

## ex03 - Materia
### Key Concepts
- Interfaces