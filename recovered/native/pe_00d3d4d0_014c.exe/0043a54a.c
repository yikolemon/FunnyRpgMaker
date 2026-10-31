/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0043a54a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0043a54a(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint local_40;
  uint local_3c;
  int local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  int local_24;
  undefined8 local_20;
  uint local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_40;
  uVar5 = *(uint *)(param_1 + 0x204);
  if (uVar5 != 0) {
    if (uVar5 == 7) goto LAB_0043a72a;
    *(uint *)(param_1 + 0x204) = uVar5 | 1 << (*(byte *)(param_1 + 0x148) & 1);
  }
  if (*(short *)(param_1 + 0x7e) != 0) {
    local_24 = *(int *)(param_1 + 0x80);
    if ((*(byte *)(param_1 + 0x148) & 1) == 0) {
      local_24 = local_24 + 4;
      local_20 = CONCAT44((int)((ulonglong)*(undefined8 *)(param_1 + 0x84) >> 0x20) + _UNK_004e2f04,
                          (int)*(undefined8 *)(param_1 + 0x84) + _DAT_004e2f00);
      local_30 = 0x10;
    }
    else {
      local_20 = *(undefined8 *)(param_1 + 0x84);
      local_30 = 8;
    }
    local_18 = (uint)*(ushort *)(param_1 + 0x7c);
    uVar5 = 0;
    uVar8 = 0;
    local_38 = param_1;
LAB_0043a5e4:
    uVar3 = (uint)*(ushort *)(*(int *)(param_1 + 0x90) + uVar8 * 2) -
            (uint)*(ushort *)(param_1 + 0x94);
    local_40 = *(ushort *)(param_1 + 0x7c) - 1;
    if (uVar3 < *(ushort *)(param_1 + 0x7c)) {
      local_40 = uVar3;
    }
    if (uVar5 <= local_40) {
      iVar4 = *(int *)(param_1 + 0x8c);
      iVar9 = 0;
      iVar7 = 1;
      uVar3 = uVar5;
      while (local_3c = uVar8, (local_30 & *(byte *)(iVar4 + uVar5)) == 0) {
        iVar1 = uVar5 + iVar9;
        iVar9 = iVar9 + 1;
        iVar7 = iVar7 + -1;
        iVar4 = iVar4 + 1;
        uVar3 = uVar3 + 1;
        if (local_40 < iVar1 + 1U) goto code_r0x0043a63b;
      }
      uVar8 = uVar5 + iVar9 + 1;
      uVar6 = uVar5 + iVar9;
      local_34 = uVar5;
      local_28 = uVar6;
      if (local_40 < uVar8) goto LAB_0043a6f1;
      do {
        uVar8 = uVar3;
        if ((local_30 & *(byte *)(*(int *)(param_1 + 0x8c) + 1 + uVar8)) != 0) {
          FUN_004442e6(&local_24,uVar6 + 1,uVar8,uVar6,uVar8 + 1);
          uVar6 = uVar8 + 1;
          param_1 = local_38;
        }
        uVar2 = local_28;
        uVar3 = uVar8 + 1;
      } while (uVar8 + 2 <= local_40);
      uVar8 = uVar8 + 2;
      if ((local_34 - uVar6) + iVar9 == 0) {
LAB_0043a6f1:
        FUN_00444433(&local_24,local_34,local_40,local_28);
        param_1 = local_38;
        uVar5 = uVar8;
        uVar8 = local_3c;
      }
      else {
        local_2c = uVar8;
        FUN_004442e6(&local_24,uVar6 + 1 & 0xffff,local_40,uVar6,local_28);
        param_1 = local_38;
        uVar5 = local_2c;
        uVar8 = local_3c;
        if (uVar2 != 0) {
          FUN_004442e6(&local_24,local_34,local_34 - iVar7,uVar6,uVar2);
          param_1 = local_38;
          uVar5 = local_2c;
          uVar8 = local_3c;
        }
      }
    }
    goto LAB_0043a715;
  }
LAB_0043a72a:
  if (DAT_0050e8c0 != (local_14 ^ (uint)&local_40)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&local_40);
  }
  return;
code_r0x0043a63b:
  uVar5 = uVar5 + iVar9;
LAB_0043a715:
  uVar8 = uVar8 + 1;
  if (*(ushort *)(param_1 + 0x7e) <= uVar8) goto LAB_0043a72a;
  goto LAB_0043a5e4;
}

