/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101fd262 */

int __fastcall FUN_101fd262(int param_1,byte *param_2,ushort *param_3)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  ushort *puVar4;
  ushort *puVar5;
  int iVar6;
  ushort *puVar7;
  uint uVar8;
  int iVar9;
  byte bVar10;
  uint uVar11;
  int local_24;
  int local_20;
  int local_1c;
  ushort *local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_24;
  local_1c = 0;
  puVar7 = (ushort *)(param_2 + 1);
  if (puVar7 <= param_3) {
    uVar2 = **(undefined4 **)(param_1 + 0x1c);
    bVar1 = *param_2;
    local_18 = puVar7;
    if ((char)bVar1 < '\0') {
      local_20 = param_1;
      if (((bVar1 & 0x40) != 0) && (local_1c = FUN_101fbf37(), iVar9 = local_1c, local_1c != 0))
      goto LAB_101fd29c;
      iVar6 = local_20;
      iVar9 = *(int *)(local_20 + 0x10);
      uVar11 = iVar9 + (bVar1 & 0x3f);
      if (*(uint *)(local_20 + 0x14) < uVar11) {
        uVar11 = uVar11 + 3 & 0xfffffffc;
        if (0x40 < uVar11) goto LAB_101fd297;
        local_24 = iVar9;
        iVar3 = FUN_101c00c3(uVar2,0x18,*(uint *)(local_20 + 0x14),uVar11,
                             *(undefined4 *)(local_20 + 0x18),&local_1c);
        *(int *)(iVar6 + 0x18) = iVar3;
        iVar9 = local_1c;
        if (local_1c != 0) goto LAB_101fd29c;
        *(uint *)(local_20 + 0x14) = uVar11;
        iVar9 = local_24;
      }
      else {
        iVar3 = *(int *)(local_20 + 0x18);
      }
      if ((bVar1 & 0x3f) == 0) {
        iVar9 = 0;
      }
      else {
        iVar3 = iVar3 + iVar9 * 0x18;
        local_24 = (bVar1 & 0x3f) * 0x18;
        iVar6 = 0;
        puVar7 = local_18;
        do {
          puVar4 = (ushort *)((int)puVar7 + 1);
          if (param_3 < puVar4) goto LAB_101fd297;
          bVar1 = (byte)*puVar7;
          *(undefined4 *)(iVar3 + iVar6) = 0x10000;
          if ((bVar1 & 0x10) != 0) {
            puVar4 = (ushort *)((int)puVar7 + 3);
            if (param_3 < puVar4) goto LAB_101fd297;
            *(uint *)(iVar3 + iVar6) =
                 ((int)(short)((ushort)*(byte *)((int)puVar7 + 1) << 8) | (uint)(byte)puVar7[1]) <<
                 4;
          }
          *(undefined4 *)(iVar3 + 4 + iVar6) = 0x10000;
          if ((bVar1 & 0x20) != 0) {
            if (param_3 < puVar4 + 1) goto LAB_101fd297;
            *(uint *)(iVar3 + 4 + iVar6) =
                 ((int)(short)((ushort)(byte)*puVar4 << 8) | (uint)*(byte *)((int)puVar4 + 1)) << 4;
            puVar4 = puVar4 + 1;
          }
          if ((bVar1 & 3) == 2) {
            if (param_3 < (ushort *)((int)puVar4 + 1U)) goto LAB_101fd297;
            uVar11 = (uint)(char)(byte)*puVar4;
            puVar4 = (ushort *)((int)puVar4 + 1U);
          }
          else {
            uVar11 = 0;
            if ((bVar1 & 3) == 1) {
              if (param_3 < puVar4 + 1) goto LAB_101fd297;
              uVar11 = (int)(short)((ushort)(byte)*puVar4 << 8) | (uint)*(byte *)((int)puVar4 + 1);
              puVar4 = puVar4 + 1;
            }
          }
          bVar10 = bVar1 >> 2 & 3;
          if (bVar10 == 2) {
            if (param_3 < (ushort *)((int)puVar4 + 1U)) goto LAB_101fd297;
            uVar8 = (uint)(char)(byte)*puVar4;
            puVar4 = (ushort *)((int)puVar4 + 1U);
          }
          else {
            uVar8 = 0;
            if (bVar10 == 1) {
              if (param_3 < puVar4 + 1) goto LAB_101fd297;
              uVar8 = (int)(short)((ushort)(byte)*puVar4 << 8) | (uint)*(byte *)((int)puVar4 + 1);
              puVar4 = puVar4 + 1;
            }
          }
          *(uint *)(iVar3 + 8 + iVar6) = uVar11;
          *(uint *)(iVar3 + 0xc + iVar6) = uVar8;
          if ((bVar1 & 0x40) == 0) {
            puVar5 = (ushort *)((int)puVar4 + 1);
            if (param_3 < puVar5) goto LAB_101fd297;
            uVar11 = (uint)(byte)*puVar4;
          }
          else {
            puVar5 = puVar4 + 1;
            if (param_3 < puVar5) goto LAB_101fd297;
            uVar11 = (uint)(ushort)(*puVar4 << 8 | *puVar4 >> 8);
          }
          *(uint *)(iVar3 + 0x14 + iVar6) = uVar11;
          if ((char)bVar1 < '\0') {
            puVar7 = (ushort *)((int)puVar5 + 3);
            if (param_3 < puVar7) goto LAB_101fd297;
            uVar11 = (uint)*(byte *)((int)puVar5 + 1) << 8 | (uint)(byte)*puVar5 << 0x10;
            iVar9 = 2;
          }
          else {
            puVar7 = puVar5 + 1;
            if (param_3 < puVar7) goto LAB_101fd297;
            uVar11 = (uint)(byte)*puVar5 << 8;
            iVar9 = 1;
          }
          *(uint *)(iVar3 + 0x10 + iVar6) = *(byte *)((int)puVar5 + iVar9) | uVar11;
          *(int *)(local_20 + 0x10) = *(int *)(local_20 + 0x10) + 1;
          iVar6 = iVar6 + 0x18;
          iVar9 = local_1c;
        } while (local_24 != iVar6);
      }
      goto LAB_101fd29c;
    }
  }
LAB_101fd297:
  iVar9 = 8;
LAB_101fd29c:
  if (DAT_10388d00 != (local_14 ^ (uint)&local_24)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return iVar9;
}

