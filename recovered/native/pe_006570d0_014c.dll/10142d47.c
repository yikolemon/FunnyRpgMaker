/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10142d47 */

void __fastcall FUN_10142d47(int *param_1)

{
  if (param_1[1] == param_1[2]) {
    param_1[2] = *param_1;
    param_1[1] = *param_1;
    return;
  }
  *param_1 = param_1[2];
  return;
}

