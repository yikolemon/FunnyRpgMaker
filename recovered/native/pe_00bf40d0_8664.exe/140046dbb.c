/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140046dbb */

undefined8 FUN_140046dbb(longlong param_1)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  undefined4 extraout_var;
  undefined7 uVar6;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong uVar7;
  int *piVar8;
  undefined1 auStack_e8 [32];
  int local_c8 [34];
  ulonglong local_40;
  
  local_40 = DAT_14012ea80 ^ (ulonglong)auStack_e8;
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
  uVar4 = (ulonglong)*(ushort *)(param_1 + 0xf4);
  if (*(ushort *)(param_1 + 0xf4) == 0) {
    uVar6 = 0;
    bVar1 = true;
  }
  else {
    uVar7 = 0;
    bVar1 = false;
    do {
      iVar2 = *(int *)(*(longlong *)(param_1 + 0xf8) + uVar7 * 0x10);
      if (iVar2 == 0x63767420) {
        bVar1 = true;
        lVar3 = 0;
LAB_140046e6c:
        piVar8 = &DAT_1400f4a54 + lVar3 * 2;
        uVar4 = 0;
        lVar3 = 0;
        do {
          if (*(int *)(*(longlong *)(param_1 + 0xf8) + 0xc + uVar7 * 0x10) == *piVar8) {
            if ((int)uVar4 == 0) {
              iVar2 = FUN_140046fa5(param_1,(ushort)uVar7);
              uVar4 = CONCAT44(extraout_var,iVar2);
            }
            iVar2 = local_c8[lVar3];
            if (piVar8[-1] == (int)uVar4) {
              iVar2 = iVar2 + 1;
              local_c8[lVar3] = iVar2;
            }
            if (iVar2 == 3) goto LAB_140046f0d;
          }
          lVar3 = lVar3 + 1;
          piVar8 = piVar8 + 6;
        } while (lVar3 != 0x1f);
        uVar4 = (ulonglong)*(ushort *)(param_1 + 0xf4);
      }
      else {
        if (iVar2 == 0x70726570) {
          lVar3 = 2;
          goto LAB_140046e6c;
        }
        if (iVar2 == 0x6670676d) {
          lVar3 = 1;
          goto LAB_140046e6c;
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar4);
    bVar1 = !bVar1;
    uVar6 = (undefined7)(uVar4 >> 8);
  }
  lVar3 = 0;
  uVar4 = CONCAT71(uVar6,bVar1) ^ 1;
  do {
    iVar2 = local_c8[lVar3];
    if ((int)lVar3 - 0x10U < 0xc && (char)uVar4 == '\0') {
      iVar2 = iVar2 + 1;
      local_c8[lVar3] = iVar2;
    }
    if (iVar2 == 3) goto LAB_140046f0d;
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x1f);
  uVar5 = 0;
LAB_140046f0f:
  if (DAT_14012ea80 == (local_40 ^ (ulonglong)auStack_e8)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_40 ^ (ulonglong)auStack_e8);
LAB_140046f0d:
  uVar5 = CONCAT71((int7)(uVar4 >> 8),1);
  goto LAB_140046f0f;
}

