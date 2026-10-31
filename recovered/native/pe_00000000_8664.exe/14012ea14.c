/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14012ea14 */

void FUN_14012ea14(undefined8 param_1,char *param_2,undefined8 param_3)

{
  size_t sVar1;
  int iVar2;
  
  if (param_2 == (char *)0x0) {
    iVar2 = 0;
  }
  else {
    sVar1 = strlen(param_2);
    iVar2 = (int)sVar1 + 1;
  }
  FUN_14012e98d(param_1,param_2,iVar2,param_3);
  return;
}

