/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140047566 */

int FUN_140047566(longlong *param_1)

{
  ushort *puVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  byte bVar5;
  byte *pbVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  uint uVar16;
  ulonglong uVar17;
  byte *pbVar18;
  
  pbVar18 = (byte *)param_1[0x21];
  pbVar6 = (byte *)param_1[0x22];
  plVar7 = (longlong *)param_1[3];
  iVar10 = *(int *)(*param_1 + 0x10);
  uVar12 = 0;
  do {
    uVar17 = (ulonglong)uVar12;
    uVar12 = uVar12 + 1;
    iVar8 = FUN_14001c971(plVar7,uVar12);
    if (iVar8 != 0) {
      return iVar8;
    }
    if (pbVar6 < pbVar18 + 4) {
      return 0x15;
    }
    lVar11 = plVar7[0x14];
    lVar15 = uVar17 * 0x20;
    *(undefined8 *)(lVar11 + 8 + lVar15) = 0;
    bVar4 = *pbVar18;
    bVar5 = pbVar18[1];
    *(ushort *)(lVar11 + 4 + lVar15) = CONCAT11(bVar4,bVar5);
    uVar16 = (uint)(ushort)(*(ushort *)(pbVar18 + 2) << 8 | *(ushort *)(pbVar18 + 2) >> 8);
    *(uint *)(lVar11 + lVar15) = uVar16;
    if (iVar10 <= (int)uVar16) {
      return 0x15;
    }
    iVar8 = (bVar5 & 1) * 2;
    if ((bVar5 & 8) == 0) {
      if ((bVar5 & 0x40) == 0) {
        uVar16 = iVar8 + 2U | (ushort)(CONCAT11(bVar4,bVar5) >> 4) & 8;
      }
      else {
        uVar16 = iVar8 + 6;
      }
    }
    else {
      uVar16 = iVar8 + 4;
    }
    if (pbVar6 < pbVar18 + 4 + uVar16) {
      return 0x15;
    }
    lVar11 = lVar11 + lVar15;
    if ((bVar5 & 2) == 0) {
      if ((bVar5 & 1) == 0) {
        *(uint *)(lVar11 + 8) = (uint)pbVar18[4];
        uVar16 = (uint)pbVar18[5];
LAB_14004767a:
        pbVar18 = pbVar18 + 6;
      }
      else {
        *(uint *)(lVar11 + 8) =
             (uint)(ushort)(*(ushort *)(pbVar18 + 4) << 8 | *(ushort *)(pbVar18 + 4) >> 8);
        puVar1 = (ushort *)(pbVar18 + 6);
        pbVar18 = pbVar18 + 8;
        uVar16 = (uint)(ushort)(*puVar1 << 8 | *puVar1 >> 8);
      }
    }
    else {
      if ((bVar5 & 1) == 0) {
        *(int *)(lVar11 + 8) = (int)(char)pbVar18[4];
        uVar16 = (uint)(char)pbVar18[5];
        goto LAB_14004767a;
      }
      *(uint *)(lVar11 + 8) = (int)(short)((ushort)pbVar18[4] << 8) | (uint)pbVar18[5];
      pbVar2 = pbVar18 + 6;
      pbVar3 = pbVar18 + 7;
      pbVar18 = pbVar18 + 8;
      uVar16 = (int)(short)((ushort)*pbVar2 << 8) | (uint)*pbVar3;
    }
    *(uint *)(lVar11 + 0xc) = uVar16;
    if ((bVar5 & 8) == 0) {
      if ((bVar5 & 0x40) != 0) {
        iVar9 = ((int)(short)((ushort)*pbVar18 << 8) | (uint)pbVar18[1]) << 2;
        pbVar2 = pbVar18 + 2;
        pbVar3 = pbVar18 + 3;
        pbVar18 = pbVar18 + 4;
        iVar8 = ((int)(short)((ushort)*pbVar2 << 8) | (uint)*pbVar3) << 2;
        goto LAB_140047744;
      }
      if (-1 < (char)bVar5) {
        iVar9 = 0x10000;
        iVar8 = 0x10000;
        goto LAB_140047744;
      }
      iVar9 = ((int)(short)((ushort)*pbVar18 << 8) | (uint)pbVar18[1]) << 2;
      iVar14 = ((int)(short)((ushort)pbVar18[2] << 8) | (uint)pbVar18[3]) << 2;
      iVar13 = ((int)(short)((ushort)pbVar18[4] << 8) | (uint)pbVar18[5]) << 2;
      pbVar2 = pbVar18 + 6;
      pbVar3 = pbVar18 + 7;
      pbVar18 = pbVar18 + 8;
      iVar8 = ((int)(short)((ushort)*pbVar2 << 8) | (uint)*pbVar3) << 2;
    }
    else {
      bVar4 = *pbVar18;
      pbVar2 = pbVar18 + 1;
      pbVar18 = pbVar18 + 2;
      iVar9 = ((int)(short)((ushort)bVar4 << 8) | (uint)*pbVar2) << 2;
      iVar8 = iVar9;
LAB_140047744:
      iVar13 = 0;
      iVar14 = 0;
    }
    *(int *)(lVar11 + 0x10) = iVar9;
    *(int *)(lVar11 + 0x14) = iVar13;
    *(int *)(lVar11 + 0x18) = iVar14;
    *(int *)(lVar11 + 0x1c) = iVar8;
    if ((bVar5 & 0x20) == 0) {
      *(uint *)(plVar7 + 0x13) = uVar12;
      iVar10 = FUN_140020f72(param_1[5]);
      *(int *)(param_1 + 0x1c) = (iVar10 + (int)pbVar18) - (int)pbVar6;
      param_1[0x21] = (longlong)pbVar18;
      return 0;
    }
  } while( true );
}

