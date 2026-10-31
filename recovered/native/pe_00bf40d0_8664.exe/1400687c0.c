/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400687c0 */

void FUN_1400687c0(longlong param_1,uint param_2,undefined4 param_3)

{
  ulonglong uVar1;
  
  uVar1 = FUN_140067f2a(param_1);
  if (param_2 < (uint)uVar1) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + (ulonglong)param_2 * 8) = param_3;
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 4 + (ulonglong)param_2 * 8) = 0;
    return;
  }
  FUN_140067118(*(int **)(param_1 + 8),0x82);
  return;
}

