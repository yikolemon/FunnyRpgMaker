/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101e2dda */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_101e2dda(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint local_40;
  uint local_3c;
  int local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  int local_28;
  int local_24;
  undefined8 local_20;
  uint local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_40;
  uVar4 = *(uint *)(param_1 + 0x204);
  if (uVar4 != 0) {
    if (uVar4 == 7) goto LAB_101e2fba;
    *(uint *)(param_1 + 0x204) = uVar4 | 1 << (*(byte *)(param_1 + 0x148) & 1);
  }
  if (*(short *)(param_1 + 0x7e) != 0) {
    local_24 = *(int *)(param_1 + 0x80);
    if ((*(byte *)(param_1 + 0x148) & 1) == 0) {
      local_24 = local_24 + 4;
      local_20 = CONCAT44((int)((ulonglong)*(undefined8 *)(param_1 + 0x84) >> 0x20) + _UNK_1030e964,
                          (int)*(undefined8 *)(param_1 + 0x84) + _DAT_1030e960);
      local_30 = 0x10;
    }
    else {
      local_20 = *(undefined8 *)(param_1 + 0x84);
      local_30 = 8;
    }
    local_18 = (uint)*(ushort *)(param_1 + 0x7c);
    uVar4 = 0;
    uVar6 = 0;
    local_38 = param_1;
LAB_101e2e74:
    uVar2 = (uint)*(ushort *)(*(int *)(param_1 + 0x90) + uVar6 * 2) -
            (uint)*(ushort *)(param_1 + 0x94);
    local_40 = *(ushort *)(param_1 + 0x7c) - 1;
    if (uVar2 < *(ushort *)(param_1 + 0x7c)) {
      local_40 = uVar2;
    }
    if (uVar4 <= local_40) {
      iVar3 = *(int *)(param_1 + 0x8c);
      iVar7 = 0;
      iVar5 = 1;
      uVar2 = uVar4;
      while (local_3c = uVar6, (local_30 & *(byte *)(iVar3 + uVar4)) == 0) {
        iVar1 = uVar4 + iVar7;
        iVar7 = iVar7 + 1;
        iVar5 = iVar5 + -1;
        iVar3 = iVar3 + 1;
        uVar2 = uVar2 + 1;
        if (local_40 < iVar1 + 1U) goto code_r0x101e2ecb;
      }
      uVar6 = uVar4 + iVar7 + 1;
      iVar3 = uVar4 + iVar7;
      local_34 = uVar4;
      local_28 = iVar3;
      if (local_40 < uVar6) goto LAB_101e2f81;
      do {
        uVar6 = uVar2;
        if ((local_30 & *(byte *)(*(int *)(param_1 + 0x8c) + 1 + uVar6)) != 0) {
          FUN_101ecb71(uVar6,iVar3,uVar6 + 1);
          iVar3 = uVar6 + 1;
          param_1 = local_38;
        }
        iVar1 = local_28;
        uVar2 = uVar6 + 1;
      } while (uVar6 + 2 <= local_40);
      uVar6 = uVar6 + 2;
      if ((local_34 - iVar3) + iVar7 == 0) {
LAB_101e2f81:
        FUN_101eccbe(local_40,local_28);
        param_1 = local_38;
        uVar4 = uVar6;
        uVar6 = local_3c;
      }
      else {
        local_2c = uVar6;
        FUN_101ecb71(local_40,iVar3,local_28);
        param_1 = local_38;
        uVar4 = local_2c;
        uVar6 = local_3c;
        if (iVar1 != 0) {
          FUN_101ecb71(local_34 - iVar5,iVar3,iVar1);
          param_1 = local_38;
          uVar4 = local_2c;
          uVar6 = local_3c;
        }
      }
    }
    goto LAB_101e2fa5;
  }
LAB_101e2fba:
  if (DAT_10388d00 != (local_14 ^ (uint)&local_40)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return;
code_r0x101e2ecb:
  uVar4 = uVar4 + iVar7;
LAB_101e2fa5:
  uVar6 = uVar6 + 1;
  if (*(ushort *)(param_1 + 0x7e) <= uVar6) goto LAB_101e2fba;
  goto LAB_101e2e74;
}

