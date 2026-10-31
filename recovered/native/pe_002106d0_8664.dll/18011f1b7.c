/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18011f1b7 */

void FUN_18011f1b7(int param_1,undefined4 param_2)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar1 = DAT_180419160;
  if (((char)param_2 != '\0') && (lVar5 = *(longlong *)(DAT_180419160 + 0x29a0), lVar5 != 0)) {
    lVar6 = lVar5 + 4;
    do {
      if ((param_1 == 0) || (*(int *)(lVar6 + 0x14) == param_1)) {
LAB_18011f1ed:
        *(undefined4 *)(lVar6 + 0x14) = 0;
        lVar5 = *(longlong *)(lVar1 + 0x29a0);
      }
      else if ((*(int *)(lVar6 + 0x14) != 0) &&
              (piVar3 = (int *)FUN_180120868(lVar1), piVar3 != (int *)0x0)) {
        do {
          piVar4 = piVar3;
          piVar3 = *(int **)(piVar4 + 6);
        } while (piVar3 != (int *)0x0);
        if (*piVar4 == param_1) goto LAB_18011f1ed;
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
LAB_18011f284:
        FUN_18011dc42(lVar1,lVar6,param_2);
        iVar2 = *(int *)(lVar1 + 0x15a8);
      }
      else {
        piVar3 = *(int **)(lVar6 + 0x4c0);
        if (*(int **)(lVar6 + 0x4c0) != (int *)0x0) {
          do {
            piVar4 = piVar3;
            piVar3 = *(int **)(piVar4 + 6);
          } while (piVar3 != (int *)0x0);
          if (*piVar4 == param_1) goto LAB_18011f284;
        }
        if ((*(int **)(lVar6 + 0x4c8) != (int *)0x0) && (**(int **)(lVar6 + 0x4c8) == param_1))
        goto LAB_18011f284;
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar2);
  }
  return;
}

