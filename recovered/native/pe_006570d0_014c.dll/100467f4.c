/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100467f4 */

void __fastcall FUN_100467f4(int param_1)

{
  char *local_c;
  undefined1 local_8;
  uint local_4;
  
  local_4 = DAT_10388d00 ^ (uint)&local_c;
  if ((*(byte *)(param_1 + 0xc) < 0xb) && ((0x47eU >> (*(byte *)(param_1 + 0xc) & 0x1f) & 1) != 0))
  {
    local_c = "Precision not allowed for this argument type.";
                    /* WARNING: Subroutine does not return */
    FUN_10006198();
  }
  local_c = (char *)CONCAT31(local_c._1_3_,local_8);
  FUN_10046852();
  if (DAT_10388d00 == (local_4 ^ (uint)&local_c)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

