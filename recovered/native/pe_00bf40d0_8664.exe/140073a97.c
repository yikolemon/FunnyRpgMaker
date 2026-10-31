/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140073a97 */

int FUN_140073a97(longlong param_1,uint param_2,longlong param_3,longlong param_4)

{
  uint *puVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  byte bVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  undefined8 *puVar15;
  int iVar16;
  uint uVar17;
  byte bVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  byte bVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  ulonglong uVar27;
  undefined8 *puVar28;
  ulonglong uVar29;
  undefined1 auStackY_b8 [32];
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_b8;
  if (*(longlong *)(param_3 + 0x78) == 0) {
    *(undefined4 *)(param_3 + 0x90) = *(undefined4 *)(param_4 + 0x90);
    *(undefined4 *)(param_3 + 0x94) = *(undefined4 *)(param_4 + 0x94);
    iVar26 = *(int *)(param_4 + 0x6c);
    *(int *)(param_3 + 0x6c) = iVar26;
    *(undefined4 *)(param_3 + 0x68) = *(undefined4 *)(param_4 + 0x68);
    *(undefined1 *)(param_3 + 0x82) = 7;
    *(int *)(param_3 + 0x70) = iVar26 << 2;
    *(undefined2 *)(param_3 + 0x80) = 0x100;
    iVar26 = FUN_14001d500(param_3);
    local_4c = iVar26;
    if (iVar26 != 0) goto LAB_140073f05;
  }
  else {
    iVar26 = *(int *)(param_3 + 0x90);
    iVar25 = *(int *)(param_3 + 0x94);
    iVar24 = *(int *)(param_3 + 0x6c) + iVar26;
    iVar5 = *(int *)(param_4 + 0x90);
    iVar6 = *(int *)(param_4 + 0x94);
    iVar19 = iVar25 - *(int *)(param_3 + 0x68);
    iVar13 = *(int *)(param_4 + 0x6c) + iVar5;
    iVar20 = iVar6 - *(int *)(param_4 + 0x68);
    iVar12 = iVar20;
    if (iVar19 < iVar20) {
      iVar12 = iVar19;
    }
    iVar16 = iVar6;
    if (iVar6 < iVar25) {
      iVar16 = iVar25;
    }
    iVar7 = iVar5;
    if (iVar26 < iVar5) {
      iVar7 = iVar26;
    }
    iVar8 = iVar13;
    if (iVar13 < iVar24) {
      iVar8 = iVar24;
    }
    if ((iVar24 < iVar13 || iVar5 < iVar26) || (iVar25 < iVar6 || iVar20 < iVar19)) {
      uVar21 = (iVar8 - iVar7) * 4;
      lVar9 = FUN_14001c617(*(longlong *)(param_1 + 0x98),uVar21,0,iVar16 - iVar12,0,&local_4c);
      iVar26 = local_4c;
      if (local_4c != 0) goto LAB_140073f05;
      if (*(int *)(param_3 + 0x68) != 0) {
        puVar28 = (undefined8 *)
                  (lVar9 + (int)((iVar16 - *(int *)(param_3 + 0x94)) * uVar21) +
                  ((longlong)*(int *)(param_3 + 0x90) - (longlong)iVar7) * 4);
        puVar15 = *(undefined8 **)(param_3 + 0x78);
        uVar17 = 0;
        do {
          FUN_1400b3550(puVar28,puVar15,(ulonglong)(uint)(*(int *)(param_3 + 0x6c) << 2));
          puVar15 = (undefined8 *)((longlong)puVar15 + (longlong)*(int *)(param_3 + 0x70));
          puVar28 = (undefined8 *)((longlong)puVar28 + (ulonglong)uVar21);
          uVar17 = uVar17 + 1;
        } while (uVar17 < *(uint *)(param_3 + 0x68));
      }
      FUN_14001d4e4(param_3,lVar9);
      *(int *)(param_3 + 0x94) = iVar16;
      *(int *)(param_3 + 0x90) = iVar7;
      *(int *)(param_3 + 0x6c) = iVar8 - iVar7;
      *(int *)(param_3 + 0x68) = iVar16 - iVar12;
      *(uint *)(param_3 + 0x70) = uVar21;
      puVar1 = (uint *)(*(longlong *)(param_3 + 0xf0) + 8);
      *puVar1 = *puVar1 | 1;
      *(undefined4 *)(param_3 + 0x60) = 0x62697473;
    }
  }
  if (param_2 == 0xffff) {
    if (*(char *)(param_1 + 0x3a8) == '\0') {
      if (*(longlong *)(param_1 + 0x380) != 0) {
        bVar18 = 0xff;
        bVar11 = 0xff;
        uVar21 = 0xff;
        bVar23 = 0xff;
        if ((*(byte *)(*(longlong *)(param_1 + 0x380) + (ulonglong)*(ushort *)(param_1 + 0x398) * 2)
            & 2) != 0) goto LAB_140073d34;
      }
      bVar18 = 0xff;
      bVar11 = 0;
      uVar21 = 0;
      bVar23 = 0;
    }
    else {
      bVar23 = *(byte *)(param_1 + 0x3a9);
      uVar21 = (uint)*(byte *)(param_1 + 0x3aa);
      bVar11 = *(byte *)(param_1 + 0x3ab);
      bVar18 = *(byte *)(param_1 + 0x3ac);
    }
  }
  else {
    lVar9 = *(longlong *)(param_1 + 0x3a0);
    uVar27 = (ulonglong)param_2;
    bVar23 = *(byte *)(lVar9 + uVar27 * 4);
    uVar21 = (uint)*(byte *)(lVar9 + 1 + uVar27 * 4);
    bVar11 = *(byte *)(lVar9 + 2 + uVar27 * 4);
    bVar18 = *(byte *)(lVar9 + 3 + uVar27 * 4);
  }
LAB_140073d34:
  uVar17 = *(uint *)(param_4 + 0x68);
  if (uVar17 != 0) {
    iVar26 = *(int *)(param_3 + 0x70);
    lVar9 = (longlong)((*(int *)(param_3 + 0x94) - *(int *)(param_4 + 0x94)) * iVar26) +
            *(longlong *)(param_3 + 0x78) +
            ((longlong)*(int *)(param_4 + 0x90) - (longlong)*(int *)(param_3 + 0x90)) * 4;
    lVar10 = *(longlong *)(param_4 + 0x78);
    uVar27 = (ulonglong)*(uint *)(param_4 + 0x6c);
    uVar22 = 0;
    do {
      iVar25 = (int)uVar27;
      uVar27 = 0;
      if (iVar25 != 0) {
        uVar17 = 3;
        uVar29 = 0;
        do {
          uVar14 = ((uint)*(byte *)(lVar10 + uVar29) * (uint)bVar18) / 0xff;
          iVar26 = 0xff - uVar14;
          bVar2 = *(byte *)(lVar9 + (ulonglong)(uVar17 - 2));
          bVar3 = *(byte *)(lVar9 + (ulonglong)(uVar17 - 1));
          bVar4 = *(byte *)(lVar9 + (ulonglong)uVar17);
          *(char *)(lVar9 + (ulonglong)(uVar17 - 3)) =
               (char)((uint)*(byte *)(lVar9 + (ulonglong)(uVar17 - 3)) * iVar26 * 0x8081 >> 0x17) +
               (char)((uVar14 * bVar23 & 0xffff) / 0xff);
          *(char *)(lVar9 + (ulonglong)(uVar17 - 2)) =
               (char)((uint)bVar2 * iVar26 * 0x8081 >> 0x17) +
               (char)((uVar14 * uVar21 & 0xffff) / 0xff);
          *(char *)(lVar9 + (ulonglong)(uVar17 - 1)) =
               (char)((uint)bVar3 * iVar26 * 0x8081 >> 0x17) +
               (char)((uVar14 * bVar11 & 0xffff) / 0xff);
          *(char *)(lVar9 + (ulonglong)uVar17) =
               (char)((uint)bVar4 * iVar26 * 0x8081 >> 0x17) + (char)uVar14;
          uVar29 = uVar29 + 1;
          uVar27 = (ulonglong)*(uint *)(param_4 + 0x6c);
          uVar17 = uVar17 + 4;
        } while (uVar29 < uVar27);
        iVar26 = *(int *)(param_3 + 0x70);
        uVar17 = *(uint *)(param_4 + 0x68);
      }
      lVar10 = lVar10 + *(int *)(param_4 + 0x70);
      lVar9 = lVar9 + iVar26;
      uVar22 = uVar22 + 1;
    } while (uVar22 < uVar17);
  }
  iVar26 = 0;
LAB_140073f05:
  if (DAT_14012ea80 == (local_48 ^ (ulonglong)auStackY_b8)) {
    return iVar26;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_48 ^ (ulonglong)auStackY_b8);
}

