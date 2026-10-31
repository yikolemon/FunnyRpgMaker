/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10206843 */

undefined4 __fastcall FUN_10206843(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_10 [4];
  uint local_c;
  
  local_c = DAT_10388d00 ^ (uint)local_10;
  param_2 = param_2 + 1;
  do {
    param_2 = param_2 + -1;
    if (param_2 < 1) goto LAB_10206887;
    iVar1 = FUN_10206611();
  } while (iVar1 != 0);
LAB_1020686a:
  uVar2 = 0xa0;
LAB_1020686f:
  if (DAT_10388d00 != (local_c ^ (uint)local_10)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return uVar2;
  while( true ) {
    iVar1 = FUN_10206656();
    uVar2 = 0;
    if ((iVar1 == 0x14) || (iVar1 == 0x11)) break;
LAB_10206887:
    iVar1 = FUN_10206611();
    if (iVar1 == 0) goto LAB_1020686a;
  }
  goto LAB_1020686f;
}

