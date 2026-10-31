/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14002115a */

void FUN_14002115a(longlong param_1,longlong *param_2)

{
  if ((param_1 != 0) && (*(longlong *)(param_1 + 0x20) != 0)) {
    FUN_14001c53d(*(longlong *)(param_1 + 0x30),*param_2);
  }
  *param_2 = 0;
  return;
}

