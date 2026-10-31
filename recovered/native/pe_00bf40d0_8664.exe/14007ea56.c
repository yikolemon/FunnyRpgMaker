/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14007ea56 */

void FUN_14007ea56(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  longlong lVar10;
  int *piVar11;
  
  iVar2 = *(int *)((longlong)param_1 + 0xc);
  if (1 < (longlong)iVar2) {
    lVar4 = *param_1;
    uVar3 = *(uint *)(param_1 + 1);
    lVar1 = (longlong)(int)(uVar3 - 2) + 1;
    piVar11 = (int *)(lVar4 + (longlong)(int)uVar3 * 0x10 + (longlong)(int)(uVar3 - 2) * 0x10);
    lVar10 = 1;
    uVar9 = uVar3;
    do {
      lVar6 = lVar1;
      piVar8 = piVar11;
      if ((int)uVar3 < 3) {
        if (1 < (int)uVar3) goto LAB_14007eb38;
      }
      else {
        piVar7 = (int *)((ulonglong)uVar9 * 0x10 + lVar4 + 0x10);
        lVar5 = (ulonglong)(uVar3 - 1) - 1;
        do {
          FUN_14007ec8e(piVar7,-1,-1,uVar3);
          FUN_14007ec8e(piVar7,0,-1,uVar3);
          FUN_14007ec8e(piVar7,1,-1,uVar3);
          FUN_14007ec8e(piVar7,-1,0,uVar3);
          piVar7 = piVar7 + 4;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
LAB_14007eb38:
        do {
          FUN_14007ec8e(piVar8,1,0,uVar3);
          lVar6 = lVar6 + -1;
          piVar8 = piVar8 + -4;
        } while (lVar6 != 0);
      }
      lVar10 = lVar10 + 1;
      uVar9 = uVar9 + uVar3;
      piVar11 = piVar11 + (longlong)(int)uVar3 * 4;
    } while (lVar10 != iVar2);
  }
  return;
}

