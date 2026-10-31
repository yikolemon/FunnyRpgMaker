/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180153860 */

undefined * FUN_180153860(longlong param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 8) != 0) {
    return *(undefined **)(*(longlong *)(param_2 + 8) + 8);
  }
  if ((longlong)*(int *)(param_2 + 0x28) != -1) {
    return (undefined *)((longlong)*(int *)(param_2 + 0x28) + *(longlong *)(param_1 + 0xa8));
  }
  return &DAT_18036cf1c;
}

