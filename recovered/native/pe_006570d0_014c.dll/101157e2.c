/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101157e2 */

void FUN_101157e2(undefined4 param_1)

{
  undefined1 auStack_10 [8];
  uint local_8;
  
  local_8 = DAT_10388d00 ^ (uint)auStack_10;
  FUN_1011278b(auStack_10,*(undefined4 *)(DAT_1039d74c + 0x14cc),DAT_1039d74c + 0x1e9c,param_1);
  if (DAT_10388d00 == (local_8 ^ (uint)auStack_10)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

