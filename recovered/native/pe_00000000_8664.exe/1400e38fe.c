/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400e38fe */

void FUN_1400e38fe(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_1400e2244(param_1[1],param_1,0);
  }
  *(undefined1 *)((longlong)param_1 + 0x34) = 0;
  *param_1 = 0;
  return;
}

