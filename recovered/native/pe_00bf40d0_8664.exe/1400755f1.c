/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400755f1 */

int FUN_1400755f1(longlong *param_1,uint param_2,undefined4 param_3,undefined4 param_4,uint param_5,
                 char param_6)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  ushort *puVar4;
  ushort uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  ushort *puVar12;
  longlong lVar13;
  uint uVar14;
  ushort *puVar15;
  uint *puVar16;
  ushort uVar17;
  longlong lVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  undefined1 auStackY_b8 [32];
  uint local_68;
  uint *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_b8;
  iVar11 = 8;
  if (100 < param_5) goto LAB_140075694;
  if ((int)param_1[6] != 0) {
    lVar9 = param_1[7];
    uVar8 = (ulonglong)*(uint *)((longlong)param_1 + 0x2c);
    lVar13 = lVar9 + uVar8;
    puVar4 = (ushort *)param_1[8];
    lVar18 = 0;
LAB_140075651:
    uVar3 = *(ushort *)(uVar8 + lVar9 + lVar18 * 8);
    uVar14 = (uint)(ushort)(uVar3 << 8 | uVar3 >> 8);
    iVar20 = param_2 - uVar14;
    if ((param_2 < uVar14) ||
       (uVar3 = *(ushort *)(uVar8 + lVar9 + 2 + lVar18 * 8),
       (ushort)(uVar3 << 8 | uVar3 >> 8) < param_2)) goto LAB_14007567c;
    uVar14 = *(uint *)(lVar13 + 4 + lVar18 * 8);
    uVar14 = uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 | uVar14 << 0x18;
    if ((uint)((int)puVar4 - (int)lVar13) < uVar14) goto LAB_140075694;
    uVar6 = (ulonglong)uVar14;
    puVar15 = (ushort *)(lVar13 + uVar6 + 8);
    if (puVar4 < puVar15) goto LAB_140075684;
    puVar12 = (ushort *)(lVar13 + uVar6);
    uVar3 = puVar12[1];
    uVar17 = *puVar12 << 8 | *puVar12 >> 8;
    uVar14 = *(uint *)(puVar12 + 2);
    switch(uVar17) {
    case 1:
      if (puVar4 < (ushort *)((longlong)puVar15 + (ulonglong)(uint)(iVar20 * 4) + 8))
      goto LAB_140075684;
      puVar16 = (uint *)((longlong)puVar15 + (ulonglong)(uint)(iVar20 * 4));
      uVar10 = *puVar16;
      uVar19 = puVar16[1];
      uVar22 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | uVar10 << 0x18;
      uVar10 = uVar19 >> 0x18 | (uVar19 & 0xff0000) >> 8 | (uVar19 & 0xff00) << 8 | uVar19 << 0x18;
      break;
    case 2:
      if (puVar12 + 10 <= puVar4) {
        local_50 = (uint *)(puVar12 + 6);
        uVar17 = puVar12[4];
        bVar1 = *(byte *)((longlong)puVar12 + 9);
        uVar5 = puVar12[5];
        bVar2 = *(byte *)((longlong)puVar12 + 0xb);
        uVar7 = FUN_140075bae((longlong)param_1,(ulonglong *)&local_50,(byte *)puVar4,'\x01');
        if ((int)uVar7 == 0) {
          iVar11 = ((uint)(byte)uVar5 << 8 | (uint)bVar1 << 0x10 | (uint)(byte)uVar17 << 0x18) +
                   (uint)bVar2;
          uVar22 = iVar20 * iVar11;
          uVar10 = iVar11 + uVar22;
          goto LAB_14007594d;
        }
      }
      goto LAB_140075684;
    case 3:
      if (puVar4 < (ushort *)((longlong)puVar15 + (ulonglong)(uint)(iVar20 * 2) + 4))
      goto LAB_140075684;
      puVar15 = (ushort *)((longlong)puVar15 + (ulonglong)(uint)(iVar20 * 2));
      uVar17 = *puVar15;
      uVar5 = puVar15[1];
      uVar22 = (uint)(ushort)(uVar17 << 8 | uVar17 >> 8);
      uVar10 = (uint)(ushort)(uVar5 << 8 | uVar5 >> 8);
      break;
    case 4:
      if ((puVar12 + 6 <= puVar4) && (puVar12 + 8 <= puVar4)) {
        uVar22 = (uint)(byte)puVar12[4] * 0x1000000;
        uVar19 = (uint)*(byte *)((longlong)puVar12 + 9) * 0x10000;
        uVar10 = (uint)(byte)puVar12[5] * 0x100;
        if (((uint)*(byte *)((longlong)puVar12 + 0xb) + (uVar19 | uVar22 | uVar10)) - 1 <
            (int)((ulonglong)((longlong)puVar4 - (longlong)(puVar12 + 6)) >> 2) - 1U) {
          lVar13 = 0;
          goto LAB_140075883;
        }
      }
      goto LAB_140075684;
    case 5:
      goto switchD_14007571c_caseD_5;
    default:
      if (uVar17 == 0x13) {
switchD_14007571c_caseD_5:
        if (puVar12 + 0xc <= puVar4) {
          local_50 = (uint *)(puVar12 + 6);
          uVar17 = puVar12[4];
          bVar1 = *(byte *)((longlong)puVar12 + 9);
          uVar5 = puVar12[5];
          bVar2 = *(byte *)((longlong)puVar12 + 0xb);
          uVar7 = FUN_140075bae((longlong)param_1,(ulonglong *)&local_50,(byte *)puVar4,'\x01');
          if ((int)uVar7 == 0) {
            uVar10 = *local_50;
            uVar10 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
                     uVar10 << 0x18;
            if (uVar10 - 1 < (uint)((ulonglong)((longlong)puVar4 - (longlong)(local_50 + 1)) >> 1))
            {
              iVar20 = (uint)bVar1 * 0x10000 + (uint)(byte)uVar17 * 0x1000000;
              iVar11 = (uint)(byte)uVar5 * 0x100;
              iVar21 = 0;
              lVar13 = 0;
              goto LAB_1400757e9;
            }
          }
        }
      }
      goto LAB_140075684;
    }
    if (uVar22 != uVar10) goto LAB_14007594d;
  }
  goto LAB_140075684;
