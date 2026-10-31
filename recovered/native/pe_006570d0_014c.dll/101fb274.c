/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101fb274 */

int FUN_101fb274(int param_1,int param_2,int param_3,int *param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  byte *local_28;
  
  *param_4 = 0;
  param_4[1] = 0;
  if ((*(uint *)(param_1 + 0x198) <= param_3 - 1U || *(uint *)(param_1 + 0x198) <= param_2 - 1U) ||
     (piVar10 = *(int **)(param_1 + 0x1a8), piVar10 == (int *)0x0)) {
    return 0;
  }
  iVar3 = *(int *)(param_1 + 0x68);
  uVar9 = *(int *)(*(int *)(param_1 + 0x1a0) + (param_2 - 1U) * 0x10) << 0x10 |
          (uint)*(ushort *)(*(int *)(param_1 + 0x1a0) + (param_3 - 1U) * 0x10);
  while ((uVar9 < (uint)piVar10[4] || ((uint)piVar10[5] < uVar9))) {
    piVar10 = (int *)*piVar10;
    if (piVar10 == (int *)0x0) {
      return 0;
    }
  }
  iVar7 = FUN_101c461e(iVar3,piVar10[3]);
  if (iVar7 != 0) {
    return iVar7;
  }
  iVar7 = FUN_101c4b69(iVar3,(uint)*(byte *)(piVar10 + 1) * piVar10[2]);
  if (iVar7 != 0) {
    return iVar7;
  }
  bVar1 = *(byte *)(piVar10 + 1);
  iVar7 = 0x1f;
  if (bVar1 != 0) {
    for (; bVar1 >> iVar7 == 0; iVar7 = iVar7 + -1) {
    }
  }
  uVar8 = piVar10[2];
  uVar11 = uVar8 << ((byte)iVar7 & 0x1f);
  bVar2 = *(byte *)((int)piVar10 + 5);
  pbVar4 = *(byte **)(iVar3 + 0x20);
  iVar7 = (-1 << ((byte)iVar7 & 0x1f)) + (uint)bVar1;
  if (iVar7 == 0) {
joined_r0x101fb3cf:
    while (pbVar6 = pbVar4, uVar8 < uVar11) {
      uVar11 = uVar11 >> 1;
      pbVar4 = pbVar6 + uVar11;
      if ((bVar2 & 1) == 0) {
        local_28 = pbVar4 + 2;
        uVar12 = (uint)pbVar6[uVar11] << 0x10 | (uint)pbVar6[uVar11 + 1];
      }
      else {
        local_28 = pbVar4 + 4;
        uVar12 = (uint)pbVar4[3] |
                 (uint)pbVar4[2] << 8 |
                 (uint)pbVar6[uVar11 + 1] << 0x10 | (uint)pbVar6[uVar11] << 0x18;
      }
      if (uVar12 == uVar9) goto LAB_101fb47e;
      if (uVar9 <= uVar12) {
        pbVar4 = pbVar6;
      }
    }
    if ((bVar2 & 1) == 0) {
      local_28 = pbVar6 + 2;
      uVar8 = (uint)*pbVar6 << 0x10 | (uint)pbVar6[1];
    }
    else {
      local_28 = pbVar6 + 4;
      uVar8 = (uint)pbVar6[3] |
              (uint)pbVar6[2] << 8 | (uint)pbVar6[1] << 0x10 | (uint)*pbVar6 << 0x18;
    }
    if (uVar8 != uVar9) goto LAB_101fb4aa;
  }
  else {
    iVar7 = iVar7 * uVar8;
    if ((bVar2 & 1) == 0) {
      iVar5 = iVar7 + 2;
      uVar12 = (uint)pbVar4[iVar7] << 0x10 | (uint)pbVar4[iVar7 + 1];
    }
    else {
      iVar5 = iVar7 + 4;
      uVar12 = (uint)pbVar4[iVar7 + 3] |
               (uint)pbVar4[iVar7 + 2] << 8 |
               (uint)pbVar4[iVar7 + 1] << 0x10 | (uint)pbVar4[iVar7] << 0x18;
    }
    local_28 = pbVar4 + iVar5;
    if (uVar12 != uVar9) {
      if (uVar12 < uVar9) {
        pbVar4 = local_28 + (bVar2 >> 1 & 1) + 1;
      }
      goto joined_r0x101fb3cf;
    }
  }
LAB_101fb47e:
  uVar9 = (uint)*local_28;
  if ((bVar2 >> 1 & 1) != 0) {
    uVar9 = (int)(short)((ushort)*local_28 << 8) | (uint)local_28[1];
  }
  *param_4 = (int)*(short *)((int)piVar10 + 6) + uVar9;
LAB_101fb4aa:
  FUN_101c4c66(iVar3);
  return 0;
}

