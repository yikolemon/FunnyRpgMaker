/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401553bc */

void FUN_1401553bc(undefined1 *param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_14012dd2b(param_2,param_1 + 8);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

