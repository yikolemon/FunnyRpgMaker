/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400689d4 */

void FUN_1400689d4(longlong param_1,undefined4 param_2)

{
  if (*(undefined4 **)(param_1 + 0x18) !=
      (undefined4 *)((ulonglong)*(uint *)(param_1 + 0x20) * 8 + *(longlong *)(param_1 + 0x10))) {
    **(undefined4 **)(param_1 + 0x18) = param_2;
    *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 4) = 0;
    *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + 8;
    return;
  }
  FUN_140067118(*(int **)(param_1 + 8),0x82);
  return;
}