LAB_140075883:
  uVar17 = *(ushort *)(lVar9 + uVar8 + uVar6 + 0xc + lVar13 * 4);
  if ((ushort)(uVar17 << 8 | uVar17 >> 8) != param_2) goto code_r0x00014007589b;
  lVar9 = uVar8 + uVar6 + lVar9;
  uVar17 = *(ushort *)(lVar9 + 0xe + lVar13 * 4);
  uVar5 = *(ushort *)(lVar9 + 0x12 + lVar13 * 4);
  uVar22 = (uint)(ushort)(uVar17 << 8 | uVar17 >> 8);
  uVar10 = (uint)(ushort)(uVar5 << 8 | uVar5 >> 8);
LAB_14007594d:
  if (uVar22 <= uVar10) {
    iVar11 = FUN_140075c31(param_1,(uint)(ushort)(uVar3 << 8 | uVar3 >> 8),
                           uVar22 + (uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 |
                                     (uVar14 & 0xff00) << 8 | uVar14 << 0x18),uVar10 - uVar22,
                           param_3,param_4,param_5,param_6);
    goto LAB_140075694;
  }
  goto LAB_140075684;
code_r0x00014007589b:
  lVar13 = lVar13 + 1;
  if (uVar10 + *(byte *)((longlong)puVar12 + 0xb) + uVar22 + uVar19 == (int)lVar13)
  goto LAB_140075684;
  goto LAB_140075883;
LAB_14007567c:
  lVar18 = lVar18 + 1;
  if ((int)param_1[6] == (int)lVar18) goto LAB_140075684;
  goto LAB_140075651;
  while( true ) {
    iVar21 = iVar21 - ((uint)bVar2 + iVar11 + iVar20);
    lVar13 = lVar13 + 1;
    if (uVar10 == (uint)lVar13) break;
LAB_1400757e9:
    uVar17 = *(ushort *)((longlong)(local_50 + 1) + lVar13 * 2);
    if ((ushort)(uVar17 << 8 | uVar17 >> 8) == param_2) {
      local_68 = (uint)bVar2;
      uVar10 = (iVar20 + iVar11 + local_68) - iVar21;
      uVar22 = -iVar21;
      goto LAB_14007594d;
    }
  }
LAB_140075684:
  iVar11 = 0x15;
  if (param_5 == 0) {
    iVar11 = 0x9d;
  }
LAB_140075694:
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStackY_b8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStackY_b8);
  }
  return iVar11;
}

