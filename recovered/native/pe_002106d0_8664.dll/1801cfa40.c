/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801cfa40 */

void FUN_1801cfa40(undefined8 param_1,char *param_2,undefined8 param_3)

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
  FUN_1801cf9b9(param_1,param_2,iVar2,param_3);
  return;
}

