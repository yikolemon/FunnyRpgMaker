/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10119f9b */

void FUN_10119f9b(int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = DAT_1039d74c;
  if ((param_2 != '\0') && (iVar5 = *(int *)(DAT_1039d74c + 0x26f0), iVar5 != 0)) {
    iVar6 = iVar5 + 4;
    do {
      if ((param_1 == 0) || (iVar1 = *(int *)(iVar6 + 0x14), iVar1 == param_1)) {
LAB_10119fc9:
        *(undefined4 *)(iVar6 + 0x14) = 0;
        iVar5 = *(int *)(iVar2 + 0x26f0);
      }
      else if ((iVar1 != 0) && (piVar3 = (int *)FUN_1011b528(iVar2,iVar1), piVar3 != (int *)0x0)) {
        do {
          piVar4 = piVar3;
          piVar3 = (int *)piVar4[6];
        } while (piVar3 != (int *)0x0);
        if (*piVar4 == param_1) goto LAB_10119fc9;
      }
      iVar6 = iVar6 + *(int *)(iVar6 + -4);
    } while (iVar6 != *(int *)(iVar2 + 0x26e8) + iVar5 + 4);
  }
  iVar5 = *(int *)(iVar2 + 0x1484);
  if (0 < iVar5) {
    iVar6 = 0;
    do {
      iVar1 = *(int *)(*(int *)(iVar2 + 0x148c) + iVar6 * 4);
      if (param_1 == 0) {
LAB_1011a055:
        FUN_10118c2f(iVar2,iVar1,param_2);
        iVar5 = *(int *)(iVar2 + 0x1484);
      }
      else {
        piVar3 = *(int **)(iVar1 + 0x430);
        if (*(int **)(iVar1 + 0x430) != (int *)0x0) {
          do {
            piVar4 = piVar3;
            piVar3 = (int *)piVar4[6];
          } while (piVar3 != (int *)0x0);
          if (*piVar4 == param_1) goto LAB_1011a055;
        }
        if ((*(int **)(iVar1 + 0x434) != (int *)0x0) && (**(int **)(iVar1 + 0x434) == param_1))
        goto LAB_1011a055;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar5);
  }
  return;
}

