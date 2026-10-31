/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800d0420 */

void FUN_1800d0420(void)

{
  longlong local_28;
  int local_20 [2];
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_18 = FUN_180239630(1);
  local_28 = FUN_18027d8f8(0,0,FUN_1800d1122,local_18,0,local_20);
  if (local_28 == 0) {
    local_20[0] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_18023e720(6);
  }
  FUN_180021bf6(&local_28);
  if (local_20[0] == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_18028c2e0();
}

