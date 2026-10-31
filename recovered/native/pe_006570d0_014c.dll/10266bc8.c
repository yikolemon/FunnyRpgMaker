/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10266bc8 */

/* Library Function - Single Match
    private: bool __thiscall __crt_stdio_input::input_processor<char,class
   __crt_stdio_input::string_input_adapter<char> >::process_literal_character_tchar(char)
   
   Library: Visual Studio 2019 Release */

bool __thiscall
__crt_stdio_input::input_processor<char,__crt_stdio_input::string_input_adapter<char>_>::
process_literal_character_tchar
          (input_processor<char,__crt_stdio_input::string_input_adapter<char>_> *this,char param_1)

{
  string_input_adapter<char> *this_00;
  ushort *puVar1;
  uint uVar2;
  
  puVar1 = ___pctype_func();
  if ((short)puVar1[(byte)param_1] < 0) {
    this_00 = (string_input_adapter<char> *)(this + 8);
    uVar2 = string_input_adapter<char>::get(this_00);
    if (uVar2 != (byte)this[0x2d]) {
      string_input_adapter<char>::unget(this_00,uVar2);
      string_input_adapter<char>::unget(this_00,(int)param_1);
      return false;
    }
  }
  return true;
}

