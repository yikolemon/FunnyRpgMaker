/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10262850 */

/* Library Function - Single Match
    public: void __thiscall __crt_strtox::c_string_character_source<wchar_t>::unget(wchar_t)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __thiscall
__crt_strtox::c_string_character_source<wchar_t>::unget
          (c_string_character_source<wchar_t> *this,wchar_t param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)this;
  *(wchar_t **)this = (wchar_t *)(iVar1 + -2);
  if ((param_1 != L'\0') && (*(wchar_t *)(iVar1 + -2) != param_1)) {
    puVar2 = (undefined4 *)FUN_10268ffd();
    *puVar2 = 0x16;
    FUN_10273ea8();
  }
  return;
}

