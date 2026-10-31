/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10102c8c */

void __thiscall FUN_10102c8c(int param_1,undefined8 *param_2)

{
  undefined8 local_10;
  uint local_8;
  
  local_8 = DAT_10388d00 ^ (uint)&local_10;
  local_10 = CONCAT44((float)((ulonglong)*param_2 >> 0x20) -
                      (float)((ulonglong)*(undefined8 *)(param_1 + 0x154) >> 0x20),
                      (float)*param_2 - (float)*(undefined8 *)(param_1 + 0x154));
  FUN_100fa691(&local_10,8,
               *(undefined4 *)(*(int *)(param_1 + 0x140) + -4 + *(int *)(param_1 + 0x138) * 4));
  if (DAT_10388d00 == (local_8 ^ (uint)&local_10)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

