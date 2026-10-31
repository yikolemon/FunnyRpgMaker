/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1018d704 */

void __thiscall FUN_1018d704(int param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  float fVar7;
  
  uVar5 = param_2[5];
  uVar4 = param_2[4];
  fVar7 = (*(float *)(uVar4 + 0xc) - (float)param_2[3]) *
          ((float)param_2[2] - *(float *)(uVar5 + 8)) -
          ((float)param_2[3] - *(float *)(uVar5 + 0xc)) *
          (*(float *)(uVar4 + 8) - (float)param_2[2]);
  if (0.0 < fVar7) {
    bVar3 = FUN_1018d5c4(*(undefined4 *)(uVar5 + 4),param_2[1],*(undefined4 *)(uVar4 + 4),uVar5 + 8,
                         param_2 + 2,uVar4 + 8);
    uVar5 = (uint)bVar3;
  }
  else {
    uVar5 = 2;
    bVar3 = 0;
  }
  uVar4 = *param_2;
  if (uVar5 != uVar4) {
    if (uVar4 == 1) {
      iVar2 = *(int *)(param_1 + 8);
      iVar6 = *(int *)(param_1 + 0xc);
      do {
        if (iVar6 < 1) goto LAB_1018d7f8;
        iVar1 = iVar6 * 4;
        iVar6 = iVar6 + -1;
      } while (*(uint *)(*(int *)(iVar2 + -4 + iVar1) + 4) != param_2[1]);
      *(undefined4 *)(iVar2 + iVar6 * 4) = *(undefined4 *)(iVar2 + -4 + *(int *)(param_1 + 0xc) * 4)
      ;
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
    }
    else if (uVar4 == 2) {
      iVar2 = *(int *)(param_1 + 0x10);
      iVar6 = *(int *)(param_1 + 0x14);
      do {
        if (iVar6 < 1) goto LAB_1018d7f8;
        iVar1 = iVar6 * 4;
        iVar6 = iVar6 + -1;
      } while (*(uint *)(*(int *)(iVar2 + -4 + iVar1) + 4) != param_2[1]);
      *(undefined4 *)(iVar2 + iVar6 * 4) =
           *(undefined4 *)(iVar2 + -4 + *(int *)(param_1 + 0x14) * 4);
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
    }
LAB_1018d7f8:
    if ((0.0 < fVar7 & (bVar3 ^ 1)) == 0) {
      uVar4 = (uint)(fVar7 <= 0.0);
      iVar2 = *(int *)(param_1 + 0xc + uVar4 * 8);
      *(int *)(param_1 + 0xc + uVar4 * 8) = iVar2 + 1;
      *(uint **)(*(int *)(param_1 + 8 + uVar4 * 8) + iVar2 * 4) = param_2;
    }
    *param_2 = uVar5;
  }
  return;
}

