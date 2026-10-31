/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100762d6 */

undefined4 __thiscall
FUN_100762d6(int param_1,undefined4 param_2,int param_3,int param_4,int *param_5,int param_6,
            int param_7,int *param_8)

{
  int iVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_20;
  local_18 = 0;
  local_1c = 0;
  *param_5 = param_3;
  *param_8 = param_6;
  iVar1 = *param_5;
  if (iVar1 != param_4) {
    local_20 = 1;
    do {
      if (param_6 == param_7) goto LAB_10076368;
      iVar1 = FUN_1022d8f0(param_6,iVar1,param_4 - iVar1,&local_1c,param_1 + 8);
      if (iVar1 == 0) {
        iVar1 = 1;
      }
      else {
        if (iVar1 == -2) goto LAB_10076368;
        if (iVar1 == -1) {
          local_20 = 2;
          goto LAB_10076368;
        }
      }
      *param_5 = *param_5 + iVar1;
      param_6 = *param_8 + 2;
      *param_8 = param_6;
      iVar1 = *param_5;
    } while (iVar1 != param_4);
  }
  local_20 = 0;
LAB_10076368:
  if (DAT_10388d00 != (local_14 ^ (uint)&local_20)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return local_20;
}

