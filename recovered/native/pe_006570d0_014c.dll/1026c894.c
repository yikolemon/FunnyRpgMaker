/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026c894 */

/* Library Function - Single Match
    _get_default_code_page
   
   Library: Visual Studio 2019 Release */

int __cdecl get_default_code_page(undefined4 param_1)

{
  int iVar1;
  int local_8;
  
  local_8 = 0;
  iVar1 = ___acrt_GetLocaleInfoEx_16(param_1,0x20001004,&local_8,2);
  if ((iVar1 == 0) || (local_8 == 0)) {
    local_8 = 0xfde9;
  }
  return local_8;
}

