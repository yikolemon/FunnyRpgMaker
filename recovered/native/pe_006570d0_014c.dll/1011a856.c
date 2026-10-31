/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1011a856 */

int __fastcall FUN_1011a856(int param_1)

{
  int iVar1;
  float in_XMM0_Da;
  float in_XMM1_Da;
  
  iVar1 = 0;
  if ((((((*(byte *)(param_1 + 0xac) & 1) != 0) && (*(float *)(param_1 + 0x34) <= in_XMM0_Da)) &&
       (*(float *)(param_1 + 0x38) <= in_XMM1_Da)) &&
      ((in_XMM0_Da < *(float *)(param_1 + 0x34) + *(float *)(param_1 + 0x3c) &&
       (in_XMM1_Da < *(float *)(param_1 + 0x38) + *(float *)(param_1 + 0x40))))) &&
     ((iVar1 = param_1, *(int *)(param_1 + 0x1c) != 0 &&
      ((iVar1 = FUN_1011a856(), iVar1 == 0 && (iVar1 = FUN_1011a856(), iVar1 == 0)))))) {
    iVar1 = param_1;
  }
  return iVar1;
}

