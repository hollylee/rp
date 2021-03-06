#ifndef IA64_H
#define IA64_H

#include "cpu.hpp"

class Ia64 : public CPU
{
    public:
        
        explicit Ia64(void);
        
        ~Ia64(void);

        std::string get_class_name(void) const;

        std::multiset<Gadget*> find_gadget_in_memory(const unsigned char *p_memory, const unsigned long long size, const unsigned long long vaddr, const unsigned int depth, unsigned int engine_display_option = 0);
};

#endif
