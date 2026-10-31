/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14005d253 */

ulonglong FUN_14005d253(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  ushort uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ushort uVar5;
  undefined8 uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  short sVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  short *psVar13;
  longlong lVar14;
  uint uVar15;
  undefined *puVar16;
  ushort uVar17;
  uint uVar18;
  undefined1 auStackY_88 [32];
  undefined4 local_54;
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_88;
  lVar3 = *(longlong *)(param_2 + 0x98);
  uVar12 = FUN_14005d77b((longlong)param_1,*(longlong *)(param_2 + 0x140),*(uint *)(param_2 + 0x13c)
                         ,0x20,&local_50,&local_54);
  local_4c = (uint)uVar12;
  if (local_4c != 0) goto LAB_14005d50c;
  uVar11 = FUN_14002142d(param_1,&local_4c);
  uVar12 = (ulonglong)local_4c;
  local_50 = uVar11;
  if ((local_4c != 0) || (uVar12 = 3, 0xff < uVar11)) goto LAB_14005d50c;
  if ((uVar11 & 4) == 0) {
    puVar16 = &DAT_1400f8e90;
  }
  else {
    puVar16 = &DAT_1400f8e70;
  }
  local_4c = FUN_1400214cf(param_1,(longlong)puVar16,param_2 + 0x1b8);
  uVar12 = CONCAT44(extraout_var,local_4c);
  if (local_4c != 0) goto LAB_14005d50c;
  uVar7 = *(ushort *)(param_2 + 0x1b8);
  uVar9 = *(ushort *)(param_2 + 0x1ba);
  uVar12 = 8;
  if (0xff < uVar9 || uVar9 < uVar7) goto LAB_14005d50c;
  uVar8 = *(ushort *)(param_2 + 0x1bc);
  uVar17 = *(ushort *)(param_2 + 0x1be);
  if (0xff < uVar17 || uVar17 < uVar8) goto LAB_14005d50c;
  uVar2 = *(ushort *)(param_2 + 0x1c0);
  uVar15 = (uint)(byte)uVar2;
  if ((uVar9 < (uVar2 & 0xff)) || ((uVar2 & 0xff) < uVar7)) {
LAB_14005d3a1:
    uVar15 = (uint)uVar7;
    *(ushort *)(param_2 + 0x1c0) = uVar8 * 0x100 + uVar7;
    uVar5 = uVar8;
  }
  else if ((uVar2 >> 8 < uVar8) || (uVar5 = uVar2 >> 8, uVar17 < uVar2 >> 8)) goto LAB_14005d3a1;
  uVar18 = (((uint)uVar17 - (uint)uVar8) + 1) * (((uint)uVar9 - (uint)uVar7) + 1);
  local_4c = FUN_140021063(param_1,uVar18 * 2);
  uVar12 = CONCAT44(extraout_var_00,local_4c);
  if (local_4c == 0) {
    lVar14 = (longlong)
             (int)((uVar15 - *(ushort *)(param_2 + 0x1b8)) +
                  (((uint)*(ushort *)(param_2 + 0x1ba) - (uint)*(ushort *)(param_2 + 0x1b8)) + 1) *
                  ((uint)uVar5 - (uint)*(ushort *)(param_2 + 0x1bc)));
    if ((uVar11 & 4) == 0) {
      uVar7 = *(ushort *)(param_1[7] + lVar14 * 2);
    }
    else {
      uVar7 = *(ushort *)(param_1[7] + lVar14 * 2);
      uVar7 = uVar7 << 8 | uVar7 >> 8;
    }
    if (uVar7 == 0xffff) {
      uVar11 = 1;
    }
    else {
      uVar11 = 1;
      if ((uint)(ushort)(uVar7 + 1) < *(uint *)(param_2 + 0x1a8)) {
        uVar11 = (uint)(ushort)(uVar7 + 1);
      }
    }
    puVar4 = *(undefined8 **)(param_2 + 0x1b0);
    puVar1 = (undefined8 *)((longlong)puVar4 + (ulonglong)(uVar11 << 4));
    uVar6 = puVar1[1];
    *puVar4 = *puVar1;
    puVar4[1] = uVar6;
    psVar13 = (short *)FUN_14001f231(lVar3,2,0,uVar18,0,(int *)&local_4c);
    *(short **)(param_2 + 0x1c8) = psVar13;
    uVar12 = (ulonglong)local_4c;
    if (local_4c == 0) {
      uVar7 = *(ushort *)(param_2 + 0x1bc);
      uVar9 = *(ushort *)(param_2 + 0x1be);
      if (uVar7 <= uVar9) {
        uVar8 = *(ushort *)(param_2 + 0x1ba);
        do {
          uVar17 = *(ushort *)(param_2 + 0x1b8);
          if (uVar17 <= uVar8) {
            do {
              if ((local_50 & 4) == 0) {
                uVar9 = FUN_1400211f0((longlong)param_1);
              }
              else {
                uVar9 = FUN_1400211ce((longlong)param_1);
              }
              sVar10 = uVar9 + 1;
              if ((ushort)(uVar9 + 1) == 0) {
                sVar10 = -1;
              }
              *psVar13 = sVar10;
              psVar13 = psVar13 + 1;
              uVar17 = uVar17 + 1;
              uVar8 = *(ushort *)(param_2 + 0x1ba);
            } while (uVar17 <= uVar8);
            uVar9 = *(ushort *)(param_2 + 0x1be);
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 <= uVar9);
      }
      FUN_140021187(param_1);
      uVar12 = (ulonglong)local_4c;
    }
  }
LAB_14005d50c:
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStackY_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStackY_88);
  }
  return uVar12;
}

