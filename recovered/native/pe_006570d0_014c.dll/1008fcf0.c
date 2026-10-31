/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1008fcf0 */

void __fastcall FUN_1008fcf0(int param_1)

{
  uint local_c;
  
  local_c = DAT_10388d00 ^ (uint)&local_c;
  FUN_1008fd3c(&stack0x00000004,&stack0x00000006,*(uint *)(param_1 + 0x74) >> 8 & 1);
  if (DAT_10388d00 == (local_c ^ (uint)&local_c)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

