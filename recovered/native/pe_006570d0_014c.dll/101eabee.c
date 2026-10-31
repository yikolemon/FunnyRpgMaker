/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101eabee */

void __fastcall FUN_101eabee(int param_1)

{
  undefined4 uVar1;
  int local_10;
  uint local_c;
  
  local_c = DAT_10388d00 ^ (uint)&local_10;
  if ((*(int *)(param_1 + 0x134) == 3) && (*(int *)(param_1 + 0x154) != *(int *)(param_1 + 0x15c)))
  {
    uVar1 = FUN_101c2a50(*(undefined4 *)(param_1 + 8),4,*(undefined4 *)(param_1 + 0x158),
                         *(undefined4 *)(param_1 + 0x150),*(int *)(param_1 + 0x15c),&local_10);
    *(undefined4 *)(param_1 + 0x15c) = uVar1;
    *(int *)(param_1 + 0x10) = local_10;
    if (local_10 == 0) {
      *(int *)(param_1 + 0x158) = *(int *)(param_1 + 0x150);
      FUN_1025b2d0(uVar1,*(undefined4 *)(param_1 + 0x154),*(int *)(param_1 + 0x150) << 2);
      *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(param_1 + 0x15c);
    }
  }
  if (DAT_10388d00 == (local_c ^ (uint)&local_10)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

