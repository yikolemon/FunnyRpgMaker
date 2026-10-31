/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140068a13 */

void FUN_140068a13(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = FUN_140067f2a(param_1);
  if ((uint)uVar1 < param_2) {
    FUN_140067118(*(int **)(param_1 + 8),0xa1);
    return;
  }
  *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + (ulonglong)param_2 * -8;
  return;
}

