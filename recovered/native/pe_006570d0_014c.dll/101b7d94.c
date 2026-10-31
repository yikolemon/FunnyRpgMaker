/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101b7d94 */

void FUN_101b7d94(void)

{
  undefined1 local_c [4];
  uint local_8;
  
  local_8 = DAT_10388d00 ^ (uint)local_c;
  thunk_FUN_10130d81("_IsEnabled",local_c,0x1000000);
  thunk_FUN_10130d81("_IsVisible",local_c,0x2000000);
  thunk_FUN_10130d81("_IsSorted",local_c,0x4000000);
  thunk_FUN_10130d81("_IsHovered",local_c,0x8000000);
  if (DAT_10388d00 == (local_8 ^ (uint)local_c)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

