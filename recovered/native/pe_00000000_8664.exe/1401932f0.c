/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401932f0 */

/* Library Function - Single Match
    __pctype_func
   
   Library: Visual Studio 2019 Release */

ushort * __cdecl __pctype_func(void)

{
  longlong lVar1;
  undefined8 *local_res8 [4];
  
  lVar1 = FUN_1401aecc8();
  local_res8[0] = *(undefined8 **)(lVar1 + 0x90);
  __acrt_update_locale_info(lVar1,local_res8);
  return (ushort *)*local_res8[0];
}

