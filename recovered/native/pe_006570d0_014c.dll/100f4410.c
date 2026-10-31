/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f4410 */

void __fastcall FUN_100f4410(int *param_1)

{
  undefined4 local_8;
  uint local_4;
  
  local_4 = DAT_10388d00 ^ (uint)&local_8;
  if ((*param_1 != 0) && (((char)param_1[1] != '\x01' || (*(char *)(*param_1 + 0x6c) != '\x01')))) {
    local_8 = 1;
    FUN_100f4bd2(&local_8,0);
    if (DAT_10388d00 == (local_4 ^ (uint)&local_8)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_100f2ce8(4);
}

