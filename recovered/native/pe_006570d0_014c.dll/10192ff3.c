/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10192ff3 */

void __fastcall FUN_10192ff3(int param_1)

{
  undefined4 local_10;
  uint local_c;
  
  local_c = DAT_10388d00 ^ (uint)&local_10;
  if ((DAT_10301410 <= *(float *)(param_1 + 0x10)) || ((*(byte *)(param_1 + 0x3f) & 0x10) != 0)) {
    local_10 = 0;
    FUN_10192d39(&local_10);
  }
  else {
    FUN_10192d39(0);
  }
  if (DAT_10388d00 != (local_c ^ (uint)&local_10)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return;
}

