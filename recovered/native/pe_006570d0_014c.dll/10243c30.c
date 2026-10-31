/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10243c30 */

void FUN_10243c30(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  undefined1 local_20 [16];
  int local_10;
  uint local_8;
  
  local_8 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  FUN_10243a90(local_20,param_1,param_2);
  uVar1 = 0;
  if (local_10 * 2 != 0) {
    do {
      uVar1 = uVar1 + 1;
    } while (uVar1 < (uint)(local_10 * 2));
  }
  FUN_102363f0();
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

