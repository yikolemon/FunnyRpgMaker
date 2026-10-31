/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400d2707 */

void FUN_1400d2707(undefined8 *param_1,undefined1 *param_2,char param_3)

{
  *param_1 = param_2;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  if (param_3 == '\0') {
    *param_2 = 0;
  }
  return;
}

