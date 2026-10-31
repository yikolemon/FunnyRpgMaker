/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140145f40 */

void FUN_140145f40(longlong param_1,uint param_2,undefined4 param_3)

{
  FUN_1401461b2();
  if (*(int *)(param_1 + 0x20) == 0) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x200) + (ulonglong)param_2 * 4) = param_3;
  }
  return;
}

