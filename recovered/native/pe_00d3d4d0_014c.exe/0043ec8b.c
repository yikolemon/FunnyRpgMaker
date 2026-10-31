/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0043ec8b */

int __fastcall FUN_0043ec8b(int param_1,uint *param_2)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ushort *puVar7;
  short sVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auStack_30 [3];
  byte local_2d;
  int local_2c;
  int local_28;
  uint local_24;
  int local_20;
  uint *local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)auStack_30;
  iVar2 = *(int *)(param_1 + 0x1c);
  *param_2 = 0;
  local_28 = param_1;
  uVar4 = FUN_00420d06(param_1);
  if ((char)uVar4 == '\0') {
    iVar10 = -1;
  }
  else {
    uVar5 = uVar4 & 0xff;
    if ((char)uVar4 < '\0') {
      uVar5 = FUN_00420d06(local_28);
      uVar5 = (uVar4 & 0x7f) << 8 | uVar5 & 0xff;
    }
    iVar6 = FUN_0041efcd(iVar2,2,0,uVar5,0,&local_18);
    iVar10 = 0;
    if (local_18 == 0) {
      puVar7 = *(ushort **)(local_28 + 0x20);
      local_2c = iVar6;
      local_24 = uVar5;
      local_1c = param_2;
      if (uVar5 != 0) {
        uVar4 = 0;
        sVar8 = 0;
        do {
          puVar3 = *(ushort **)(local_28 + 0x24);
          local_20 = iVar2;
          if (puVar3 <= puVar7) {
LAB_0043eddb:
            FUN_0041c607(iVar2,iVar6);
            iVar10 = 0;
            goto LAB_0043eded;
          }
          local_2d = (byte)*puVar7;
          puVar7 = (ushort *)((int)puVar7 + 1);
          uVar9 = uVar5 - uVar4;
          if ((local_2d & 0x7f) < uVar5 - uVar4) {
            uVar9 = (local_2d & 0x7f) + 1;
          }
          if ((char)local_2d < '\0') {
            if ((uint)((int)puVar3 - (int)puVar7) < uVar9 * 2) goto LAB_0043eddb;
            if (uVar9 != 0) {
              uVar11 = uVar9 + uVar4;
              iVar10 = uVar4 * 2;
              uVar12 = 0;
              do {
                uVar1 = *puVar7;
                puVar7 = puVar7 + 1;
                sVar8 = sVar8 + (uVar1 << 8 | uVar1 >> 8);
                *(short *)(iVar6 + iVar10 + uVar12 * 2) = sVar8;
                uVar12 = uVar12 + 1;
                uVar4 = uVar11;
              } while (uVar9 != uVar12);
            }
          }
          else {
            if ((uint)((int)puVar3 - (int)puVar7) < uVar9) goto LAB_0043eddb;
            if (uVar9 != 0) {
              uVar11 = 0;
              do {
                sVar8 = sVar8 + (ushort)*(byte *)((int)puVar7 + uVar11);
                *(short *)(iVar6 + uVar4 * 2 + uVar11 * 2) = sVar8;
                uVar11 = uVar11 + 1;
              } while (uVar9 != uVar11);
              puVar7 = (ushort *)((int)puVar7 + uVar11);
              uVar4 = uVar9 + uVar4;
            }
          }
        } while (uVar4 < uVar5);
      }
      *(ushort **)(local_28 + 0x20) = puVar7;
      *param_2 = uVar5;
      iVar10 = iVar6;
    }
  }
LAB_0043eded:
  if (DAT_0050e8c0 != (local_14 ^ (uint)auStack_30)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)auStack_30);
  }
  return iVar10;
}

