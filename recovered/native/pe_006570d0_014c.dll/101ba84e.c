/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101ba84e */

undefined4 FUN_101ba84e(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((*(int *)(*(int *)(param_2 + 0x20) + 0x20) != 0) ||
     (cVar1 = FUN_100fb858(param_2,0), cVar1 != '\0')) {
    iVar2 = param_1[2];
    if ((iVar2 < *param_1) || (param_1[1] <= iVar2)) {
      if (0 < *(int *)(param_2 + 0x24)) {
        cVar1 = FUN_10148c72(*(undefined4 *)(param_2 + 0x1c));
        if (cVar1 != '\0') {
          FUN_10149358(param_2);
          param_1[2] = param_1[2] + 1;
          goto LAB_101ba8b0;
        }
        iVar2 = param_1[2];
      }
      param_1[2] = iVar2 + 1;
    }
    else {
      cVar1 = FUN_101ba8f8(param_2);
      param_1[2] = param_1[2] + 1;
      if (cVar1 != '\0') {
LAB_101ba8b0:
        return **(undefined4 **)(param_2 + 0x2c);
      }
    }
  }
  iVar2 = *(int *)(param_2 + 0x20);
  iVar3 = *(int *)(param_2 + 0x30) + 1;
  iVar4 = iVar2;
  if (*(int *)(iVar2 + 0x24) <= iVar3) {
    do {
      if (*(int *)(iVar4 + 0x20) == 0) {
        return 0;
      }
      FUN_10149387();
      iVar2 = *(int *)(iVar4 + 0x20);
      iVar3 = *(int *)(iVar4 + 0x30) + 1;
      iVar4 = iVar2;
    } while (*(int *)(iVar2 + 0x24) <= iVar3);
  }
  return *(undefined4 *)(*(int *)(iVar2 + 0x2c) + iVar3 * 4);
}

