/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14005330c */

void FUN_14005330c(undefined1 *param_1,longlong param_2)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_14002115a(param_2,(longlong *)(param_1 + 8));
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

