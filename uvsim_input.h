#ifndef uvsim_input_h
#define uvsim_input_h

#include <iostream>
#include "constants.h"

class UVSim_Input{
public:
    
    std::vector<std::string> read_file();
    std::vector<std::string> read_from_stream(std::istream& is);

};

#endif