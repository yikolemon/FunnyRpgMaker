/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c0e8e */

undefined4 FUN_101c0e8e(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 local_14;
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)&local_14;
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 4) + 100);
  uVar1 = *(uint *)(*(int *)(param_1 + 0x9c) + 4);
  if ((uVar1 & 1) == 0) {
    *(uint *)(*(int *)(param_1 + 0x9c) + 4) = uVar1 | 1;
  }
  else {
    FUN_101c0017(uVar2,*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  uVar2 = FUN_101c00c3(uVar2,*(undefined4 *)(param_1 + 0x54),0,*(undefined4 *)(param_1 + 0x4c),0,
                       &local_14);
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  if (DAT_10388d00 == (local_10 ^ (uint)&local_14)) {
    return local_14;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

