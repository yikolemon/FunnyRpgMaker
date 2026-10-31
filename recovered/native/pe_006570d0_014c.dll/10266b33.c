/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10266b33 */

/* Library Function - Single Match
    private: bool __thiscall __crt_stdio_input::input_processor<char,class
   __crt_stdio_input::string_input_adapter<char> >::process_state(void)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __thiscall
__crt_stdio_input::input_processor<char,__crt_stdio_input::string_input_adapter<char>_>::
process_state(input_processor<char,__crt_stdio_input::string_input_adapter<char>_> *this)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = *(int *)(this + 0x28);
  if (iVar1 == 2) {
    bVar2 = process_whitespace(this);
    return bVar2;
  }
  if (iVar1 != 3) {
    if (iVar1 == 4) {
      bVar2 = process_conversion_specifier(this);
      if (((bVar2) && (*(int *)(this + 0x40) != 9)) &&
         (this[0x2e] == (input_processor<char,__crt_stdio_input::string_input_adapter<char>_>)0x0))
      {
        *(int *)(this + 0x70) = *(int *)(this + 0x70) + 1;
        return true;
      }
    }
    else {
      bVar2 = false;
    }
    return bVar2;
  }
  bVar2 = process_literal_character(this);
  return bVar2;
}

