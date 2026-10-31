/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10118619 */

void FUN_10118619(undefined4 param_1)

{
  int iVar1;
  int local_c;
  uint local_8;
  
  local_8 = DAT_10388d00 ^ (uint)&local_c;
  local_c = 0;
  iVar1 = FUN_100fa997(param_1,&DAT_1033b508,&local_c,0);
  if (iVar1 != 0) {
    if (local_c != 0) {
      FUN_10118683(iVar1,local_c);
    }
    FUN_100fa2cb(iVar1);
  }
  if (DAT_10388d00 == (local_8 ^ (uint)&local_c)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

