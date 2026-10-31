/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101e751b */

int __fastcall FUN_101e751b(int param_1,uint *param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  ushort *puVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ushort *puVar8;
  short sVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auStack_30 [3];
  byte local_2d;
  int local_2c;
  int local_28;
  uint local_24;
  undefined4 local_20;
  uint *local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)auStack_30;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  *param_2 = 0;
  local_28 = param_1;
  bVar4 = FUN_101c4c8e(param_1);
  if (bVar4 == 0) {
    iVar11 = -1;
  }
  else {
    uVar5 = (uint)bVar4;
    if ((char)bVar4 < '\0') {
      uVar6 = FUN_101c4c8e(local_28);
      uVar5 = (uVar5 & 0x7f) << 8 | uVar6 & 0xff;
    }
    iVar7 = FUN_101c2a50(uVar2,2,0,uVar5,0,&local_18);
    iVar11 = 0;
    if (local_18 == 0) {
      puVar8 = *(ushort **)(local_28 + 0x20);
      local_2c = iVar7;
      local_24 = uVar5;
      local_1c = param_2;
      if (uVar5 != 0) {
        uVar6 = 0;
        sVar9 = 0;
        do {
          puVar3 = *(ushort **)(local_28 + 0x24);
          local_20 = uVar2;
          if (puVar3 <= puVar8) {
LAB_101e766b:
            FUN_101c0017(uVar2,iVar7);
            iVar11 = 0;
            goto LAB_101e767d;
          }
          local_2d = (byte)*puVar8;
          puVar8 = (ushort *)((int)puVar8 + 1);
          uVar10 = uVar5 - uVar6;
          if ((local_2d & 0x7f) < uVar5 - uVar6) {
            uVar10 = (local_2d & 0x7f) + 1;
          }
          if ((char)local_2d < '\0') {
            if ((uint)((int)puVar3 - (int)puVar8) < uVar10 * 2) goto LAB_101e766b;
            if (uVar10 != 0) {
              uVar12 = uVar10 + uVar6;
              iVar11 = uVar6 * 2;
              uVar13 = 0;
              do {
                uVar1 = *puVar8;
                puVar8 = puVar8 + 1;
                sVar9 = sVar9 + (uVar1 << 8 | uVar1 >> 8);
                *(short *)(iVar7 + iVar11 + uVar13 * 2) = sVar9;
                uVar13 = uVar13 + 1;
                uVar6 = uVar12;
              } while (uVar10 != uVar13);
            }
          }
          else {
            if ((uint)((int)puVar3 - (int)puVar8) < uVar10) goto LAB_101e766b;
            if (uVar10 != 0) {
              uVar12 = 0;
              do {
                sVar9 = sVar9 + (ushort)*(byte *)((int)puVar8 + uVar12);
                *(short *)(iVar7 + uVar6 * 2 + uVar12 * 2) = sVar9;
                uVar12 = uVar12 + 1;
              } while (uVar10 != uVar12);
              puVar8 = (ushort *)((int)puVar8 + uVar12);
              uVar6 = uVar10 + uVar6;
            }
          }
        } while (uVar6 < uVar5);
      }
      *(ushort **)(local_28 + 0x20) = puVar8;
      *param_2 = uVar5;
      iVar11 = iVar7;
    }
  }
LAB_101e767d:
  if (DAT_10388d00 != (local_14 ^ (uint)auStack_30)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return iVar11;
}

