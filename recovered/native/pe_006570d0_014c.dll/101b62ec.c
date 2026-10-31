/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101b62ec */

int __thiscall FUN_101b62ec(int *param_1,int param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  if (*param_1 == 0) {
    return -1;
  }
  iVar4 = *(int *)(param_2 + 0x18);
  iVar3 = iVar4;
  if (*(char *)(param_2 + 0x20) != '\0') {
    do {
      iVar3 = iVar3 + 1;
      if (param_3 <= iVar3) {
        if (param_3 < iVar4) {
          iVar4 = param_3;
        }
        do {
          if (iVar4 < 1) {
            return -1;
          }
          iVar4 = iVar4 + -1;
          uVar2 = (*(code *)param_1[3])(param_1,iVar4);
          cVar1 = FUN_1014b156(uVar2);
        } while (cVar1 != '\0');
        return iVar4;
      }
      uVar2 = (*(code *)param_1[3])(param_1,iVar3);
      cVar1 = FUN_1014b156(uVar2);
    } while (cVar1 != '\0');
    return iVar3;
  }
  *(undefined1 *)(param_2 + 0x21) = 1;
  return iVar4;
}

