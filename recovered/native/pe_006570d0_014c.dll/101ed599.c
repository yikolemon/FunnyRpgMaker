/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101ed599 */

undefined4 __fastcall FUN_101ed599(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  bool bVar8;
  undefined4 local_9c;
  uint local_98;
  uint local_94;
  int local_90 [32];
  
  local_90[0x1f] = DAT_10388d00 ^ (uint)&local_9c;
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
    bVar8 = true;
  }
  else {
    uVar5 = 0;
    local_9c = 0;
    do {
      iVar2 = *(int *)(*(int *)(param_1 + 0x9c) + uVar5 * 0x10);
      if (iVar2 == 0x63767420) {
        local_9c = CONCAT31((int3)(uVar1 >> 8),1);
        iVar2 = 0;
LAB_101ed630:
        piVar7 = &DAT_1030e660 + iVar2 * 2;
        iVar2 = 0;
        local_94 = uVar5 & 0xffff;
        iVar6 = 0;
        local_98 = uVar5;
        do {
          if (*(int *)(*(int *)(param_1 + 0x9c) + 0xc + uVar5 * 0x10) == *piVar7) {
            if (iVar2 == 0) {
              iVar2 = FUN_101ed752();
            }
            iVar4 = local_90[iVar6];
            if (piVar7[-1] == iVar2) {
              iVar4 = iVar4 + 1;
              local_90[iVar6] = iVar4;
            }
            if (iVar4 == 3) goto LAB_101ed6cb;
          }
          iVar6 = iVar6 + 1;
          piVar7 = piVar7 + 6;
        } while (iVar6 != 0x1f);
        uVar1 = (uint)*(ushort *)(param_1 + 0x98);
        uVar5 = local_98;
      }
      else {
        if (iVar2 == 0x70726570) {
          iVar2 = 2;
          goto LAB_101ed630;
        }
        if (iVar2 == 0x6670676d) {
          iVar2 = 1;
          goto LAB_101ed630;
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar1);
    bVar8 = (char)local_9c == '\0';
  }
  iVar2 = 0;
  do {
    iVar6 = local_90[iVar2];
    if ((bool)(iVar2 - 0x10U < 0xc & bVar8)) {
      iVar6 = iVar6 + 1;
      local_90[iVar2] = iVar6;
    }
    if (iVar6 == 3) goto LAB_101ed6cb;
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0x1f);
  uVar3 = 0;
LAB_101ed6cd:
  if (DAT_10388d00 == (local_90[0x1f] ^ (uint)&local_9c)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
LAB_101ed6cb:
  uVar3 = 1;
  goto LAB_101ed6cd;
}

