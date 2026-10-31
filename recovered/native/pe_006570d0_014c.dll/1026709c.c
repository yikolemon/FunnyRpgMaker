/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026709c */

/* Library Function - Single Match
    public: void __thiscall __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::string_input_adapter<char> >::unget(char)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __thiscall
__crt_strtox::input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::unget
          (input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_> *this,
          char param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)(this + 0x10) - 1;
  uVar2 = *(int *)(this + 0x14) + -1 + (uint)(*(int *)(this + 0x10) != 0);
  *(uint *)(this + 0x10) = uVar1;
  *(uint *)(this + 0x14) = uVar2;
  if ((((*(int *)(this + 8) == 0 && *(int *)(this + 0xc) == 0) ||
       ((uVar2 <= *(uint *)(this + 0xc) &&
        ((uVar2 < *(uint *)(this + 0xc) || (uVar1 <= *(uint *)(this + 8))))))) && (param_1 != '\0'))
     && (param_1 != -1)) {
    __crt_stdio_input::string_input_adapter<char>::unget
              (*(string_input_adapter<char> **)this,(int)param_1);
  }
  return;
}

