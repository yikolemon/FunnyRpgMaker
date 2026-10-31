/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c32cd */

int FUN_101c32cd(int *param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  
  if (param_1 == (int *)0x0) {
    iVar4 = 0;
  }
  else {
    if (*(code **)(*param_1 + 0x20) == (code *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (**(code **)(*param_1 + 0x20))(param_1,param_2);
    }
    if ((param_3 != '\0') && (iVar4 == 0)) {
      iVar1 = param_1[1];
      iVar2 = *(int *)(iVar1 + 0x10);
      iVar4 = 0;
      if (iVar2 != 0) {
        puVar6 = (undefined4 *)(iVar1 + 0x14);
        do {
          piVar3 = (int *)*puVar6;
          if (((piVar3 != param_1) && (*(code **)(*piVar3 + 0x20) != (code *)0x0)) &&
             (iVar5 = (**(code **)(*piVar3 + 0x20))(piVar3,param_2), iVar5 != 0)) {
            return iVar5;
          }
          puVar6 = puVar6 + 1;
        } while (puVar6 < (undefined4 *)(iVar2 * 4 + 0x14 + iVar1));
      }
    }
  }
  return iVar4;
}

