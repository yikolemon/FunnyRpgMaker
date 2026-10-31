/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100d2010 */

undefined4 FUN_100d2010(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined1 auStack_24 [2];
  undefined1 local_22 [22];
  uint local_c;
  
  local_c = DAT_10388d00 ^ (uint)auStack_24;
  if (param_3 < 0) {
    iVar1 = FUN_100d2089(&local_c,-param_2,-(uint)(param_2 != 0) - param_3);
    *(undefined1 *)(iVar1 + -1) = 0x2d;
    iVar1 = iVar1 + -1;
  }
  else {
    iVar1 = FUN_100d2089(&local_c,param_2,param_3);
  }
  FUN_10017e26(iVar1,&local_c,local_22);
  if (DAT_10388d00 == (local_c ^ (uint)auStack_24)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

