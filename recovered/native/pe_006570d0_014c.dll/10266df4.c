/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10266df4 */

/* Library Function - Single Match
    private: bool __thiscall __crt_stdio_input::input_processor<char,class
   __crt_stdio_input::string_input_adapter<char> >::process_floating_point_specifier(void)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __thiscall
__crt_stdio_input::input_processor<char,__crt_stdio_input::string_input_adapter<char>_>::
process_floating_point_specifier
          (input_processor<char,__crt_stdio_input::string_input_adapter<char>_> *this)

{
  undefined1 uVar1;
  int iVar2;
  
  process_whitespace(this);
  iVar2 = FUN_10266494();
  if (iVar2 == 4) {
    uVar1 = FUN_10266eda();
    return (bool)uVar1;
  }
  if (iVar2 != 8) {
    return false;
  }
  uVar1 = FUN_10266f42();
  return (bool)uVar1;
}

