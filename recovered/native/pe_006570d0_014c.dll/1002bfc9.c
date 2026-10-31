/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1002bfc9 */

void FUN_1002bfc9(int param_1,int param_2,uint *param_3,undefined4 param_4,undefined4 param_5)

{
  int extraout_EDX;
  undefined1 auStack_18 [3];
  undefined1 local_15;
  undefined1 local_14 [12];
  uint local_8;
  
  local_8 = DAT_10388d00 ^ (uint)auStack_18;
  if (param_1 + 1 == param_2) {
    local_15 = 1;
    FUN_10025774();
                    /* WARNING: Subroutine does not return */
    FUN_102586e0(local_14,&DAT_103607ac);
  }
  FUN_1002c120(param_1 + 1,param_2,param_3 + 3,param_4,param_5);
  *param_3 = extraout_EDX << 8 | *param_3 & 0xfffffcff;
  if (DAT_10388d00 != (local_8 ^ (uint)auStack_18)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return;
}

