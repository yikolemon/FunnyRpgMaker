/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140098473 */

void FUN_140098473(int param_1,undefined4 param_2)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar1 = DAT_140f2a910;
  if (((char)param_2 != '\0') && (lVar5 = *(longlong *)(DAT_140f2a910 + 0x29a0), lVar5 != 0)) {
    lVar6 = lVar5 + 4;
    do {
      if ((param_1 == 0) || (*(int *)(lVar6 + 0x14) == param_1)) {
LAB_1400984a9:
        *(undefined4 *)(lVar6 + 0x14) = 0;
        lVar5 = *(longlong *)(lVar1 + 0x29a0);
      }
      else if ((*(int *)(lVar6 + 0x14) != 0) &&
              (piVar3 = (int *)FUN_140099b24(lVar1), piVar3 != (int *)0x0)) {
        do {
          piVar4 = piVar3;
          piVar3 = *(int **)(piVar4 + 6);
        } while (piVar3 != (int *)0x0);
        if (*piVar4 == param_1) goto LAB_1400984a9;
      }
      lVar6 = lVar6 + *(int *)(lVar6 + -4);
    } while (lVar6 != *(int *)(lVar1 + 0x2998) + lVar5 + 4);
  }
  iVar2 = *(int *)(lVar1 + 0x15a8);
  if (0 < iVar2) {
    lVar5 = 0;
    do {
      lVar6 = *(longlong *)(*(longlong *)(lVar1 + 0x15b0) + lVar5 * 8);
      if (param_1 == 0) {
LAB_140098540:
        FUN_140096efe(lVar1,lVar6,param_2);
        iVar2 = *(int *)(lVar1 + 0x15a8);
      }
      else {
        piVar3 = *(int **)(lVar6 + 0x4c0);
        if (*(int **)(lVar6 + 0x4c0) != (int *)0x0) {
          do {
            piVar4 = piVar3;
            piVar3 = *(int **)(piVar4 + 6);
          } while (piVar3 != (int *)0x0);
          if (*piVar4 == param_1) goto LAB_140098540;
        }
        if ((*(int **)(lVar6 + 0x4c8) != (int *)0x0) && (**(int **)(lVar6 + 0x4c8) == param_1))
        goto LAB_140098540;
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar2);
  }
  return;
}

