/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100409da */

void FUN_100409da(int param_1)

{
  undefined1 auStack_28 [21];
  undefined1 local_13 [3];
  undefined4 local_10;
  uint local_c;
  
  local_c = DAT_10388d00 ^ (uint)auStack_28;
  if (0 < *(int *)(param_1 + 0x28)) {
    local_10 = FUN_1002472e(auStack_28,*(int *)(param_1 + 0x28),0x15);
    FUN_1001909c(local_10,local_13);
  }
  if (DAT_10388d00 == (local_c ^ (uint)auStack_28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

