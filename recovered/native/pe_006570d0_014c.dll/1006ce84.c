/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1006ce84 */

void __thiscall FUN_1006ce84(int param_1,undefined8 *param_2)

{
  uint local_18;
  undefined4 uStack_14;
  int local_10;
  uint local_c;
  
  local_c = DAT_10388d00 ^ (uint)&local_18;
  FUN_1006c628(&local_18,3);
  if ((local_10 == 0) || ((local_18 & 0xfffffff7) == 1)) {
    *param_2 = CONCAT44(uStack_14,local_18);
    if (DAT_10388d00 == (local_c ^ (uint)&local_18)) {
      return;
    }
  }
  else {
    FUN_1006cded("directory_entry::status",local_10,param_1 + 0x20);
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

