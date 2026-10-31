/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c5815 */

undefined4 FUN_101c5815(undefined4 param_1,int param_2,int param_3,int *param_4)

{
  undefined4 uVar1;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_18;
  uVar1 = FUN_101c21f6(param_1,param_3,&local_18);
  if (((param_3 != 0) && (param_2 != 0)) && (local_18 == 0)) {
    FUN_1025b2d0(uVar1,param_2,param_3);
  }
  *param_4 = local_18;
  if (DAT_10388d00 == (local_14 ^ (uint)&local_18)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

