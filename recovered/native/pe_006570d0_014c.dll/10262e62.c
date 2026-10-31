/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10262e62 */

/* Library Function - Single Match
    public: void __thiscall __crt_strtox::c_string_character_source<char>::unget(char)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __thiscall
__crt_strtox::c_string_character_source<char>::unget
          (c_string_character_source<char> *this,char param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)this;
  *(char **)this = (char *)(iVar1 + -1);
  if ((param_1 != '\0') && (*(char *)(iVar1 + -1) != param_1)) {
    puVar2 = (undefined4 *)FUN_10268ffd();
    *puVar2 = 0x16;
    FUN_10273ea8();
  }
  return;
}

