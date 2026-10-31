/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1017afb6 */

undefined4 * __fastcall FUN_1017afb6(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_18;
  param_1[4] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = FUN_10013d2e("n");
  local_18 = 0;
  FUN_100561d8(uVar1,&local_18);
  *param_1 = local_18;
  uVar1 = FUN_10013d2e(&DAT_10330822);
  local_18 = 0;
  FUN_100e1fe0(uVar1,&local_18);
  param_1[1] = local_18;
  uVar1 = FUN_10013d2e(&DAT_103303ad);
  local_18 = 0;
  FUN_100e1fe0(uVar1,&local_18);
  param_1[2] = local_18;
  uVar1 = FUN_10013d2e("w");
  local_18 = 0;
  FUN_100e1fe0(uVar1,&local_18);
  param_1[3] = local_18;
  uVar1 = FUN_10013d2e(&DAT_1033750d);
  local_18 = 0;
  FUN_100e1fe0(uVar1,&local_18);
  param_1[4] = local_18;
  if (DAT_10388d00 == (local_14 ^ (uint)&local_18)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

