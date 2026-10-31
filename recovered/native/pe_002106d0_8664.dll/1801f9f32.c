/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801f9f32 */

undefined8 FUN_1801f9f32(longlong *param_1)

{
  ushort *puVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  byte bVar5;
  byte *pbVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  uint uVar17;
  ulonglong uVar18;
  byte *pbVar19;
  
  pbVar19 = (byte *)param_1[0x21];
  pbVar6 = (byte *)param_1[0x22];
  lVar7 = param_1[3];
  iVar9 = *(int *)(*param_1 + 0x10);
  uVar12 = 0;
  do {
    uVar18 = (ulonglong)uVar12;
    uVar12 = uVar12 + 1;
    uVar10 = FUN_1801c9f99(lVar7,uVar12);
    if ((int)uVar10 != 0) {
      return uVar10;
    }
    if (pbVar6 < pbVar19 + 4) {
      return 0x15;
    }
    lVar11 = *(longlong *)(lVar7 + 0xa0);
    lVar16 = uVar18 * 0x20;
    *(undefined8 *)(lVar11 + 8 + lVar16) = 0;
    bVar4 = *pbVar19;
    bVar5 = pbVar19[1];
    *(ushort *)(lVar11 + 4 + lVar16) = CONCAT11(bVar4,bVar5);
    uVar17 = (uint)(ushort)(*(ushort *)(pbVar19 + 2) << 8 | *(ushort *)(pbVar19 + 2) >> 8);
    *(uint *)(lVar11 + lVar16) = uVar17;
    if (iVar9 <= (int)uVar17) {
      return 0x15;
    }
    iVar15 = (bVar5 & 1) * 2;
    if ((bVar5 & 8) == 0) {
      if ((bVar5 & 0x40) == 0) {
        uVar17 = iVar15 + 2U | (ushort)(CONCAT11(bVar4,bVar5) >> 4) & 8;
      }
      else {
        uVar17 = iVar15 + 6;
      }
    }
    else {
      uVar17 = iVar15 + 4;
    }
    if (pbVar6 < pbVar19 + 4 + uVar17) {
      return 0x15;
    }
    lVar11 = lVar11 + lVar16;
    if ((bVar5 & 2) == 0) {
      if ((bVar5 & 1) == 0) {
        *(uint *)(lVar11 + 8) = (uint)pbVar19[4];
        uVar17 = (uint)pbVar19[5];
LAB_1801fa046:
        pbVar19 = pbVar19 + 6;
      }
      else {
        *(uint *)(lVar11 + 8) =
             (uint)(ushort)(*(ushort *)(pbVar19 + 4) << 8 | *(ushort *)(pbVar19 + 4) >> 8);
        puVar1 = (ushort *)(pbVar19 + 6);
        pbVar19 = pbVar19 + 8;
        uVar17 = (uint)(ushort)(*puVar1 << 8 | *puVar1 >> 8);
      }
    }
    else {
      if ((bVar5 & 1) == 0) {
        *(int *)(lVar11 + 8) = (int)(char)pbVar19[4];
        uVar17 = (uint)(char)pbVar19[5];
        goto LAB_1801fa046;
      }
      *(uint *)(lVar11 + 8) = (int)(short)((ushort)pbVar19[4] << 8) | (uint)pbVar19[5];
      pbVar2 = pbVar19 + 6;
      pbVar3 = pbVar19 + 7;
      pbVar19 = pbVar19 + 8;
      uVar17 = (int)(short)((ushort)*pbVar2 << 8) | (uint)*pbVar3;
    }
    *(uint *)(lVar11 + 0xc) = uVar17;
    if ((bVar5 & 8) == 0) {
      if ((bVar5 & 0x40) != 0) {
        iVar8 = ((int)(short)((ushort)*pbVar19 << 8) | (uint)pbVar19[1]) << 2;
        pbVar2 = pbVar19 + 2;
        pbVar3 = pbVar19 + 3;
        pbVar19 = pbVar19 + 4;
        iVar15 = ((int)(short)((ushort)*pbVar2 << 8) | (uint)*pbVar3) << 2;
        goto LAB_1801fa110;
      }
      if (-1 < (char)bVar5) {
        iVar8 = 0x10000;
        iVar15 = 0x10000;
        goto LAB_1801fa110;
      }
      iVar8 = ((int)(short)((ushort)*pbVar19 << 8) | (uint)pbVar19[1]) << 2;
      iVar14 = ((int)(short)((ushort)pbVar19[2] << 8) | (uint)pbVar19[3]) << 2;
      iVar13 = ((int)(short)((ushort)pbVar19[4] << 8) | (uint)pbVar19[5]) << 2;
      pbVar2 = pbVar19 + 6;
      pbVar3 = pbVar19 + 7;
      pbVar19 = pbVar19 + 8;
      iVar15 = ((int)(short)((ushort)*pbVar2 << 8) | (uint)*pbVar3) << 2;
    }
    else {
      bVar4 = *pbVar19;
      pbVar2 = pbVar19 + 1;
      pbVar19 = pbVar19 + 2;
      iVar8 = ((int)(short)((ushort)bVar4 << 8) | (uint)*pbVar2) << 2;
      iVar15 = iVar8;
LAB_1801fa110:
      iVar13 = 0;
      iVar14 = 0;
    }
    *(int *)(lVar11 + 0x10) = iVar8;
    *(int *)(lVar11 + 0x14) = iVar13;
    *(int *)(lVar11 + 0x18) = iVar14;
    *(int *)(lVar11 + 0x1c) = iVar15;
    if ((bVar5 & 0x20) == 0) {
      *(uint *)(lVar7 + 0x98) = uVar12;
      iVar9 = FUN_1801ceb6f(param_1[5]);
      *(int *)(param_1 + 0x1c) = (iVar9 + (int)pbVar19) - (int)pbVar6;
      param_1[0x21] = (longlong)pbVar19;
      return 0;
    }
  } while( true );
}

