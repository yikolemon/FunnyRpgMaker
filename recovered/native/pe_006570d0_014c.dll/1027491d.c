/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1027491d */

/* Library Function - Single Match
    ___acrt_update_locale_info
   
   Library: Visual Studio 2019 Release */

void ___acrt_update_locale_info(int param_1,int *param_2)

{
  int iVar1;
  
  if ((*param_2 != DAT_103a50f0) && ((*(uint *)(param_1 + 0x350) & DAT_1039bbd0) == 0)) {
    iVar1 = FUN_1027c0cc();
    *param_2 = iVar1;
  }
  return;
}

