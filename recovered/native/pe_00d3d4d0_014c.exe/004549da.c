/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004549da */

int __fastcall FUN_004549da(int param_1,byte *param_2,ushort *param_3)

{
  byte bVar1;
  int iVar2;
  ushort *puVar3;
  ushort *puVar4;
  int iVar5;
  ushort *puVar6;
  uint uVar7;
  int iVar8;
  byte bVar9;
  uint uVar10;
  int local_24;
  int local_20;
  int local_1c;
  ushort *local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_24;
  local_1c = 0;
  puVar6 = (ushort *)(param_2 + 1);
  if (puVar6 <= param_3) {
    iVar2 = **(int **)(param_1 + 0x1c);
    bVar1 = *param_2;
    local_18 = puVar6;
    if ((char)bVar1 < '\0') {
      local_20 = param_1;
      if (((bVar1 & 0x40) != 0) &&
         (local_1c = FUN_004536af((uint *)&local_18,(byte *)param_3), iVar8 = local_1c,
         local_1c != 0)) goto LAB_00454a14;
      iVar5 = local_20;
      iVar8 = *(int *)(local_20 + 0x10);
      uVar10 = iVar8 + (bVar1 & 0x3f);
      if (*(uint *)(local_20 + 0x14) < uVar10) {
        uVar10 = uVar10 + 3 & 0xfffffffc;
        if (0x40 < uVar10) goto LAB_00454a0f;
        local_24 = iVar8;
        iVar2 = FUN_0041c6b3(iVar2,0x18,*(uint *)(local_20 + 0x14),uVar10,*(int *)(local_20 + 0x18),
                             &local_1c);
        *(int *)(iVar5 + 0x18) = iVar2;
        iVar8 = local_1c;
        if (local_1c != 0) goto LAB_00454a14;
        *(uint *)(local_20 + 0x14) = uVar10;
        iVar8 = local_24;
      }
      else {
        iVar2 = *(int *)(local_20 + 0x18);
      }
      if ((bVar1 & 0x3f) == 0) {
        iVar8 = 0;
      }
      else {
        iVar2 = iVar2 + iVar8 * 0x18;
        local_24 = (bVar1 & 0x3f) * 0x18;
        iVar5 = 0;
        puVar6 = local_18;
        do {
          puVar3 = (ushort *)((int)puVar6 + 1);
          if (param_3 < puVar3) goto LAB_00454a0f;
          bVar1 = (byte)*puVar6;
          *(undefined4 *)(iVar2 + iVar5) = 0x10000;
          if ((bVar1 & 0x10) != 0) {
            puVar3 = (ushort *)((int)puVar6 + 3);
            if (param_3 < puVar3) goto LAB_00454a0f;
            *(uint *)(iVar2 + iVar5) =
                 ((int)(short)((ushort)*(byte *)((int)puVar6 + 1) << 8) | (uint)(byte)puVar6[1]) <<
                 4;
          }
          *(undefined4 *)(iVar2 + 4 + iVar5) = 0x10000;
          if ((bVar1 & 0x20) != 0) {
            if (param_3 < puVar3 + 1) goto LAB_00454a0f;
            *(uint *)(iVar2 + 4 + iVar5) =
                 ((int)(short)((ushort)(byte)*puVar3 << 8) | (uint)*(byte *)((int)puVar3 + 1)) << 4;
            puVar3 = puVar3 + 1;
          }
          if ((bVar1 & 3) == 2) {
            if (param_3 < (ushort *)((int)puVar3 + 1U)) goto LAB_00454a0f;
            uVar10 = (uint)(char)(byte)*puVar3;
            puVar3 = (ushort *)((int)puVar3 + 1U);
          }
          else {
            uVar10 = 0;
            if ((bVar1 & 3) == 1) {
              if (param_3 < puVar3 + 1) goto LAB_00454a0f;
              uVar10 = (int)(short)((ushort)(byte)*puVar3 << 8) | (uint)*(byte *)((int)puVar3 + 1);
              puVar3 = puVar3 + 1;
            }
          }
          bVar9 = bVar1 >> 2 & 3;
          if (bVar9 == 2) {
            if (param_3 < (ushort *)((int)puVar3 + 1U)) goto LAB_00454a0f;
            uVar7 = (uint)(char)(byte)*puVar3;
            puVar3 = (ushort *)((int)puVar3 + 1U);
          }
          else {
            uVar7 = 0;
            if (bVar9 == 1) {
              if (param_3 < puVar3 + 1) goto LAB_00454a0f;
              uVar7 = (int)(short)((ushort)(byte)*puVar3 << 8) | (uint)*(byte *)((int)puVar3 + 1);
              puVar3 = puVar3 + 1;
            }
          }
          *(uint *)(iVar2 + 8 + iVar5) = uVar10;
          *(uint *)(iVar2 + 0xc + iVar5) = uVar7;
          if ((bVar1 & 0x40) == 0) {
            puVar4 = (ushort *)((int)puVar3 + 1);
            if (param_3 < puVar4) goto LAB_00454a0f;
            uVar10 = (uint)(byte)*puVar3;
          }
          else {
            puVar4 = puVar3 + 1;
            if (param_3 < puVar4) goto LAB_00454a0f;
            uVar10 = (uint)(ushort)(*puVar3 << 8 | *puVar3 >> 8);
          }
          *(uint *)(iVar2 + 0x14 + iVar5) = uVar10;
          if ((char)bVar1 < '\0') {
            puVar6 = (ushort *)((int)puVar4 + 3);
            if (param_3 < puVar6) goto LAB_00454a0f;
            uVar10 = (uint)*(byte *)((int)puVar4 + 1) << 8 | (uint)(byte)*puVar4 << 0x10;
            iVar8 = 2;
          }
          else {
            puVar6 = puVar4 + 1;
            if (param_3 < puVar6) goto LAB_00454a0f;
            uVar10 = (uint)(byte)*puVar4 << 8;
            iVar8 = 1;
          }
          *(uint *)(iVar2 + 0x10 + iVar5) = *(byte *)((int)puVar4 + iVar8) | uVar10;
          *(int *)(local_20 + 0x10) = *(int *)(local_20 + 0x10) + 1;
          iVar5 = iVar5 + 0x18;
          iVar8 = local_1c;
        } while (local_24 != iVar5);
      }
      goto LAB_00454a14;
    }
  }
LAB_00454a0f:
  iVar8 = 8;
LAB_00454a14:
  if (DAT_0050e8c0 != (local_14 ^ (uint)&local_24)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&local_24);
  }
  return iVar8;
}

