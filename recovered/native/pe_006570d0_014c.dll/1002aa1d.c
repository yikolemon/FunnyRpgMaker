/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1002aa1d */

/* WARNING: Removing unreachable block (ram,0x1002aa64) */

undefined4 FUN_1002aa1d(undefined4 param_1,undefined4 param_2,char *param_3)

{
  size_t sVar1;
  undefined1 auStack_20 [3];
  undefined1 local_1d;
  undefined1 local_1c [12];
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)auStack_20;
  if (param_3 == (char *)0x0) {
    local_1d = 1;
    FUN_10025774();
                    /* WARNING: Subroutine does not return */
    FUN_102586e0(local_1c,&DAT_103607ac);
  }
  sVar1 = _strlen(param_3);
  FUN_100253ad(param_1,param_3,param_3 + sVar1,param_2);
  if (DAT_10388d00 != (local_10 ^ (uint)auStack_20)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return param_1;
}

