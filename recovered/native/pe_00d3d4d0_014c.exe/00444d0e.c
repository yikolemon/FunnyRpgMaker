/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00444d0e */

undefined4 __fastcall FUN_00444d0e(int param_1)

{
  byte bVar4;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar5;
  uint uVar6;
  int *piVar7;
  undefined4 local_9c;
  uint local_98;
  uint local_94;
  int local_90 [32];
  
  local_90[0x1f] = DAT_0050e8c0 ^ (uint)&local_9c;
  local_90[0x1c] = 0;
  local_90[0x1d] = 0;
  local_90[0x1e] = 0;
  local_90[0x18] = 0;
  local_90[0x19] = 0;
  local_90[0x1a] = 0;
  local_90[0x1b] = 0;
  local_90[0x14] = 0;
  local_90[0x15] = 0;
  local_90[0x16] = 0;
  local_90[0x17] = 0;
  local_90[0x10] = 0;
  local_90[0x11] = 0;
  local_90[0x12] = 0;
  local_90[0x13] = 0;
  local_90[0xc] = 0;
  local_90[0xd] = 0;
  local_90[0xe] = 0;
  local_90[0xf] = 0;
  local_90[8] = 0;
  local_90[9] = 0;
  local_90[10] = 0;
  local_90[0xb] = 0;
  local_90[4] = 0;
  local_90[5] = 0;
  local_90[6] = 0;
  local_90[7] = 0;
  local_90[0] = 0;
  local_90[1] = 0;
  local_90[2] = 0;
  local_90[3] = 0;
  uVar1 = (uint)*(ushort *)(param_1 + 0x98);
  if (*(ushort *)(param_1 + 0x98) == 0) {
    uVar1 = 1;
  }
  else {
    uVar6 = 0;
    local_9c = 0;
    do {
      iVar2 = *(int *)(*(int *)(param_1 + 0x9c) + uVar6 * 0x10);
      if (iVar2 == 0x63767420) {
        local_9c = CONCAT31((int3)(uVar1 >> 8),1);
        iVar2 = 0;
LAB_00444da5:
        piVar7 = &DAT_004e2c00 + iVar2 * 2;
        uVar1 = 0;
        local_94 = uVar6 & 0xffff;
        iVar2 = 0;
        local_98 = uVar6;
        do {
          if (*(int *)(*(int *)(param_1 + 0x9c) + 0xc + uVar6 * 0x10) == *piVar7) {
            if (uVar1 == 0) {
              uVar1 = FUN_00444ec7(param_1,local_94);
            }
            iVar5 = local_90[iVar2];
            if (piVar7[-1] == uVar1) {
              iVar5 = iVar5 + 1;
              local_90[iVar2] = iVar5;
            }
            if (iVar5 == 3) goto LAB_00444e40;
          }
          iVar2 = iVar2 + 1;
          piVar7 = piVar7 + 6;
        } while (iVar2 != 0x1f);
        uVar1 = (uint)*(ushort *)(param_1 + 0x98);
        uVar6 = local_98;
      }
      else {
        if (iVar2 == 0x70726570) {
          iVar2 = 2;
          goto LAB_00444da5;
        }
        if (iVar2 == 0x6670676d) {
          iVar2 = 1;
          goto LAB_00444da5;
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar1);
    uVar1 = (uint)((char)local_9c == '\0');
  }
  iVar2 = 0;
  do {
    bVar4 = iVar2 - 0x10U < 0xc & (byte)uVar1;
    uVar1 = (uint)CONCAT11(bVar4,(byte)uVar1);
    iVar5 = local_90[iVar2];
    if (bVar4 == 1) {
      iVar5 = iVar5 + 1;
      local_90[iVar2] = iVar5;
    }
    if (iVar5 == 3) goto LAB_00444e40;
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0x1f);
  uVar3 = 0;
LAB_00444e42:
  if (DAT_0050e8c0 == (local_90[0x1f] ^ (uint)&local_9c)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_90[0x1f] ^ (uint)&local_9c);
LAB_00444e40:
  uVar3 = CONCAT31((int3)(uVar1 >> 8),1);
  goto LAB_00444e42;
}

