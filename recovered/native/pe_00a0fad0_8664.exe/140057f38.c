/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140057f38 */

undefined8
FUN_140057f38(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5)

{
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  FUN_14007223c(param_1,param_2,param_3,param_4,param_5);
  return param_1;
}

