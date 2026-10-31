/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10190912 */

void FUN_10190912(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 char param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if (*(int *)(iVar1 + 0x18) == 0) {
    if (0 < param_5) {
      iVar3 = *(int *)(iVar1 + 0x1c);
      iVar2 = (param_3 * iVar3 + param_2) * *(int *)(iVar1 + 0x24) + *(int *)(iVar1 + 0x28);
      iVar4 = 0;
      do {
        if (0 < param_4) {
          iVar3 = 0;
          do {
            *(uint *)(iVar2 + iVar3 * 4) = -(uint)(*(char *)(param_6 + iVar3) == param_7);
            iVar3 = iVar3 + 1;
          } while (param_4 != iVar3);
          iVar3 = *(int *)(iVar1 + 0x1c);
        }
        iVar4 = iVar4 + 1;
        iVar2 = iVar2 + iVar3 * 4;
        param_6 = param_6 + param_4;
      } while (iVar4 != param_5);
    }
  }
  else if ((*(int *)(iVar1 + 0x18) == 1) && (0 < param_5)) {
    iVar2 = *(int *)(iVar1 + 0x1c);
    iVar4 = (param_3 * iVar2 + param_2) * *(int *)(iVar1 + 0x24) + *(int *)(iVar1 + 0x28);
    iVar3 = 0;
    do {
      if (0 < param_4) {
        iVar2 = 0;
        do {
          *(char *)(iVar4 + iVar2) = -(*(char *)(param_6 + iVar2) == param_7);
          iVar2 = iVar2 + 1;
        } while (param_4 != iVar2);
        iVar2 = *(int *)(iVar1 + 0x1c);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + iVar2;
      param_6 = param_6 + param_4;
    } while (iVar3 != param_5);
  }
  return;
}

