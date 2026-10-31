/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140041da8 */

void FUN_140041da8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  if (param_1 == param_2) {
    return;
  }
  if (7 < (ulonglong)param_2[4]) {
    FUN_140016930(param_1 + 1,param_2[1],param_2[3]);
    return;
  }
  FUN_140016930(param_1 + 1,param_2 + 1,param_2[3]);
  return;
}

