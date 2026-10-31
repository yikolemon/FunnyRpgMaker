/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18020880d */

int FUN_18020880d(longlong param_1,int param_2,int param_3,int *param_4)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar10;
  ulonglong uVar11;
  byte *pbVar12;
  uint uVar13;
  byte *pbVar14;
  longlong *plVar15;
  ulonglong uVar9;
  
  param_4[0] = 0;
  param_4[1] = 0;
  if ((*(uint *)(param_1 + 0x218) <= param_3 - 1U || *(uint *)(param_1 + 0x218) <= param_2 - 1U) ||
     (plVar15 = *(longlong **)(param_1 + 0x238), plVar15 == (longlong *)0x0)) {
    return 0;
  }
  lVar3 = *(longlong *)(param_1 + 0xa0);
  uVar7 = *(int *)(*(longlong *)(param_1 + 0x228) + (ulonglong)(param_2 - 1U) * 0x10) << 0x10 |
          (uint)*(ushort *)(*(longlong *)(param_1 + 0x228) + (ulonglong)(param_3 - 1U) * 0x10);
  while ((uVar7 < *(uint *)(plVar15 + 3) || (*(uint *)((longlong)plVar15 + 0x1c) < uVar7))) {
    plVar15 = (longlong *)*plVar15;
    if (plVar15 == (longlong *)0x0) {
      return 0;
    }
  }
  iVar5 = FUN_1801ce63e(lVar3,(int)plVar15[2]);
  if (iVar5 != 0) {
    return iVar5;
  }
  iVar5 = FUN_1801cec60(lVar3,(uint)*(byte *)(plVar15 + 1) * *(int *)((longlong)plVar15 + 0xc));
  if (iVar5 != 0) {
    return iVar5;
  }
  bVar1 = *(byte *)(plVar15 + 1);
  iVar5 = 0x1f;
  if (bVar1 != 0) {
    for (; bVar1 >> iVar5 == 0; iVar5 = iVar5 + -1) {
    }
  }
  uVar6 = *(uint *)((longlong)plVar15 + 0xc);
  uVar8 = uVar6 << ((byte)iVar5 & 0x1f);
  uVar9 = (ulonglong)uVar8;
  bVar2 = *(byte *)((longlong)plVar15 + 9);
  pbVar10 = *(byte **)(lVar3 + 0x38);
  iVar5 = (-1 << ((byte)iVar5 & 0x1f)) + (uint)bVar1;
  if (iVar5 == 0) {
joined_r0x000180208960:
    while (uVar6 < uVar8) {
      uVar9 = uVar9 >> 1;
      pbVar14 = pbVar10 + uVar9;
      if ((bVar2 & 1) == 0) {
        pbVar12 = pbVar14 + 2;
        uVar8 = (uint)pbVar10[uVar9] << 0x10 | (uint)pbVar10[uVar9 + 1];
      }
      else {
        pbVar12 = pbVar14 + 4;
        uVar8 = (uint)pbVar14[3] |
                (uint)pbVar14[2] << 8 |
                (uint)pbVar10[uVar9 + 1] << 0x10 | (uint)pbVar10[uVar9] << 0x18;
      }
      if (uVar8 == uVar7) goto LAB_180208a01;
      if (uVar7 <= uVar8) {
        pbVar14 = pbVar10;
      }
      pbVar10 = pbVar14;
      uVar8 = (uint)uVar9;
    }
    if ((bVar2 & 1) == 0) {
      pbVar12 = pbVar10 + 2;
      uVar6 = (uint)*pbVar10 << 0x10 | (uint)pbVar10[1];
    }
    else {
      pbVar12 = pbVar10 + 4;
      uVar6 = (uint)pbVar10[3] |
              (uint)pbVar10[2] << 8 | (uint)pbVar10[1] << 0x10 | (uint)*pbVar10 << 0x18;
    }
    if (uVar6 != uVar7) goto LAB_180208a25;
  }
  else {
    uVar11 = (ulonglong)(iVar5 * uVar6);
    if ((bVar2 & 1) == 0) {
      lVar4 = uVar11 + 2;
      uVar13 = (uint)pbVar10[uVar11] << 0x10 | (uint)pbVar10[uVar11 + 1];
    }
    else {
      lVar4 = uVar11 + 4;
      uVar13 = (uint)pbVar10[uVar11 + 3] |
               (uint)pbVar10[uVar11 + 2] << 8 |
               (uint)pbVar10[uVar11 + 1] << 0x10 | (uint)pbVar10[uVar11] << 0x18;
    }
    pbVar12 = pbVar10 + lVar4;
    if (uVar13 != uVar7) {
      if (uVar13 < uVar7) {
        pbVar10 = pbVar12 + (ulonglong)(bVar2 >> 1 & 1) + 1;
      }
      goto joined_r0x000180208960;
    }
  }
LAB_180208a01:
  uVar7 = (uint)*pbVar12;
  if ((bVar2 >> 1 & 1) != 0) {
    uVar7 = (int)(short)((ushort)*pbVar12 << 8) | (uint)pbVar12[1];
  }
  *param_4 = (int)*(short *)((longlong)plVar15 + 10) + uVar7;
LAB_180208a25:
  FUN_1801ced84(lVar3);
  return 0;
}

