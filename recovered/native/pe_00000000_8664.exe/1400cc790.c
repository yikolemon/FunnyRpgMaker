/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400cc790 */

undefined * FUN_1400cc790(longlong param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 8) != 0) {
    return *(undefined **)(*(longlong *)(param_2 + 8) + 8);
  }
  if ((longlong)*(int *)(param_2 + 0x28) != -1) {
    return (undefined *)((longlong)*(int *)(param_2 + 0x28) + *(longlong *)(param_1 + 0xa8));
  }
  return &DAT_140ecd5d9;
}

