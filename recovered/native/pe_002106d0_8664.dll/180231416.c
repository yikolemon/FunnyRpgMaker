/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180231416 */

void FUN_180231416(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  
  iVar2 = *(int *)((longlong)param_1 + 0xc);
  if (1 < (longlong)iVar2) {
    lVar4 = *param_1;
    uVar3 = *(uint *)(param_1 + 1);
    lVar1 = (longlong)(int)(uVar3 - 2) + 1;
    lVar11 = lVar4 + (longlong)(int)uVar3 * 0x10 + (longlong)(int)(uVar3 - 2) * 0x10;
    lVar10 = 1;
    uVar9 = uVar3;
    do {
      lVar6 = lVar1;
      lVar8 = lVar11;
      if ((int)uVar3 < 3) {
        if (1 < (int)uVar3) goto LAB_1802314f8;
      }
      else {
        lVar7 = (ulonglong)uVar9 * 0x10 + lVar4 + 0x10;
        lVar5 = (ulonglong)(uVar3 - 1) - 1;
        do {
          FUN_18023164e(lVar7,0xffffffff,0xffffffff,uVar3);
          FUN_18023164e(lVar7,0,0xffffffff,uVar3);
          FUN_18023164e(lVar7,1,0xffffffff,uVar3);
          FUN_18023164e(lVar7,0xffffffff,0,uVar3);
          lVar7 = lVar7 + 0x10;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
LAB_1802314f8:
        do {
          FUN_18023164e(lVar8,1,0,uVar3);
          lVar6 = lVar6 + -1;
          lVar8 = lVar8 + -0x10;
        } while (lVar6 != 0);
      }
      lVar10 = lVar10 + 1;
      uVar9 = uVar9 + uVar3;
      lVar11 = lVar11 + (longlong)(int)uVar3 * 0x10;
    } while (lVar10 != iVar2);
  }
  return;
}

