/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c6fd4 */

void FUN_101c6fd4(int param_1,undefined4 param_2,int param_3)

{
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  uint local_c;
  
  local_c = DAT_10388d00 ^ (uint)&local_1c;
  if ((param_1 != 0) && (*(int *)(param_1 + 0x48) == 0x6f75746c)) {
    local_1c = 0x10000;
    local_14 = -param_3;
    local_18 = param_2;
    local_10 = 0x10000;
    FUN_101c17d8(param_1 + 0x6c,&local_1c);
  }
  if (DAT_10388d00 == (local_c ^ (uint)&local_1c)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

