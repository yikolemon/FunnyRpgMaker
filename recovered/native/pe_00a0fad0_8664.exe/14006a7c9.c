/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14006a7c9 */

undefined8 *
FUN_14006a7c9(undefined8 *param_1,char *param_2,undefined8 *param_3,undefined1 *param_4)

{
  undefined8 *puVar1;
  size_t sVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  sVar2 = strlen(param_2);
  if (0xf < sVar2 + param_3[2] + 1) {
    FUN_14000e9ea(param_1);
    param_1[2] = 0;
  }
  sVar2 = strlen(param_2);
  FUN_14000b1f8(param_1,param_2,sVar2);
  puVar1 = param_3 + 2;
  if (0xf < (ulonglong)param_3[3]) {
    param_3 = (undefined8 *)*param_3;
  }
  FUN_14000b1f8(param_1,param_3,*puVar1);
  FUN_14000cf50(param_1,*param_4);
  return param_1;
}

