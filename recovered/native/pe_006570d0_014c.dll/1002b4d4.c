/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1002b4d4 */

/* WARNING: Removing unreachable block (ram,0x1002b4ff) */

int __fastcall FUN_1002b4d4(int param_1)

{
  int iVar1;
  undefined1 auStack_18 [3];
  undefined1 local_15;
  undefined1 local_14 [12];
  uint local_8;
  
  local_8 = DAT_10388d00 ^ (uint)auStack_18;
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < 0) {
    local_15 = 1;
    FUN_10025774();
                    /* WARNING: Subroutine does not return */
    FUN_102586e0(local_14,&DAT_103607ac);
  }
  *(int *)(param_1 + 8) = iVar1 + 1;
  if (DAT_10388d00 != (local_8 ^ (uint)auStack_18)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return iVar1;
}

