/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0048bdea */

/* Library Function - Single Match
    public: void __thiscall __crt_strtox::c_string_character_source<char>::unget(char)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __thiscall
__crt_strtox::c_string_character_source<char>::unget
          (c_string_character_source<char> *this,char param_1)

{
  int iVar1;
  __acrt_ptd *p_Var2;
  
  iVar1 = *(int *)this;
  *(char **)this = (char *)(iVar1 + -1);
  if ((param_1 != '\0') && (*(char *)(iVar1 + -1) != param_1)) {
    p_Var2 = FUN_0048f66d();
    *(undefined4 *)p_Var2 = 0x16;
    FUN_00495c88();
  }
  return;
}

