/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004966b9 */

/* Library Function - Single Match
    ___acrt_update_locale_info
   
   Library: Visual Studio 2019 Release */

void __cdecl ___acrt_update_locale_info(int param_1,int *param_2)

{
  int iVar1;
  
  if ((*param_2 != DAT_00521b90) && ((*(uint *)(param_1 + 0x350) & DAT_0051b640) == 0)) {
    iVar1 = FUN_0049ade8();
    *param_2 = iVar1;
  }
  return;
}

