/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1019273c */

uint __fastcall FUN_1019273c(int param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *param_2;
  *param_2 = uVar1 & 0xfff00000 | *(int *)(*(int *)(param_1 + 0x290) + 0x5c) - 1U & 0xfffff;
  return uVar1 & 0x3ff00000 | (int)param_2 - *(int *)(*(int *)(param_1 + 0x290) + 0x70) >> 2;
}

