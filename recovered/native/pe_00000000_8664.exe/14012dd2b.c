/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14012dd2b */

void FUN_14012dd2b(longlong param_1,undefined8 *param_2)

{
  if ((param_1 != 0) && (*(longlong *)(param_1 + 0x20) != 0)) {
    FUN_140128b39(*(undefined8 *)(param_1 + 0x30),*param_2);
  }
  *param_2 = 0;
  return;
}

