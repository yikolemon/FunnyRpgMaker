/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407ea60c */

uint FUN_1407ea60c(longlong param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x290);
  *param_2 = uVar1 & 0xfff00000 | *(uint *)((ulonglong)uVar1 + 0x5c) & 0xfffff;
  return uVar1 & 0x3ff00000 |
         (int)param_2 - *(int *)((ulonglong)*(uint *)(param_1 + 0x290) + 0x70) >> 2;
}

