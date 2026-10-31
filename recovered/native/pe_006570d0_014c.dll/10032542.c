/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10032542 */

undefined4 FUN_10032542(undefined4 param_1,undefined4 param_2,char *param_3,uint *param_4)

{
  size_t sVar1;
  undefined1 auStack_24 [3];
  undefined1 local_21;
  undefined1 local_20 [12];
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)auStack_24;
  if ((*param_4 & 7) == 3) {
    FUN_1002aaaa(param_1,param_2,param_3,param_4);
  }
  else {
    if (param_3 == (char *)0x0) {
      local_21 = 1;
      FUN_10025774();
                    /* WARNING: Subroutine does not return */
      FUN_102586e0(local_20,&DAT_103607ac);
    }
    sVar1 = _strlen(param_3);
    FUN_100325e4(param_1,param_2,param_3,sVar1,param_4);
  }
  if (DAT_10388d00 != (local_14 ^ (uint)auStack_24)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return param_1;
}

