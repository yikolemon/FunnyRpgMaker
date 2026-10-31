/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180060361 */

void FUN_180060361(void)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_180402640 ^ (ulonglong)auStack_38;
  if (DAT_180417a18 == 0) {
    do {
      local_18 = 0x5dc;
      FUN_1800c50db(&local_18);
      FUN_1800c512f();
    } while (DAT_180417a18 == 0);
  }
  if (DAT_180402640 == (local_10 ^ (ulonglong)auStack_38)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_10 ^ (ulonglong)auStack_38);
}

