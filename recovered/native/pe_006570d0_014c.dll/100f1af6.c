/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f1af6 */

void FUN_100f1af6(undefined4 param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)&local_10;
  while( true ) {
    piVar1 = (int *)FUN_10018d26(param_1);
    if (param_2 != *piVar1) break;
    FUN_102352f0(param_1,&param_2,4,0xffffffff);
  }
  if (DAT_10388d00 != (local_10 ^ (uint)&local_10)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return;
}

