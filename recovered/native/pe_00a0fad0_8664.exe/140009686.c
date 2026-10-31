/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140009686 */

undefined8 * FUN_140009686(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    puVar2 = (undefined8 *)*param_3;
  }
  iVar1 = FUN_140006e12(puVar2);
  if (iVar1 == 0) {
    FUN_140006fbc(param_1,"Path does not exist: ",param_3);
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0xf;
  }
  return param_1;
}

