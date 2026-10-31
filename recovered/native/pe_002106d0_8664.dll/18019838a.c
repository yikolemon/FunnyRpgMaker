/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18019838a */

void FUN_18019838a(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_180196cd0(param_1[1],param_1,0);
  }
  *(undefined1 *)((longlong)param_1 + 0x34) = 0;
  *param_1 = 0;
  return;
}

