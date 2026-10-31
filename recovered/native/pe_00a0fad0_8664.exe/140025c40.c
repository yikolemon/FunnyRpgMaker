/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140025c40 */

void FUN_140025c40(undefined8 *param_1,char *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  size_t sVar2;
  
  sVar2 = strlen(param_2);
  puVar1 = param_1 + 2;
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  FUN_140026231(param_1,*puVar1,param_3,param_2,sVar2);
  return;
}

