/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1002c05a */

int __thiscall FUN_1002c05a(undefined4 *param_1,byte param_2,uint param_3)

{
  undefined1 auStack_18 [3];
  undefined1 local_15;
  undefined1 local_14 [12];
  uint local_8;
  
  local_8 = DAT_10388d00 ^ (uint)auStack_18;
  if ((param_3 >> (param_1[2] & 0x1f) & 1) == 0) {
    local_15 = 1;
    FUN_10025774();
                    /* WARNING: Subroutine does not return */
    FUN_102586e0(local_14,&DAT_103607ac);
  }
  *(uint *)param_1[1] = (uint)param_2 | *(uint *)param_1[1] & 0xfffffff8;
  if (DAT_10388d00 != (local_8 ^ (uint)auStack_18)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return *(int *)*param_1 + 1;
}

