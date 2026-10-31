/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801f9787 */

undefined8 FUN_1801f9787(longlong param_1)

{
  bool bVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  ulonglong uVar7;
  int *piVar8;
  undefined1 auStack_e8 [32];
  int local_c8 [34];
  ulonglong local_40;
  
  local_40 = DAT_180402640 ^ (ulonglong)auStack_e8;
  local_c8[0x1c] = 0;
  local_c8[0x1d] = 0;
  local_c8[0x1e] = 0;
  local_c8[0x18] = 0;
  local_c8[0x19] = 0;
  local_c8[0x1a] = 0;
  local_c8[0x1b] = 0;
  local_c8[0x14] = 0;
  local_c8[0x15] = 0;
  local_c8[0x16] = 0;
  local_c8[0x17] = 0;
  local_c8[0x10] = 0;
  local_c8[0x11] = 0;
  local_c8[0x12] = 0;
  local_c8[0x13] = 0;
  local_c8[0xc] = 0;
  local_c8[0xd] = 0;
  local_c8[0xe] = 0;
  local_c8[0xf] = 0;
  local_c8[8] = 0;
  local_c8[9] = 0;
  local_c8[10] = 0;
  local_c8[0xb] = 0;
  local_c8[4] = 0;
  local_c8[5] = 0;
  local_c8[6] = 0;
  local_c8[7] = 0;
  local_c8[0] = 0;
  local_c8[1] = 0;
  local_c8[2] = 0;
  local_c8[3] = 0;
  uVar3 = (ulonglong)*(ushort *)(param_1 + 0xf4);
  if (*(ushort *)(param_1 + 0xf4) == 0) {
    bVar1 = true;
  }
  else {
    uVar7 = 0;
    bVar1 = false;
    do {
      iVar2 = *(int *)(*(longlong *)(param_1 + 0xf8) + uVar7 * 0x10);
      if (iVar2 == 0x63767420) {
        bVar1 = true;
        lVar4 = 0;
LAB_1801f9838:
        piVar8 = &DAT_180337934 + lVar4 * 2;
        iVar2 = 0;
        lVar4 = 0;
        do {
          if (*(int *)(*(longlong *)(param_1 + 0xf8) + 0xc + uVar7 * 0x10) == *piVar8) {
            if (iVar2 == 0) {
              iVar2 = FUN_1801f9971(param_1,uVar7 & 0xffffffff);
            }
            iVar6 = local_c8[lVar4];
            if (piVar8[-1] == iVar2) {
              iVar6 = iVar6 + 1;
              local_c8[lVar4] = iVar6;
            }
            if (iVar6 == 3) goto LAB_1801f98d9;
          }
          lVar4 = lVar4 + 1;
          piVar8 = piVar8 + 6;
        } while (lVar4 != 0x1f);
        uVar3 = (ulonglong)*(ushort *)(param_1 + 0xf4);
      }
      else {
        if (iVar2 == 0x70726570) {
          lVar4 = 2;
          goto LAB_1801f9838;
        }
        if (iVar2 == 0x6670676d) {
          lVar4 = 1;
          goto LAB_1801f9838;
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar3);
    bVar1 = !bVar1;
  }
  lVar4 = 0;
  do {
    iVar2 = local_c8[lVar4];
    if ((int)lVar4 - 0x10U < 0xc && bVar1) {
      iVar2 = iVar2 + 1;
      local_c8[lVar4] = iVar2;
    }
    if (iVar2 == 3) goto LAB_1801f98d9;
    lVar4 = lVar4 + 1;
  } while (lVar4 != 0x1f);
  uVar5 = 0;
LAB_1801f98db:
  if (DAT_180402640 == (local_40 ^ (ulonglong)auStack_e8)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_40 ^ (ulonglong)auStack_e8);
LAB_1801f98d9:
  uVar5 = 1;
  goto LAB_1801f98db;
}

