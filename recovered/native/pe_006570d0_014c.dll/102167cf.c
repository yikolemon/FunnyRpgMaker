/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102167cf */

int FUN_102167cf(int param_1,short param_2,undefined4 *param_3)

{
  uint uVar1;
  short *psVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  code *pcVar10;
  uint local_30;
  undefined4 local_2c;
  int local_28;
  uint local_24;
  undefined4 local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_30;
  uVar7 = *(undefined4 *)(param_1 + 100);
  local_18 = 0;
  if (*(ushort *)(param_1 + 0x154) == 0) {
    uVar9 = 0;
    goto LAB_102169e6;
  }
  local_28 = *(int *)(param_1 + 0x164);
  psVar2 = (short *)(local_28 + 8);
  uVar4 = 0xffffffff;
  uVar8 = 0;
  local_20 = 0;
  local_30 = 0xffffffff;
  local_1c = 0xffffffff;
  uVar5 = uVar4;
  do {
    uVar1 = local_1c;
    if ((psVar2[-1] == param_2) && (*psVar2 != 0)) {
      switch(psVar2[-4]) {
      case 0:
      case 2:
        uVar5 = uVar8;
        break;
      case 1:
        uVar1 = uVar8;
        if ((psVar2[-2] != 0) && (uVar1 = local_1c, psVar2[-3] == 0)) {
          uVar4 = uVar8;
        }
        break;
      case 3:
        if ((((local_30 == 0xffffffff) || ((psVar2[-2] & 0x3ffU) == 9)) &&
            ((ushort)psVar2[-3] < 0xb)) &&
           (local_24 = uVar5, (0x403U >> ((ushort)psVar2[-3] & 0x1f) & 1) != 0)) {
          local_20 = CONCAT31((int3)(((ushort)psVar2[-2] & 0x3ff) >> 8),
                              (short)((ushort)psVar2[-2] & 0x3ff) == 9);
          local_30 = uVar8;
        }
      }
    }
    local_1c = uVar1;
    uVar8 = uVar8 + 1;
    psVar2 = psVar2 + 10;
  } while (*(ushort *)(param_1 + 0x154) != uVar8);
  if (-1 < (int)local_1c) {
    uVar4 = local_1c;
  }
  local_2c = uVar7;
  if ((int)local_30 < 0) {
    pcVar10 = FUN_10219ce9;
    if ((-1 < (int)uVar4) || (pcVar10 = FUN_10219c4d, uVar4 = uVar5, -1 < (int)uVar5)) {
LAB_10216933:
      if (local_28 != 0) goto LAB_1021693d;
    }
    uVar9 = 0;
    goto LAB_102169e6;
  }
  if (-1 < (int)uVar4) {
    pcVar10 = FUN_10219ce9;
    if ((char)local_20 == '\0') goto LAB_10216933;
  }
  uVar4 = (uint)*(ushort *)(local_28 + 2 + local_30 * 0x14);
  uVar9 = 0;
  if ((10 < uVar4) || ((0x403U >> (uVar4 & 0x1f) & 1) == 0)) goto LAB_102169e6;
  pcVar10 = FUN_10219c4d;
  uVar4 = local_30;
LAB_1021693d:
  iVar6 = local_28 + uVar4 * 0x14;
  if (*(int *)(iVar6 + 0x10) == 0) {
    local_30 = *(uint *)(param_1 + 0x170);
    uVar9 = 0;
    uVar3 = FUN_101c2a50(uVar7,1,0,*(undefined2 *)(iVar6 + 8),0,&local_18);
    uVar4 = local_30;
    *(undefined4 *)(iVar6 + 0x10) = uVar3;
    if (local_18 == 0) {
      local_18 = FUN_101c461e(local_30,*(undefined4 *)(iVar6 + 0xc));
      uVar3 = *(undefined4 *)(iVar6 + 0x10);
      uVar7 = local_2c;
      if (local_18 == 0) {
        local_18 = FUN_101c4659(uVar4,uVar3,*(undefined2 *)(iVar6 + 8));
        if (local_18 == 0) goto LAB_10216947;
        uVar3 = *(undefined4 *)(iVar6 + 0x10);
        uVar7 = local_2c;
      }
    }
    FUN_101c0017(uVar7,uVar3);
    *(undefined4 *)(iVar6 + 0x10) = 0;
    *(undefined2 *)(iVar6 + 8) = 0;
  }
  else {
LAB_10216947:
    uVar9 = (*pcVar10)(iVar6,local_2c);
  }
LAB_102169e6:
  *param_3 = uVar9;
  if (DAT_10388d00 != (local_14 ^ (uint)&local_30)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return local_18;
}

