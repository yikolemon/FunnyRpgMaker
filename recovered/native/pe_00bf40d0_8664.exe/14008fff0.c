/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14008fff0 */

undefined8 FUN_14008fff0(ulonglong *param_1)

{
  byte bVar1;
  double *pdVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  ushort uVar6;
  int iVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  char *pcVar10;
  undefined1 (*pauVar11) [16];
  byte *pbVar12;
  longlong lVar13;
  byte bVar14;
  uint uVar15;
  byte *pbVar16;
  ulonglong uVar17;
  double local_res8;
  
  *(uint *)(param_1 + 5) = (uint)param_1[5] | 0x10;
  iVar7 = (int)param_1[6];
  if (iVar7 < 0) {
    iVar7 = (-(uint)((*(short *)((longlong)param_1 + 0x3a) - 0x41U & 0xffdf) != 0) & 0xfffffff9) +
            0xd;
    *(int *)(param_1 + 6) = iVar7;
  }
  else if ((iVar7 == 0) &&
          ((*(short *)((longlong)param_1 + 0x3a) == 0x67 ||
           (*(short *)((longlong)param_1 + 0x3a) == 0x47)))) {
    *(undefined4 *)(param_1 + 6) = 1;
    iVar7 = 1;
  }
  bVar4 = FUN_1400904d4((longlong)(param_1 + 10),(longlong)(iVar7 + 0x15d),param_1[1]);
  uVar17 = 0x200;
  if (bVar4) {
    uVar15 = (uint)param_1[6];
  }
  else {
    if (param_1[0x8b] == 0) {
      iVar7 = 0x200;
    }
    else {
      iVar7 = (int)(param_1[0x8a] >> 1);
    }
    uVar15 = iVar7 - 0x15d;
    *(uint *)(param_1 + 6) = uVar15;
  }
  puVar8 = (ulonglong *)param_1[0x8b];
  if ((ulonglong *)param_1[0x8b] == (ulonglong *)0x0) {
    puVar8 = param_1 + 10;
  }
  param_1[8] = (ulonglong)puVar8;
  pdVar2 = (double *)param_1[3];
  param_1[3] = (ulonglong)(pdVar2 + 1);
  pauVar11 = (undefined1 (*) [16])param_1[0x8b];
  local_res8 = *pdVar2;
  if (pauVar11 == (undefined1 (*) [16])0x0) {
    puVar8 = param_1 + 0x4a;
    pauVar11 = (undefined1 (*) [16])(param_1 + 10);
    uVar9 = 0x200;
  }
  else {
    puVar8 = (ulonglong *)(*pauVar11 + (param_1[0x8a] >> 1));
    uVar9 = param_1[0x8a] >> 1;
    uVar17 = param_1[0x8a] >> 1;
  }
  FUN_1400a44c0(&local_res8,pauVar11,uVar17,(char *)puVar8,uVar9,
                (int)*(char *)((longlong)param_1 + 0x3a),uVar15,*param_1,1,(longlong *)param_1[1]);
  if ((((uint)param_1[5] >> 5 & 1) != 0) && ((int)param_1[6] == 0)) {
    plVar3 = (longlong *)param_1[1];
    if ((char)plVar3[5] == '\0') {
      FUN_14008f0b0(plVar3);
    }
    pbVar16 = (byte *)param_1[8];
    plVar3 = (longlong *)plVar3[3];
    uVar17 = (ulonglong)*pbVar16;
    if (*(char *)(uVar17 + plVar3[0x22]) != 'e') {
      do {
        pbVar16 = pbVar16 + 1;
        uVar17 = (ulonglong)*pbVar16;
      } while ((*(byte *)(*plVar3 + uVar17 * 2) & 4) != 0);
    }
    bVar4 = *(char *)(uVar17 + plVar3[0x22]) == 'x';
    if (bVar4) {
      uVar17 = (ulonglong)pbVar16[2];
    }
    pbVar12 = pbVar16 + 2;
    if (!bVar4) {
      pbVar12 = pbVar16;
    }
    *pbVar12 = **(byte **)plVar3[0x1f];
    do {
      pbVar12 = pbVar12 + 1;
      bVar1 = *pbVar12;
      bVar14 = (byte)uVar17;
      *pbVar12 = bVar14;
      uVar17 = (ulonglong)bVar1;
    } while (bVar14 != 0);
  }
  uVar6 = *(short *)((longlong)param_1 + 0x3a) - 0x47;
  uVar17 = (ulonglong)uVar6;
  if (((uVar6 & 0xffdf) == 0) &&
     (uVar15 = (uint)param_1[5] >> 5, uVar17 = (ulonglong)uVar15, (uVar15 & 1) == 0)) {
    plVar3 = (longlong *)param_1[1];
    if ((char)plVar3[5] == '\0') {
      FUN_14008f0b0(plVar3);
    }
    uVar17 = FUN_14008f128((char *)param_1[8],plVar3 + 3);
  }
  pcVar10 = (char *)param_1[8];
  cVar5 = *pcVar10;
  if (cVar5 == '-') {
    *(uint *)(param_1 + 5) = (uint)param_1[5] | 0x40;
    pcVar10 = pcVar10 + 1;
    param_1[8] = (ulonglong)pcVar10;
    cVar5 = *pcVar10;
  }
  if (((byte)(cVar5 + 0xb7U) < 0x26) &&
     ((0x2100000021U >> ((ulonglong)(byte)(cVar5 + 0xb7U) & 0x3f) & 1) != 0)) {
    *(uint *)(param_1 + 5) = (uint)param_1[5] & 0xfffffff7;
    *(undefined2 *)((longlong)param_1 + 0x3a) = 0x73;
  }
  lVar13 = -1;
  do {
    lVar13 = lVar13 + 1;
  } while (pcVar10[lVar13] != '\0');
  *(int *)(param_1 + 9) = (int)lVar13;
  return CONCAT71((int7)(uVar17 >> 8),1);
}

