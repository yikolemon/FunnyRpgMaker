/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180226457 */

ulonglong FUN_180226457(longlong param_1,undefined4 param_2,longlong param_3,ulonglong param_4)

{
  uint *puVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  byte bVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  byte bVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  ulonglong uVar18;
  byte bVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  ulonglong uVar23;
  int iVar24;
  ulonglong uVar25;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  uint *local_90;
  uint local_80;
  uint local_7c;
  longlong local_78;
  ulonglong local_70;
  ulonglong local_68;
  longlong local_60;
  longlong local_58;
  uint local_4c;
  ulonglong local_48;
  
  local_68 = CONCAT44(local_68._4_4_,param_2);
  local_48 = DAT_180402640 ^ (ulonglong)auStack_b8;
  if (*(longlong *)(param_3 + 0x78) == 0) {
    *(undefined4 *)(param_3 + 0x90) = *(undefined4 *)(param_4 + 0x90);
    *(undefined4 *)(param_3 + 0x94) = *(undefined4 *)(param_4 + 0x94);
    iVar22 = *(int *)(param_4 + 0x6c);
    *(int *)(param_3 + 0x6c) = iVar22;
    *(undefined4 *)(param_3 + 0x68) = *(undefined4 *)(param_4 + 0x68);
    *(undefined1 *)(param_3 + 0x82) = 7;
    *(int *)(param_3 + 0x70) = iVar22 << 2;
    *(undefined2 *)(param_3 + 0x80) = 0x100;
    uVar8 = FUN_1801cab28(param_3);
    local_4c = (uint)uVar8;
    if (local_4c != 0) goto LAB_1802268c5;
  }
  else {
    iVar22 = *(int *)(param_3 + 0x90);
    uVar17 = *(uint *)(param_3 + 0x94);
    iVar20 = *(int *)(param_3 + 0x6c) + iVar22;
    iVar21 = *(int *)(param_4 + 0x90);
    uVar13 = *(uint *)(param_4 + 0x94);
    iVar15 = uVar17 - *(int *)(param_3 + 0x68);
    iVar10 = *(int *)(param_4 + 0x6c) + iVar21;
    iVar16 = uVar13 - *(int *)(param_4 + 0x68);
    iVar24 = iVar16;
    if (iVar15 < iVar16) {
      iVar24 = iVar15;
    }
    local_80 = uVar13;
    if ((int)uVar13 < (int)uVar17) {
      local_80 = uVar17;
    }
    iVar5 = iVar21;
    if (iVar22 < iVar21) {
      iVar5 = iVar22;
    }
    iVar6 = iVar10;
    if (iVar10 < iVar20) {
      iVar6 = iVar20;
    }
    if ((iVar20 < iVar10 || iVar21 < iVar22) || ((int)uVar17 < (int)uVar13 || iVar16 < iVar15)) {
      iVar24 = local_80 - iVar24;
      uVar17 = (iVar6 - iVar5) * 4;
      local_90 = &local_4c;
      local_98 = 0;
      lVar7 = FUN_1801c9c3f(*(undefined8 *)(param_1 + 0x98),uVar17,0);
      uVar8 = (ulonglong)local_4c;
      if (local_4c != 0) goto LAB_1802268c5;
      local_7c = uVar17;
      local_78 = lVar7;
      local_70 = param_4;
      local_60 = param_1;
      if (*(int *)(param_3 + 0x68) != 0) {
        lVar7 = lVar7 + (int)((local_80 - *(int *)(param_3 + 0x94)) * uVar17) +
                ((longlong)*(int *)(param_3 + 0x90) - (longlong)iVar5) * 4;
        lVar12 = *(longlong *)(param_3 + 0x78);
        uVar13 = 0;
        do {
          FUN_1802a82f0(lVar7,lVar12,*(int *)(param_3 + 0x6c) << 2);
          lVar12 = lVar12 + *(int *)(param_3 + 0x70);
          lVar7 = lVar7 + (ulonglong)uVar17;
          uVar13 = uVar13 + 1;
        } while (uVar13 < *(uint *)(param_3 + 0x68));
      }
      FUN_1801cab0c(param_3);
      *(uint *)(param_3 + 0x94) = local_80;
      *(int *)(param_3 + 0x90) = iVar5;
      *(int *)(param_3 + 0x6c) = iVar6 - iVar5;
      *(int *)(param_3 + 0x68) = iVar24;
      *(uint *)(param_3 + 0x70) = local_7c;
      puVar1 = (uint *)(*(longlong *)(param_3 + 0xf0) + 8);
      *puVar1 = *puVar1 | 1;
      *(undefined4 *)(param_3 + 0x60) = 0x62697473;
      param_4 = local_70;
      param_1 = local_60;
    }
  }
  if ((int)local_68 == 0xffff) {
    if (*(char *)(param_1 + 0x3a8) == '\0') {
      if (*(longlong *)(param_1 + 0x380) != 0) {
        bVar14 = 0xff;
        bVar9 = 0xff;
        uVar17 = 0xff;
        bVar19 = 0xff;
        if ((*(byte *)(*(longlong *)(param_1 + 0x380) + (ulonglong)*(ushort *)(param_1 + 0x398) * 2)
            & 2) != 0) goto LAB_1802266f4;
      }
      bVar14 = 0xff;
      bVar9 = 0;
      uVar17 = 0;
      bVar19 = 0;
    }
    else {
      bVar19 = *(byte *)(param_1 + 0x3a9);
      uVar17 = (uint)*(byte *)(param_1 + 0x3aa);
      bVar9 = *(byte *)(param_1 + 0x3ab);
      bVar14 = *(byte *)(param_1 + 0x3ac);
    }
  }
  else {
    lVar7 = *(longlong *)(param_1 + 0x3a0);
    uVar8 = local_68 & 0xffffffff;
    bVar19 = *(byte *)(lVar7 + uVar8 * 4);
    uVar17 = (uint)*(byte *)(lVar7 + 1 + uVar8 * 4);
    bVar9 = *(byte *)(lVar7 + 2 + uVar8 * 4);
    bVar14 = *(byte *)(lVar7 + 3 + uVar8 * 4);
  }
LAB_1802266f4:
  uVar13 = *(uint *)(param_4 + 0x68);
  if (uVar13 != 0) {
    iVar22 = *(int *)(param_3 + 0x70);
    lVar7 = (longlong)((*(int *)(param_3 + 0x94) - *(int *)(param_4 + 0x94)) * iVar22) +
            *(longlong *)(param_3 + 0x78) +
            ((longlong)*(int *)(param_4 + 0x90) - (longlong)*(int *)(param_3 + 0x90)) * 4;
    uVar8 = *(ulonglong *)(param_4 + 0x78);
    uVar23 = (ulonglong)*(uint *)(param_4 + 0x6c);
    uVar18 = 0;
    local_80 = (uint)(ushort)bVar14;
    local_7c = (uint)(ushort)bVar19;
    local_78 = CONCAT44(local_78._4_4_,uVar17);
    do {
      iVar21 = (int)uVar23;
      uVar23 = 0;
      if (iVar21 != 0) {
        uVar13 = 3;
        uVar25 = 0;
        do {
          uVar11 = ((uint)*(byte *)(uVar8 + uVar25) * (uint)(ushort)bVar14) / 0xff;
          iVar22 = 0xff - uVar11;
          bVar2 = *(byte *)(lVar7 + (ulonglong)(uVar13 - 2));
          bVar3 = *(byte *)(lVar7 + (ulonglong)(uVar13 - 1));
          bVar4 = *(byte *)(lVar7 + (ulonglong)uVar13);
          *(char *)(lVar7 + (ulonglong)(uVar13 - 3)) =
               (char)((uint)*(byte *)(lVar7 + (ulonglong)(uVar13 - 3)) * iVar22 * 0x8081 >> 0x17) +
               (char)((uVar11 * (ushort)bVar19 & 0xffff) / 0xff);
          *(char *)(lVar7 + (ulonglong)(uVar13 - 2)) =
               (char)((uint)bVar2 * iVar22 * 0x8081 >> 0x17) +
               (char)((uVar11 * uVar17 & 0xffff) / 0xff);
          *(char *)(lVar7 + (ulonglong)(uVar13 - 1)) =
               (char)((uint)bVar3 * iVar22 * 0x8081 >> 0x17) +
               (char)((uVar11 * bVar9 & 0xffff) / 0xff);
          *(char *)(lVar7 + (ulonglong)uVar13) =
               (char)((uint)bVar4 * iVar22 * 0x8081 >> 0x17) + (char)uVar11;
          uVar25 = uVar25 + 1;
          uVar23 = (ulonglong)*(uint *)(param_4 + 0x6c);
          uVar13 = uVar13 + 4;
        } while (uVar25 < uVar23);
        iVar22 = *(int *)(param_3 + 0x70);
        uVar13 = *(uint *)(param_4 + 0x68);
        local_70 = uVar18;
        local_68 = uVar8;
      }
      uVar8 = uVar8 + (longlong)*(int *)(param_4 + 0x70);
      lVar7 = lVar7 + iVar22;
      uVar11 = (int)uVar18 + 1;
      uVar18 = (ulonglong)uVar11;
      local_58 = param_3;
    } while (uVar11 < uVar13);
  }
  uVar8 = 0;
LAB_1802268c5:
  if (DAT_180402640 == (local_48 ^ (ulonglong)auStack_b8)) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_48 ^ (ulonglong)auStack_b8);
}

