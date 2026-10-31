/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1025e90d */

/* Library Function - Single Match
    ___pctype_func
   
   Library: Visual Studio 2019 Release */

ushort * __cdecl ___pctype_func(void)

{
  int iVar1;
  undefined4 *local_8;
  
  iVar1 = FUN_102743cd();
  local_8 = *(undefined4 **)(iVar1 + 0x4c);
  ___acrt_update_locale_info(iVar1,&local_8);
  return (ushort *)*local_8;
}

