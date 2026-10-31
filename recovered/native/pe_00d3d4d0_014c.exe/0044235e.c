/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0044235e */

void __fastcall FUN_0044235e(int param_1)

{
  uint *puVar1;
  int local_10;
  uint local_c;
  
  local_c = DAT_0050e8c0 ^ (uint)&local_10;
  if ((*(int *)(param_1 + 0x134) == 3) && (*(int *)(param_1 + 0x154) != *(int *)(param_1 + 0x15c)))
  {
    puVar1 = (uint *)FUN_0041efcd(*(int *)(param_1 + 8),4,*(uint *)(param_1 + 0x158),
                                  *(uint *)(param_1 + 0x150),*(int *)(param_1 + 0x15c),&local_10);
    *(uint **)(param_1 + 0x15c) = puVar1;
    *(int *)(param_1 + 0x10) = local_10;
    if (local_10 == 0) {
      *(int *)(param_1 + 0x158) = *(int *)(param_1 + 0x150);
      FUN_004878c0(puVar1,*(uint **)(param_1 + 0x154),*(int *)(param_1 + 0x150) << 2);
      *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(param_1 + 0x15c);
    }
  }
  if (DAT_0050e8c0 == (local_c ^ (uint)&local_10)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_c ^ (uint)&local_10);
}

