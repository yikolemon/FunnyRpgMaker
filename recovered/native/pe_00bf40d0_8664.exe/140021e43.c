/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140021e43 */

void FUN_140021e43(longlong param_1,char *param_2,int *param_3)

{
  size_t sVar1;
  uint uVar2;
  
  if (param_2 == (char *)0x0) {
    uVar2 = 0;
  }
  else {
    sVar1 = strlen(param_2);
    uVar2 = (int)sVar1 + 1;
  }
  FUN_140021dbc(param_1,(undefined8 *)param_2,uVar2,param_3);
  return;
}

