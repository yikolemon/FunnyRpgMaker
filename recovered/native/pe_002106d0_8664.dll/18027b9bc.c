/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18027b9bc */

/* Library Function - Single Match
    private: bool __cdecl __crt_stdio_input::input_processor<char,class
   __crt_stdio_input::string_input_adapter<char> >::process_string_specifier(enum
   __crt_stdio_input::conversion_mode) __ptr64
   
   Library: Visual Studio 2019 Release */

bool __thiscall
__crt_stdio_input::input_processor<char,__crt_stdio_input::string_input_adapter<char>_>::
process_string_specifier
          (input_processor<char,__crt_stdio_input::string_input_adapter<char>_> *this,
          conversion_mode param_1)

{
  undefined1 uVar1;
  int iVar2;
  longlong lVar3;
  
  if (param_1 == 1) {
    iVar2 = FUN_18027bc84(this + 8,*(undefined8 *)(this + 0x78));
    lVar3 = *(longlong *)(this + 0x18);
    if ((lVar3 != *(longlong *)(this + 8)) &&
       ((lVar3 != *(longlong *)(this + 0x10) || (iVar2 != -1)))) {
      *(longlong *)(this + 0x18) = lVar3 + -1;
    }
  }
  lVar3 = FUN_18027b0a0(this + 0x20);
  if (lVar3 == 1) {
    uVar1 = FUN_18027bf24(this,param_1,0);
  }
  else if (lVar3 == 2) {
    uVar1 = FUN_18027c0c8(this,param_1,0);
  }
  else {
    uVar1 = 0;
  }
  return (bool)uVar1;
}

