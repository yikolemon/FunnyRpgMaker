/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10266e24 */

/* Library Function - Single Match
    private: bool __thiscall __crt_stdio_input::input_processor<char,class
   __crt_stdio_input::string_input_adapter<char> >::process_character_count_specifier(void)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __thiscall
__crt_stdio_input::input_processor<char,__crt_stdio_input::string_input_adapter<char>_>::
process_character_count_specifier
          (input_processor<char,__crt_stdio_input::string_input_adapter<char>_> *this)

{
  undefined1 uVar1;
  
  if (this[0x2e] != (input_processor<char,__crt_stdio_input::string_input_adapter<char>_>)0x0) {
    return true;
  }
  uVar1 = FUN_10266e3c(*(int *)(this + 0x10) - *(int *)(this + 8),0);
  return (bool)uVar1;
}

