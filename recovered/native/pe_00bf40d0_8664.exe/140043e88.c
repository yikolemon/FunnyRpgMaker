/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140043e88 */

void FUN_140043e88(longlong param_1,uint param_2,undefined4 param_3)

{
  FUN_1400440fa(param_1);
  if (*(int *)(param_1 + 0x20) == 0) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x200) + (ulonglong)param_2 * 4) = param_3;
  }
  return;
}

