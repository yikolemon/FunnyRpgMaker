/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1012a1ea */

void __fastcall FUN_1012a1ea(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined8 local_1c;
  int local_14;
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)&local_1c;
  FUN_1012b343();
  local_14 = 0;
  local_1c = 0;
  FUN_1012b524();
  *(int *)(param_1 + 0x80) = (int)local_1c;
  puVar10 = (undefined4 *)0x0;
  if (local_14 == 1) {
    puVar10 = local_1c._4_4_;
  }
  *(undefined4 **)(param_1 + 0x84) = puVar10;
  *(int *)(param_1 + 0x88) = local_14;
  iVar9 = (int)local_1c;
  if (local_1c._4_4_ == (undefined4 *)0x0 || *(int *)(param_1 + 0x98) != 0) {
    if (local_1c._4_4_ == (undefined4 *)0x0) goto LAB_1012a2be;
  }
  else {
    *(undefined4 *)(param_1 + 0x98) = *local_1c._4_4_;
  }
  iVar11 = *(int *)local_1c._4_4_[0xb];
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(iVar11 + 0x38);
  uVar2 = *(undefined4 *)(iVar11 + 0x18);
  uVar3 = *(undefined4 *)(iVar11 + 0x1c);
  uVar4 = *(undefined4 *)(iVar11 + 0x20);
  uVar5 = *(undefined4 *)(iVar11 + 0x24);
  uVar6 = *(undefined4 *)(iVar11 + 0x2c);
  uVar7 = *(undefined4 *)(iVar11 + 0x30);
  uVar8 = *(undefined4 *)(iVar11 + 0x34);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(iVar11 + 0x28);
  *(undefined4 *)(param_1 + 0x68) = uVar6;
  *(undefined4 *)(param_1 + 0x6c) = uVar7;
  *(undefined4 *)(param_1 + 0x70) = uVar8;
  *(undefined4 *)(param_1 + 0x54) = uVar2;
  *(undefined4 *)(param_1 + 0x58) = uVar3;
  *(undefined4 *)(param_1 + 0x5c) = uVar4;
  *(undefined4 *)(param_1 + 0x60) = uVar5;
  if (1 < (int)local_1c._4_4_[9]) {
    iVar11 = 1;
    do {
      iVar1 = *(int *)(local_1c._4_4_[0xb] + iVar11 * 4);
      if (*(char *)(iVar1 + 0x35) == '\0') {
        *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(iVar1 + 0x38);
        uVar2 = *(undefined4 *)(iVar1 + 0x18);
        uVar3 = *(undefined4 *)(iVar1 + 0x1c);
        uVar4 = *(undefined4 *)(iVar1 + 0x20);
        uVar5 = *(undefined4 *)(iVar1 + 0x24);
        uVar6 = *(undefined4 *)(iVar1 + 0x2c);
        uVar7 = *(undefined4 *)(iVar1 + 0x30);
        uVar8 = *(undefined4 *)(iVar1 + 0x34);
        *(undefined4 *)(param_1 + 100) = *(undefined4 *)(iVar1 + 0x28);
        *(undefined4 *)(param_1 + 0x68) = uVar6;
        *(undefined4 *)(param_1 + 0x6c) = uVar7;
        *(undefined4 *)(param_1 + 0x70) = uVar8;
        *(undefined4 *)(param_1 + 0x54) = uVar2;
        *(undefined4 *)(param_1 + 0x58) = uVar3;
        *(undefined4 *)(param_1 + 0x5c) = uVar4;
        *(undefined4 *)(param_1 + 0x60) = uVar5;
        break;
      }
      iVar11 = iVar11 + 1;
    } while (local_1c._4_4_[9] != iVar11);
  }
LAB_1012a2be:
  for (; iVar9 != 0; iVar9 = *(int *)(iVar9 + 0x18)) {
    *(byte *)(iVar9 + 0xac) = *(byte *)(iVar9 + 0xac) | 0x20;
  }
  if (DAT_10388d00 != (local_10 ^ (uint)&local_1c)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return;
}

