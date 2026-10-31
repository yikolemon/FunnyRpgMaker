/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14017769d */

undefined8
FUN_14017769d(longlong param_1,uint param_2,undefined4 param_3,undefined4 param_4,uint param_5,
             undefined1 param_6)

{
  byte bVar1;
  ushort uVar2;
  ushort *puVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ushort *puVar8;
  longlong lVar9;
  uint uVar10;
  ushort *puVar11;
  undefined7 uVar13;
  uint *puVar12;
  ushort uVar14;
  longlong lVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  uint local_88;
  undefined1 local_80;
  ushort local_6a;
  ulonglong local_68;
  ulonglong local_60;
  uint local_54;
  uint *local_50;
  ulonglong local_48;
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_b8;
  uVar4 = 8;
  if (100 < param_5) goto LAB_140177740;
  if (*(int *)(param_1 + 0x30) != 0) {
    lVar7 = *(longlong *)(param_1 + 0x38);
    uVar6 = (ulonglong)*(uint *)(param_1 + 0x2c);
    lVar9 = lVar7 + uVar6;
    puVar3 = *(ushort **)(param_1 + 0x40);
    lVar15 = 0;
LAB_1401776fd:
    uVar14 = *(ushort *)(uVar6 + lVar7 + lVar15 * 8);
    uVar10 = (uint)(ushort)(uVar14 << 8 | uVar14 >> 8);
    iVar18 = param_2 - uVar10;
    if ((param_2 < uVar10) ||
       (uVar14 = *(ushort *)(uVar6 + lVar7 + 2 + lVar15 * 8),
       (ushort)(uVar14 << 8 | uVar14 >> 8) < param_2)) goto LAB_140177728;
    uVar10 = *(uint *)(lVar9 + 4 + lVar15 * 8);
    uVar10 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | uVar10 << 0x18;
    if ((uint)((int)puVar3 - (int)lVar9) < uVar10) goto LAB_140177740;
    uVar5 = (ulonglong)uVar10;
    puVar11 = (ushort *)(lVar9 + uVar5 + 8);
    if (puVar3 < puVar11) goto LAB_140177730;
    puVar8 = (ushort *)(lVar9 + uVar5);
    local_6a = puVar8[1];
    uVar14 = *puVar8 << 8 | *puVar8 >> 8;
    local_54 = *(uint *)(puVar8 + 2);
    uVar13 = (undefined7)((ulonglong)puVar11 >> 8);
    switch(uVar14) {
    case 1:
      if (puVar3 < (ushort *)((longlong)puVar11 + (ulonglong)(uint)(iVar18 * 4) + 8))
      goto LAB_140177730;
      puVar12 = (uint *)((longlong)puVar11 + (ulonglong)(uint)(iVar18 * 4));
      uVar10 = *puVar12;
      uVar16 = puVar12[1];
      uVar20 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | uVar10 << 0x18;
      uVar10 = uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 | uVar16 << 0x18;
      break;
    case 2:
      if (puVar8 + 10 <= puVar3) {
        local_50 = (uint *)(puVar8 + 6);
        local_60 = CONCAT44(local_60._4_4_,(uint)(byte)puVar8[4]);
        bVar1 = *(byte *)((longlong)puVar8 + 9);
        uVar14 = puVar8[5];
        local_68 = CONCAT44(local_68._4_4_,(uint)*(byte *)((longlong)puVar8 + 0xb));
        iVar17 = FUN_140177c5a(param_1,&local_50,puVar3,CONCAT71(uVar13,1));
        if (iVar17 == 0) {
          iVar17 = ((uint)(byte)uVar14 << 8 | (uint)bVar1 << 0x10 | (int)local_60 << 0x18) +
                   (int)local_68;
          uVar20 = iVar18 * iVar17;
          uVar10 = iVar17 + uVar20;
          goto LAB_1401779f9;
        }
      }
      goto LAB_140177730;
    case 3:
      if (puVar3 < (ushort *)((longlong)puVar11 + (ulonglong)(uint)(iVar18 * 2) + 4))
      goto LAB_140177730;
      puVar11 = (ushort *)((longlong)puVar11 + (ulonglong)(uint)(iVar18 * 2));
      uVar14 = *puVar11;
      uVar2 = puVar11[1];
      uVar20 = (uint)(ushort)(uVar14 << 8 | uVar14 >> 8);
      uVar10 = (uint)(ushort)(uVar2 << 8 | uVar2 >> 8);
      break;
    case 4:
      if ((puVar8 + 6 <= puVar3) && (puVar8 + 8 <= puVar3)) {
        uVar20 = (uint)(byte)puVar8[4] * 0x1000000;
        uVar16 = (uint)*(byte *)((longlong)puVar8 + 9) * 0x10000;
        uVar10 = (uint)(byte)puVar8[5] * 0x100;
        if (((uint)*(byte *)((longlong)puVar8 + 0xb) + (uVar16 | uVar20 | uVar10)) - 1 <
            (int)((ulonglong)((longlong)puVar3 - (longlong)(puVar8 + 6)) >> 2) - 1U) {
          lVar9 = 0;
          goto LAB_14017792f;
        }
      }
      goto LAB_140177730;
    case 5:
      goto switchD_1401777c8_caseD_5;
    default:
      if (uVar14 == 0x13) {
switchD_1401777c8_caseD_5:
        if (puVar8 + 0xc <= puVar3) {
          local_50 = (uint *)(puVar8 + 6);
          uVar14 = puVar8[4];
          bVar1 = *(byte *)((longlong)puVar8 + 9);
          local_60 = (ulonglong)(byte)puVar8[5];
          local_68 = (ulonglong)*(byte *)((longlong)puVar8 + 0xb);
          iVar18 = FUN_140177c5a(param_1,&local_50,puVar3,CONCAT71(uVar13,1));
          if (iVar18 == 0) {
            uVar10 = *local_50;
            uVar10 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
                     uVar10 << 0x18;
            if (uVar10 - 1 < (uint)((ulonglong)((longlong)puVar3 - (longlong)(local_50 + 1)) >> 1))
            {
              iVar17 = (uint)bVar1 * 0x10000 + (uint)(byte)uVar14 * 0x1000000;
              iVar18 = (int)local_60 * 0x100;
              iVar19 = 0;
              lVar9 = 0;
              goto LAB_140177895;
            }
          }
        }
      }
      goto LAB_140177730;
    }
    if (uVar20 != uVar10) goto LAB_1401779f9;
  }
  goto LAB_140177730;
LAB_14017792f:
  uVar14 = *(ushort *)(lVar7 + uVar6 + uVar5 + 0xc + lVar9 * 4);
  if ((ushort)(uVar14 << 8 | uVar14 >> 8) != param_2) goto code_r0x000140177947;
  lVar7 = uVar6 + uVar5 + lVar7;
  uVar14 = *(ushort *)(lVar7 + 0xe + lVar9 * 4);
  uVar2 = *(ushort *)(lVar7 + 0x12 + lVar9 * 4);
  uVar20 = (uint)(ushort)(uVar14 << 8 | uVar14 >> 8);
  uVar10 = (uint)(ushort)(uVar2 << 8 | uVar2 >> 8);
LAB_1401779f9:
  if (uVar20 <= uVar10) {
    local_80 = param_6;
    local_88 = param_5;
    local_98 = param_3;
    local_90 = param_4;
    uVar4 = FUN_140177cdd(param_1,local_6a << 8 | local_6a >> 8,
                          uVar20 + (local_54 >> 0x18 | (local_54 & 0xff0000) >> 8 |
                                    (local_54 & 0xff00) << 8 | local_54 << 0x18),uVar10 - uVar20);
    goto LAB_140177740;
  }
  goto LAB_140177730;
code_r0x000140177947:
  lVar9 = lVar9 + 1;
  if (uVar10 + *(byte *)((longlong)puVar8 + 0xb) + uVar20 + uVar16 == (int)lVar9)
  goto LAB_140177730;
  goto LAB_14017792f;
LAB_140177728:
  lVar15 = lVar15 + 1;
  if (*(int *)(param_1 + 0x30) == (int)lVar15) goto LAB_140177730;
  goto LAB_1401776fd;
  while( true ) {
    iVar19 = iVar19 - ((int)local_68 + iVar18 + iVar17);
    lVar9 = lVar9 + 1;
    if (uVar10 == (uint)lVar9) break;
LAB_140177895:
    uVar14 = *(ushort *)((longlong)(local_50 + 1) + lVar9 * 2);
    if ((ushort)(uVar14 << 8 | uVar14 >> 8) == param_2) {
      uVar10 = (iVar17 + iVar18 + (int)local_68) - iVar19;
      uVar20 = -iVar19;
      goto LAB_1401779f9;
    }
  }
LAB_140177730:
  uVar4 = 0x15;
  if (param_5 == 0) {
    uVar4 = 0x9d;
  }
LAB_140177740:
  if (DAT_140f17b40 != (local_48 ^ (ulonglong)auStack_b8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_48 ^ (ulonglong)auStack_b8);
  }
  return uVar4;
}

