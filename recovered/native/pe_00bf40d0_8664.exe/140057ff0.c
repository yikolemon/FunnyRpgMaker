/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140057ff0 */

ulonglong FUN_140057ff0(longlong param_1,byte *param_2,ushort *param_3)

{
  byte bVar1;
  byte bVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  ushort *puVar8;
  ushort *puVar9;
  ushort *puVar10;
  byte bVar11;
  longlong lVar12;
  undefined1 auStackY_88 [32];
  uint local_4c;
  ushort *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14012ea80 ^ (ulonglong)auStackY_88;
  local_4c = 0;
  puVar8 = (ushort *)(param_2 + 1);
  if (puVar8 <= param_3) {
    lVar4 = **(longlong **)(param_1 + 0x28);
    bVar1 = *param_2;
    local_48 = puVar8;
    if ((char)bVar1 < '\0') {
      if ((bVar1 & 0x40) != 0) {
        uVar3 = FUN_140056bad((ulonglong *)&local_48,(byte *)param_3);
        local_4c = (uint)uVar3;
        if (local_4c != 0) goto LAB_14005803b;
      }
      uVar7 = *(uint *)(param_1 + 0x18);
      uVar6 = uVar7 + (bVar1 & 0x3f);
      if (*(uint *)(param_1 + 0x1c) < uVar6) {
        uVar6 = uVar6 + 3 & 0xfffffffc;
        if (0x40 < uVar6) goto LAB_140058036;
        lVar4 = FUN_14001c617(lVar4,0x18,*(uint *)(param_1 + 0x1c),uVar6,
                              *(longlong *)(param_1 + 0x20),(int *)&local_4c);
        *(longlong *)(param_1 + 0x20) = lVar4;
        uVar3 = (ulonglong)local_4c;
        if (local_4c != 0) goto LAB_14005803b;
        *(uint *)(param_1 + 0x1c) = uVar6;
      }
      else {
        lVar4 = *(longlong *)(param_1 + 0x20);
      }
      if ((bVar1 & 0x3f) == 0) {
        uVar3 = 0;
      }
      else {
        lVar4 = lVar4 + (ulonglong)uVar7 * 0x18;
        lVar5 = 0;
        puVar8 = local_48;
        do {
          puVar9 = (ushort *)((longlong)puVar8 + 1);
          if (param_3 < puVar9) goto LAB_140058036;
          bVar2 = (byte)*puVar8;
          *(undefined4 *)(lVar4 + lVar5) = 0x10000;
          if ((bVar2 & 0x10) != 0) {
            puVar9 = (ushort *)((longlong)puVar8 + 3);
            if (param_3 < puVar9) goto LAB_140058036;
            *(uint *)(lVar4 + lVar5) =
                 ((int)(short)((ushort)*(byte *)((longlong)puVar8 + 1) << 8) | (uint)(byte)puVar8[1]
                 ) << 4;
          }
          *(undefined4 *)(lVar4 + 4 + lVar5) = 0x10000;
          if ((bVar2 & 0x20) != 0) {
            if (param_3 < puVar9 + 1) goto LAB_140058036;
            *(uint *)(lVar4 + 4 + lVar5) =
                 ((int)(short)((ushort)(byte)*puVar9 << 8) | (uint)*(byte *)((longlong)puVar9 + 1))
                 << 4;
            puVar9 = puVar9 + 1;
          }
          if ((bVar2 & 3) == 2) {
            if (param_3 < (ushort *)((longlong)puVar9 + 1U)) goto LAB_140058036;
            uVar7 = (uint)(char)(byte)*puVar9;
            puVar9 = (ushort *)((longlong)puVar9 + 1U);
          }
          else {
            uVar7 = 0;
            if ((bVar2 & 3) == 1) {
              if (param_3 < puVar9 + 1) goto LAB_140058036;
              uVar7 = (int)(short)((ushort)(byte)*puVar9 << 8) |
                      (uint)*(byte *)((longlong)puVar9 + 1);
              puVar9 = puVar9 + 1;
            }
          }
          bVar11 = bVar2 >> 2 & 3;
          if (bVar11 == 2) {
            if (param_3 < (ushort *)((longlong)puVar9 + 1U)) goto LAB_140058036;
            uVar6 = (uint)(char)(byte)*puVar9;
            puVar9 = (ushort *)((longlong)puVar9 + 1U);
          }
          else {
            uVar6 = 0;
            if (bVar11 == 1) {
              if (param_3 < puVar9 + 1) goto LAB_140058036;
              uVar6 = (int)(short)((ushort)(byte)*puVar9 << 8) |
                      (uint)*(byte *)((longlong)puVar9 + 1);
              puVar9 = puVar9 + 1;
            }
          }
          *(uint *)(lVar4 + 8 + lVar5) = uVar7;
          *(uint *)(lVar4 + 0xc + lVar5) = uVar6;
          if ((bVar2 & 0x40) == 0) {
            puVar10 = (ushort *)((longlong)puVar9 + 1);
            if (param_3 < puVar10) goto LAB_140058036;
            uVar7 = (uint)(byte)*puVar9;
          }
          else {
            puVar10 = puVar9 + 1;
            if (param_3 < puVar10) goto LAB_140058036;
            uVar7 = (uint)(ushort)(*puVar9 << 8 | *puVar9 >> 8);
          }
          *(uint *)(lVar4 + 0x14 + lVar5) = uVar7;
          if ((char)bVar2 < '\0') {
            puVar8 = (ushort *)((longlong)puVar10 + 3);
            if (param_3 < puVar8) goto LAB_140058036;
            uVar7 = (uint)*(byte *)((longlong)puVar10 + 1) << 8 | (uint)(byte)*puVar10 << 0x10;
            lVar12 = 2;
          }
          else {
            puVar8 = puVar10 + 1;
            if (param_3 < puVar8) goto LAB_140058036;
            uVar7 = (uint)(byte)*puVar10 << 8;
            lVar12 = 1;
          }
          *(uint *)(lVar4 + 0x10 + lVar5) = *(byte *)((longlong)puVar10 + lVar12) | uVar7;
          *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
          lVar5 = lVar5 + 0x18;
        } while ((bVar1 & 0x3f) * 0x18 != (int)lVar5);
        uVar3 = (ulonglong)local_4c;
      }
      goto LAB_14005803b;
    }
  }
LAB_140058036:
  uVar3 = 8;
LAB_14005803b:
  if (DAT_14012ea80 != (local_40 ^ (ulonglong)auStackY_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_40 ^ (ulonglong)auStackY_88);
  }
  return uVar3;
}

