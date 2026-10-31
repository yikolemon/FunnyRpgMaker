/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0048ed45 */

/* Library Function - Single Match
    _get_default_code_page
   
   Library: Visual Studio 2019 Release */

int __cdecl get_default_code_page(ushort *param_1)

{
  int iVar1;
  void *in_ECX;
  int local_8;
  
  local_8 = 0;
  iVar1 = ___acrt_GetLocaleInfoEx_16(in_ECX,param_1,0x20001004,(LPWSTR)&local_8,2);
  if ((iVar1 == 0) || (local_8 == 0)) {
    local_8 = 0xfde9;
  }
  return local_8;
}

