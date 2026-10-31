/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10113192 */

void __thiscall FUN_10113192(int param_1,float *param_2)

{
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  uint local_8;
  
  local_8 = DAT_10388d00 ^ (uint)&local_18;
  fStack_10 = (float)*(undefined8 *)(param_1 + 0x154);
  local_18 = *param_2 - fStack_10;
  fStack_c = (float)((ulonglong)*(undefined8 *)(param_1 + 0x154) >> 0x20);
  fStack_14 = param_2[1] - fStack_c;
  fStack_10 = param_2[2] - fStack_10;
  fStack_c = param_2[3] - fStack_c;
  FUN_100fa691(&local_18,0x10,
               *(undefined4 *)(*(int *)(param_1 + 0x140) + -4 + *(int *)(param_1 + 0x138) * 4));
  if (DAT_10388d00 == (local_8 ^ (uint)&local_18)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

