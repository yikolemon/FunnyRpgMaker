/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180153995 */

void FUN_180153995(longlong param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1801537ff();
  if (lVar1 != 0) {
    FUN_1802a82f0(lVar1,lVar1 + 0x38,
                  (~(((ulonglong)(lVar1 - *(longlong *)(param_1 + 0x10)) >> 3) * 0x6db6db6db6db6db7)
                  + (longlong)*(int *)(param_1 + 8)) * 0x38);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
  }
  if (*(int *)(param_1 + 0x2c) == param_2) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  if (*(int *)(param_1 + 0x20) == param_2) {
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  if (*(int *)(param_1 + 0x24) == param_2) {
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  return;
}

