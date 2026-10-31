/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18020a9b4 */

ulonglong FUN_18020a9b4(longlong param_1,byte *param_2,ushort *param_3)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  ushort *puVar9;
  ushort *puVar10;
  ushort *puVar11;
  byte bVar12;
  longlong lVar13;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  uint *local_60;
  uint local_4c;
  ushort *local_48;
  ulonglong local_40;
  
  local_40 = DAT_180402640 ^ (ulonglong)auStack_88;
  local_4c = 0;
  puVar9 = (ushort *)(param_2 + 1);
  if (puVar9 <= param_3) {
    uVar3 = **(undefined8 **)(param_1 + 0x28);
    bVar1 = *param_2;
    local_48 = puVar9;
    if ((char)bVar1 < '\0') {
      if ((bVar1 & 0x40) != 0) {
        uVar4 = FUN_180209571(&local_48);
        local_4c = (uint)uVar4;
        if (local_4c != 0) goto LAB_18020a9ff;
      }
      uVar8 = *(uint *)(param_1 + 0x18);
      uVar7 = uVar8 + (bVar1 & 0x3f);
      if (*(uint *)(param_1 + 0x1c) < uVar7) {
        uVar7 = uVar7 + 3 & 0xfffffffc;
        if (0x40 < uVar7) goto LAB_18020a9fa;
        local_68 = *(undefined8 *)(param_1 + 0x20);
        local_60 = &local_4c;
        lVar5 = FUN_1801c9c3f(uVar3,0x18,*(uint *)(param_1 + 0x1c),uVar7);
        *(longlong *)(param_1 + 0x20) = lVar5;
        uVar4 = (ulonglong)local_4c;
        if (local_4c != 0) goto LAB_18020a9ff;
        *(uint *)(param_1 + 0x1c) = uVar7;
      }
      else {
        lVar5 = *(longlong *)(param_1 + 0x20);
      }
      if ((bVar1 & 0x3f) == 0) {
        uVar4 = 0;
      }
      else {
        lVar5 = lVar5 + (ulonglong)uVar8 * 0x18;
        lVar6 = 0;
        puVar9 = local_48;
        do {
          puVar10 = (ushort *)((longlong)puVar9 + 1);
          if (param_3 < puVar10) goto LAB_18020a9fa;
          bVar2 = (byte)*puVar9;
          *(undefined4 *)(lVar5 + lVar6) = 0x10000;
          if ((bVar2 & 0x10) != 0) {
            puVar10 = (ushort *)((longlong)puVar9 + 3);
            if (param_3 < puVar10) goto LAB_18020a9fa;
            *(uint *)(lVar5 + lVar6) =
                 ((int)(short)((ushort)*(byte *)((longlong)puVar9 + 1) << 8) | (uint)(byte)puVar9[1]
                 ) << 4;
          }
          *(undefined4 *)(lVar5 + 4 + lVar6) = 0x10000;
          if ((bVar2 & 0x20) != 0) {
            if (param_3 < puVar10 + 1) goto LAB_18020a9fa;
            *(uint *)(lVar5 + 4 + lVar6) =
                 ((int)(short)((ushort)(byte)*puVar10 << 8) | (uint)*(byte *)((longlong)puVar10 + 1)
                 ) << 4;
            puVar10 = puVar10 + 1;
          }
          if ((bVar2 & 3) == 2) {
            if (param_3 < (ushort *)((longlong)puVar10 + 1U)) goto LAB_18020a9fa;
            uVar8 = (uint)(char)(byte)*puVar10;
            puVar10 = (ushort *)((longlong)puVar10 + 1U);
          }
          else {
            uVar8 = 0;
            if ((bVar2 & 3) == 1) {
              if (param_3 < puVar10 + 1) goto LAB_18020a9fa;
              uVar8 = (int)(short)((ushort)(byte)*puVar10 << 8) |
                      (uint)*(byte *)((longlong)puVar10 + 1);
              puVar10 = puVar10 + 1;
            }
          }
          bVar12 = bVar2 >> 2 & 3;
          if (bVar12 == 2) {
            if (param_3 < (ushort *)((longlong)puVar10 + 1U)) goto LAB_18020a9fa;
            uVar7 = (uint)(char)(byte)*puVar10;
            puVar10 = (ushort *)((longlong)puVar10 + 1U);
          }
          else {
            uVar7 = 0;
            if (bVar12 == 1) {
              if (param_3 < puVar10 + 1) goto LAB_18020a9fa;
              uVar7 = (int)(short)((ushort)(byte)*puVar10 << 8) |
                      (uint)*(byte *)((longlong)puVar10 + 1);
              puVar10 = puVar10 + 1;
            }
          }
          *(uint *)(lVar5 + 8 + lVar6) = uVar8;
          *(uint *)(lVar5 + 0xc + lVar6) = uVar7;
          if ((bVar2 & 0x40) == 0) {
            puVar11 = (ushort *)((longlong)puVar10 + 1);
            if (param_3 < puVar11) goto LAB_18020a9fa;
            uVar8 = (uint)(byte)*puVar10;
          }
          else {
            puVar11 = puVar10 + 1;
            if (param_3 < puVar11) goto LAB_18020a9fa;
            uVar8 = (uint)(ushort)(*puVar10 << 8 | *puVar10 >> 8);
          }
          *(uint *)(lVar5 + 0x14 + lVar6) = uVar8;
          if ((char)bVar2 < '\0') {
            puVar9 = (ushort *)((longlong)puVar11 + 3);
            if (param_3 < puVar9) goto LAB_18020a9fa;
            uVar8 = (uint)*(byte *)((longlong)puVar11 + 1) << 8 | (uint)(byte)*puVar11 << 0x10;
            lVar13 = 2;
          }
          else {
            puVar9 = puVar11 + 1;
            if (param_3 < puVar9) goto LAB_18020a9fa;
            uVar8 = (uint)(byte)*puVar11 << 8;
            lVar13 = 1;
          }
          *(uint *)(lVar5 + 0x10 + lVar6) = *(byte *)((longlong)puVar11 + lVar13) | uVar8;
          *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
          lVar6 = lVar6 + 0x18;
        } while ((bVar1 & 0x3f) * 0x18 != (int)lVar6);
        uVar4 = (ulonglong)local_4c;
      }
      goto LAB_18020a9ff;
    }
  }
LAB_18020a9fa:
  uVar4 = 8;
LAB_18020a9ff:
  if (DAT_180402640 != (local_40 ^ (ulonglong)auStack_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_40 ^ (ulonglong)auStack_88);
  }
  return uVar4;
}

