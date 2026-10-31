/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800d5075 */

void FUN_1800d5075(void)

{
  undefined1 local_28 [8];
  int local_20;
  undefined8 *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FUN_180021d02(local_28,FUN_18015b1eb);
  FUN_180021bf6(local_28);
  if (local_20 == 0) {
    local_18 = (undefined8 *)FUN_180239630(8);
    *local_18 = RpgMakerGameUI::vftable;
    FUN_1800e239d(local_18);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_18028c2e0();
}

