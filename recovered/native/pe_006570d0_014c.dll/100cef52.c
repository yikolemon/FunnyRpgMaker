/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100cef52 */

undefined4 FUN_100cef52(void)

{
  int iVar1;
  undefined4 uVar2;
  int local_c;
  uint local_8;
  
  local_8 = DAT_10388d00 ^ (uint)&local_c;
  iVar1 = FUN_100ced7f(&DAT_10296df8,&local_c);
  if (local_c == 0 || iVar1 == 0) {
    SetLastError(0x7e);
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_100cedd7(iVar1,local_c);
  }
  if (DAT_10388d00 == (local_8 ^ (uint)&local_c)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

