/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140055e49 */

int FUN_140055e49(longlong param_1,int param_2,int param_3,int *param_4)

{
  byte bVar1;
  byte bVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar11;
  ulonglong uVar12;
  byte *pbVar13;
  uint uVar14;
  byte *pbVar15;
  longlong *plVar16;
  ulonglong uVar10;
  
  param_4[0] = 0;
  param_4[1] = 0;
  if ((*(uint *)(param_1 + 0x218) <= param_3 - 1U || *(uint *)(param_1 + 0x218) <= param_2 - 1U) ||
     (plVar16 = *(longlong **)(param_1 + 0x238), plVar16 == (longlong *)0x0)) {
    return 0;
  }
  plVar3 = *(longlong **)(param_1 + 0xa0);
  uVar8 = *(int *)(*(longlong *)(param_1 + 0x228) + (ulonglong)(param_2 - 1U) * 0x10) << 0x10 |
          (uint)*(ushort *)(*(longlong *)(param_1 + 0x228) + (ulonglong)(param_3 - 1U) * 0x10);
  while ((uVar8 < *(uint *)(plVar16 + 3) || (*(uint *)((longlong)plVar16 + 0x1c) < uVar8))) {
    plVar16 = (longlong *)*plVar16;
    if (plVar16 == (longlong *)0x0) {
      return 0;
    }
  }
  uVar6 = FUN_140020a41((longlong)plVar3,*(uint *)(plVar16 + 2));
  if ((int)uVar6 != 0) {
    return (int)uVar6;
  }
  iVar5 = FUN_140021063(plVar3,(uint)*(byte *)(plVar16 + 1) * *(int *)((longlong)plVar16 + 0xc));
  if (iVar5 != 0) {
    return iVar5;
  }
  bVar1 = *(byte *)(plVar16 + 1);
  iVar5 = 0x1f;
  if (bVar1 != 0) {
    for (; bVar1 >> iVar5 == 0; iVar5 = iVar5 + -1) {
    }
  }
  uVar7 = *(uint *)((longlong)plVar16 + 0xc);
  uVar9 = uVar7 << ((byte)iVar5 & 0x1f);
  uVar10 = (ulonglong)uVar9;
  bVar2 = *(byte *)((longlong)plVar16 + 9);
  pbVar11 = (byte *)plVar3[7];
  iVar5 = (-1 << ((byte)iVar5 & 0x1f)) + (uint)bVar1;
  if (iVar5 == 0) {
joined_r0x000140055f9c:
    while (uVar7 < uVar9) {
      uVar10 = uVar10 >> 1;
      pbVar15 = pbVar11 + uVar10;
      if ((bVar2 & 1) == 0) {
        pbVar13 = pbVar15 + 2;
        uVar9 = (uint)pbVar11[uVar10] << 0x10 | (uint)pbVar11[uVar10 + 1];
      }
      else {
        pbVar13 = pbVar15 + 4;
        uVar9 = (uint)pbVar15[3] |
                (uint)pbVar15[2] << 8 |
                (uint)pbVar11[uVar10 + 1] << 0x10 | (uint)pbVar11[uVar10] << 0x18;
      }
      if (uVar9 == uVar8) goto LAB_14005603d;
      if (uVar8 <= uVar9) {
        pbVar15 = pbVar11;
      }
      pbVar11 = pbVar15;
      uVar9 = (uint)uVar10;
    }
    if ((bVar2 & 1) == 0) {
      pbVar13 = pbVar11 + 2;
      uVar7 = (uint)*pbVar11 << 0x10 | (uint)pbVar11[1];
    }
    else {
      pbVar13 = pbVar11 + 4;
      uVar7 = (uint)pbVar11[3] |
              (uint)pbVar11[2] << 8 | (uint)pbVar11[1] << 0x10 | (uint)*pbVar11 << 0x18;
    }
    if (uVar7 != uVar8) goto LAB_140056061;
  }
  else {
    uVar12 = (ulonglong)(iVar5 * uVar7);
    if ((bVar2 & 1) == 0) {
      lVar4 = uVar12 + 2;
      uVar14 = (uint)pbVar11[uVar12] << 0x10 | (uint)pbVar11[uVar12 + 1];
    }
    else {
      lVar4 = uVar12 + 4;
      uVar14 = (uint)pbVar11[uVar12 + 3] |
               (uint)pbVar11[uVar12 + 2] << 8 |
               (uint)pbVar11[uVar12 + 1] << 0x10 | (uint)pbVar11[uVar12] << 0x18;
    }
    pbVar13 = pbVar11 + lVar4;
    if (uVar14 != uVar8) {
      if (uVar14 < uVar8) {
        pbVar11 = pbVar13 + (ulonglong)(bVar2 >> 1 & 1) + 1;
      }
      goto joined_r0x000140055f9c;
    }
  }
LAB_14005603d:
  uVar8 = (uint)*pbVar13;
  if ((bVar2 >> 1 & 1) != 0) {
    uVar8 = (int)(short)((ushort)*pbVar13 << 8) | (uint)pbVar13[1];
  }
  *param_4 = (int)*(short *)((longlong)plVar16 + 10) + uVar8;
LAB_140056061:
  FUN_140021187(plVar3);
  return 0;
}

