/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14015f303 */

ulonglong FUN_14015f303(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  ushort uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  ushort uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ushort uVar9;
  ushort uVar10;
  short sVar11;
  short sVar12;
  uint uVar13;
  ulonglong uVar14;
  short *psVar15;
  ushort uVar16;
  longlong lVar17;
  uint uVar18;
  undefined *puVar19;
  ushort uVar20;
  int iVar21;
  undefined1 auStack_88 [32];
  uint *local_68;
  uint *local_60;
  uint local_54;
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_88;
  uVar3 = *(undefined8 *)(param_2 + 0x98);
  local_60 = &local_54;
  local_68 = &local_50;
  uVar14 = FUN_14015f82b(param_1,*(undefined8 *)(param_2 + 0x140),*(undefined4 *)(param_2 + 0x13c),
                         0x20);
  local_4c = (uint)uVar14;
  if (local_4c != 0) goto LAB_14015f5bc;
  uVar13 = FUN_14012dffe(param_1,&local_4c);
  uVar14 = (ulonglong)local_4c;
  local_50 = uVar13;
  if ((local_4c != 0) || (uVar14 = 3, 0xff < uVar13)) goto LAB_14015f5bc;
  if ((uVar13 & 4) == 0) {
    puVar19 = &DAT_140ea00d0;
  }
  else {
    puVar19 = &DAT_140ea00b0;
  }
  uVar14 = FUN_14012e0a0(param_1,puVar19,param_2 + 0x1b8);
  local_4c = (uint)uVar14;
  if (local_4c != 0) goto LAB_14015f5bc;
  uVar9 = *(ushort *)(param_2 + 0x1b8);
  uVar16 = *(ushort *)(param_2 + 0x1ba);
  uVar14 = 8;
  if (0xff < uVar16 || uVar16 < uVar9) goto LAB_14015f5bc;
  uVar10 = *(ushort *)(param_2 + 0x1bc);
  uVar20 = *(ushort *)(param_2 + 0x1be);
  if (0xff < uVar20 || uVar20 < uVar10) goto LAB_14015f5bc;
  uVar2 = *(ushort *)(param_2 + 0x1c0);
  uVar18 = (uint)(byte)uVar2;
  if ((uVar16 < (uVar2 & 0xff)) || ((uVar2 & 0xff) < uVar9)) {
LAB_14015f451:
    uVar18 = (uint)uVar9;
    *(ushort *)(param_2 + 0x1c0) = uVar10 * 0x100 + uVar9;
    uVar5 = uVar10;
  }
  else if ((uVar2 >> 8 < uVar10) || (uVar5 = uVar2 >> 8, uVar20 < uVar2 >> 8)) goto LAB_14015f451;
  iVar21 = (((uint)uVar20 - (uint)uVar10) + 1) * (((uint)uVar16 - (uint)uVar9) + 1);
  uVar14 = FUN_14012dc34(param_1,iVar21 * 2);
  local_4c = (uint)uVar14;
  if (local_4c == 0) {
    lVar17 = (longlong)
             (int)((uVar18 - *(ushort *)(param_2 + 0x1b8)) +
                  (((uint)*(ushort *)(param_2 + 0x1ba) - (uint)*(ushort *)(param_2 + 0x1b8)) + 1) *
                  ((uint)uVar5 - (uint)*(ushort *)(param_2 + 0x1bc)));
    if ((uVar13 & 4) == 0) {
      uVar9 = *(ushort *)(*(longlong *)(param_1 + 0x38) + lVar17 * 2);
    }
    else {
      uVar9 = *(ushort *)(*(longlong *)(param_1 + 0x38) + lVar17 * 2);
      uVar9 = uVar9 << 8 | uVar9 >> 8;
    }
    if (uVar9 == 0xffff) {
      uVar13 = 1;
    }
    else {
      uVar13 = 1;
      if ((uint)(ushort)(uVar9 + 1) < *(uint *)(param_2 + 0x1a8)) {
        uVar13 = (uint)(ushort)(uVar9 + 1);
      }
    }
    puVar4 = *(undefined4 **)(param_2 + 0x1b0);
    puVar1 = (undefined4 *)((longlong)puVar4 + (ulonglong)(uVar13 << 4));
    uVar6 = puVar1[1];
    uVar7 = puVar1[2];
    uVar8 = puVar1[3];
    *puVar4 = *puVar1;
    puVar4[1] = uVar6;
    puVar4[2] = uVar7;
    puVar4[3] = uVar8;
    local_68 = (uint *)0x0;
    local_60 = &local_4c;
    psVar15 = (short *)FUN_14012b8aa(uVar3,2,0,iVar21);
    *(short **)(param_2 + 0x1c8) = psVar15;
    uVar14 = (ulonglong)local_4c;
    if (local_4c == 0) {
      uVar9 = *(ushort *)(param_2 + 0x1bc);
      uVar16 = *(ushort *)(param_2 + 0x1be);
      if (uVar9 <= uVar16) {
        uVar10 = *(ushort *)(param_2 + 0x1ba);
        do {
          uVar20 = *(ushort *)(param_2 + 0x1b8);
          if (uVar20 <= uVar10) {
            do {
              if ((local_50 & 4) == 0) {
                sVar11 = FUN_14012ddc1(param_1);
              }
              else {
                sVar11 = FUN_14012dd9f(param_1);
              }
              sVar12 = sVar11 + 1;
              if ((short)(sVar11 + 1) == 0) {
                sVar12 = -1;
              }
              *psVar15 = sVar12;
              psVar15 = psVar15 + 1;
              uVar20 = uVar20 + 1;
              uVar10 = *(ushort *)(param_2 + 0x1ba);
            } while (uVar20 <= uVar10);
            uVar16 = *(ushort *)(param_2 + 0x1be);
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 <= uVar16);
      }
      FUN_14012dd58(param_1);
      uVar14 = (ulonglong)local_4c;
    }
  }
LAB_14015f5bc:
  if (DAT_140f17b40 != (local_48 ^ (ulonglong)auStack_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_48 ^ (ulonglong)auStack_88);
  }
  return uVar14;
}

