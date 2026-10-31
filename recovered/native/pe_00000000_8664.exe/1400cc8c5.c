/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400cc8c5 */

void FUN_1400cc8c5(longlong param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1400cc72f();
  if (lVar1 != 0) {
    FUN_1401c5180(lVar1,lVar1 + 0x38,
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

