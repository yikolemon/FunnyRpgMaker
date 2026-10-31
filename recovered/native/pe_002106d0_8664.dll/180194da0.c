/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180194da0 */

void FUN_180194da0(longlong param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  float fVar8;
  
  lVar5 = *(longlong *)(param_2 + 6);
  lVar3 = *(longlong *)(param_2 + 4);
  fVar8 = (*(float *)(lVar3 + 0xc) - (float)param_2[3]) *
          ((float)param_2[2] - *(float *)(lVar5 + 8)) -
          ((float)param_2[3] - *(float *)(lVar5 + 0xc)) *
          (*(float *)(lVar3 + 8) - (float)param_2[2]);
  if (0.0 < fVar8) {
    bVar4 = FUN_180194bf8(param_1,*(undefined4 *)(lVar5 + 4),param_2[1],*(undefined4 *)(lVar3 + 4),
                          lVar5 + 8,param_2 + 2,lVar3 + 8);
    uVar6 = (uint)bVar4;
  }
  else {
    uVar6 = 2;
    bVar4 = 0;
  }
  uVar1 = *param_2;
  if (uVar6 != uVar1) {
    if (uVar1 == 1) {
      uVar7 = (ulonglong)*(uint *)(param_1 + 0x18);
      lVar5 = *(longlong *)(param_1 + 0x10);
      do {
        if ((int)uVar7 < 1) goto LAB_180194ea5;
        lVar3 = uVar7 * 8;
        uVar7 = uVar7 - 1;
      } while (*(uint *)(*(longlong *)(lVar5 + -8 + lVar3) + 4) != param_2[1]);
      *(undefined8 *)(lVar5 + uVar7 * 8) =
           *(undefined8 *)(lVar5 + -8 + (longlong)(int)*(uint *)(param_1 + 0x18) * 8);
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
    }
    else if (uVar1 == 2) {
      uVar7 = (ulonglong)*(uint *)(param_1 + 0x28);
      lVar5 = *(longlong *)(param_1 + 0x20);
      do {
        if ((int)uVar7 < 1) goto LAB_180194ea5;
        lVar3 = uVar7 * 8;
        uVar7 = uVar7 - 1;
      } while (*(uint *)(*(longlong *)(lVar5 + -8 + lVar3) + 4) != param_2[1]);
      *(undefined8 *)(lVar5 + uVar7 * 8) =
           *(undefined8 *)(lVar5 + -8 + (longlong)(int)*(uint *)(param_1 + 0x28) * 8);
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
    }
LAB_180194ea5:
    if ((0.0 < fVar8 & (bVar4 ^ 1)) == 0) {
      lVar5 = (ulonglong)(fVar8 <= 0.0) * 0x10;
      iVar2 = *(int *)(lVar5 + 0x18 + param_1);
      *(int *)(lVar5 + 0x18 + param_1) = iVar2 + 1;
      *(uint **)(*(longlong *)(lVar5 + 0x10 + param_1) + (longlong)iVar2 * 8) = param_2;
    }
    *param_2 = uVar6;
  }
  return;
}

