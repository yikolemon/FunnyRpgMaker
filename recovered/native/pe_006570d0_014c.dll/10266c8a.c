/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10266c8a */

/* Library Function - Single Match
    private: bool __thiscall __crt_stdio_input::input_processor<char,class
   __crt_stdio_input::string_input_adapter<char> >::process_string_specifier(enum
   __crt_stdio_input::conversion_mode)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __thiscall
__crt_stdio_input::input_processor<char,__crt_stdio_input::string_input_adapter<char>_>::
process_string_specifier
          (input_processor<char,__crt_stdio_input::string_input_adapter<char>_> *this,
          conversion_mode param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  if (param_1 == 1) {
    process_whitespace(this);
  }
  iVar2 = FUN_10266494();
  if (iVar2 == 1) {
    uVar1 = FUN_10267164(param_1,0);
  }
  else if (iVar2 == 2) {
    uVar1 = FUN_102672d0(param_1,0);
  }
  else {
    uVar1 = 0;
  }
  return (bool)uVar1;
}

