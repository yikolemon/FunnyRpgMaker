/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801bf40c */

int FUN_1801bf40c(int *param_1,longlong param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  if (*param_1 != 0) {
    iVar4 = *(int *)(param_2 + 0x18);
    iVar3 = iVar4;
    if (*(char *)(param_2 + 0x20) == '\0') {
      *(undefined1 *)(param_2 + 0x21) = 1;
      return iVar4;
    }
    while (iVar3 = iVar3 + 1, iVar3 < param_3) {
      uVar2 = (**(code **)(param_1 + 4))(param_1,iVar3);
      cVar1 = FUN_18014f686(param_1,uVar2);
      if (cVar1 == '\0') {
        return iVar3;
      }
    }
    if (param_3 < iVar4) {
      iVar4 = param_3;
    }
    while (0 < iVar4) {
      iVar4 = iVar4 + -1;
      uVar2 = (**(code **)(param_1 + 4))(param_1,iVar4);
      cVar1 = FUN_18014f686(param_1,uVar2);
      if (cVar1 == '\0') {
        return iVar4;
      }
    }
  }
  return -1;
}

