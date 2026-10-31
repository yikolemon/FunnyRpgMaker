/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1002b610 */

void __thiscall FUN_1002b610(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 auStack_18 [3];
  undefined1 local_15;
  undefined1 local_14 [12];
  uint local_8;
  
  local_8 = DAT_10388d00 ^ (uint)auStack_18;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  iVar1 = FUN_1002b688(param_2,param_3);
  if (iVar1 < 0) {
    local_15 = 1;
    FUN_10025774();
                    /* WARNING: Subroutine does not return */
    FUN_102586e0(local_14,&DAT_103607ac);
  }
  if (DAT_10388d00 != (local_8 ^ (uint)auStack_18)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return;
}

