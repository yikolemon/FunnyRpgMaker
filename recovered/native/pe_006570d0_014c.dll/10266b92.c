/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10266b92 */

/* Library Function - Single Match
    private: bool __thiscall __crt_stdio_input::input_processor<char,class
   __crt_stdio_input::string_input_adapter<char> >::process_literal_character(void)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __thiscall
__crt_stdio_input::input_processor<char,__crt_stdio_input::string_input_adapter<char>_>::
process_literal_character
          (input_processor<char,__crt_stdio_input::string_input_adapter<char>_> *this)

{
  bool bVar1;
  uint uVar2;
  
  uVar2 = string_input_adapter<char>::get((string_input_adapter<char> *)(this + 8));
  if (uVar2 != 0xffffffff) {
    if (uVar2 == (byte)this[0x2c]) {
      bVar1 = process_literal_character_tchar(this,(char)uVar2);
      return bVar1;
    }
    string_input_adapter<char>::unget((string_input_adapter<char> *)(this + 8),uVar2);
  }
  return false;
}

