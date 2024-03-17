#pragma once
#ifndef UTIL_HPP
#define UTIL_HPP

#include <iostream>
#include <string>
#include <cstdio>
#include <iomanip>

using std::string;
using std::cout;
using std::cin;
using std::setw;

void println(const string &str);
void print(const string &str);
void print_bar_setw(const string &str);
bool check_str(const string &str);
void clear_stdin(string &str);

#endif