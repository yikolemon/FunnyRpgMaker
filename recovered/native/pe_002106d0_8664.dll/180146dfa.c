/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180146dfa */

void FUN_180146dfa(undefined8 param_1,int *param_2,char *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  if ((*param_3 == '\n') && (*(char *)((longlong)param_2 + 0x17) != '\0')) {
    return;
  }
  if (((char)param_2[3] != '\0') && (param_2[1] == param_2[2])) {
    iVar2 = *param_2;
    iVar1 = FUN_180155f5d(param_1);
    if (iVar2 < iVar1) {
      FUN_1801566cd(param_1,param_2,iVar2,1,1);
      FUN_18015615c(param_1,*param_2,1);
      iVar2 = FUN_18015619b(param_1,*param_2,param_3,param_4);
      if (iVar2 == 0) {
        return;
      }
      goto LAB_180146eae;
    }
  }
  FUN_180155f01(param_1,param_2);
  iVar2 = FUN_18015619b(param_1,*param_2,param_3,param_4);
  if (iVar2 == 0) {
    return;
  }
  FUN_180156738(param_2,*param_2,iVar2);
LAB_180146eae:
  *param_2 = *param_2 + iVar2;
  *(undefined1 *)((longlong)param_2 + 0x16) = 0;
  return;
}

