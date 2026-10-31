/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14003d23e */

undefined8
FUN_14003d23e(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5)

{
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  FUN_14003d5aa(param_1,param_2,param_3,param_4,param_5);
  return param_1;
}

