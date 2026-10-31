/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100a871a */

int FUN_100a871a(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  char local_26c [4];
  int local_268;
  undefined1 local_264 [592];
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)local_26c;
  iVar4 = *param_1;
  FUN_100a8836(local_26c);
  if (local_268 == 0) {
    if (local_26c[0] == '\x01') {
      FUN_100a8af4(iVar4 + 0x38);
      local_268 = FUN_1006bf4c(iVar4 + 0x20,*(undefined4 *)(iVar4 + 0x4c),iVar4 + 0x38,local_264);
    }
    else {
      local_268 = FUN_100a8942(local_264);
    }
    *(undefined1 *)(iVar4 + 0x50) = 1;
    while (local_268 == 0x12) {
      iVar1 = *(int *)(iVar4 + 0x44);
      if (*(int *)(iVar4 + 0x40) == iVar1) {
        local_268 = 0;
        goto LAB_100a874b;
      }
      uVar2 = *(undefined4 *)(iVar1 + -4);
      *(undefined4 *)(iVar1 + -4) = 0xffffffff;
      uVar3 = *(undefined4 *)(iVar4 + 0x38);
      *(undefined4 *)(iVar4 + 0x38) = uVar2;
      FUN_10228d00(uVar3);
      FUN_10228d00(*(undefined4 *)(*(int *)(iVar4 + 0x44) + -4));
      *(int *)(iVar4 + 0x44) = *(int *)(iVar4 + 0x44) + -4;
      FUN_100a8968();
      local_268 = FUN_100a8942(local_264);
    }
    if (local_268 == 0) {
      FUN_1006c2ce(local_264);
      iVar4 = 0;
      goto LAB_100a8756;
    }
  }
LAB_100a874b:
  FUN_1006c79a();
  iVar4 = local_268;
LAB_100a8756:
  if (DAT_10388d00 == (local_14 ^ (uint)local_26c)) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

