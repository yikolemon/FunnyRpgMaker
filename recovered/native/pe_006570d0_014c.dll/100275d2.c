/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100275d2 */

undefined4 * FUN_100275d2(undefined4 *param_1,undefined4 param_2,int param_3,uint *param_4)

{
  uint uVar1;
  undefined1 auStack_18 [3];
  undefined1 local_15;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)auStack_18;
  uVar1 = *param_4 >> 0xf & 7;
  if (uVar1 == 1) {
    local_15 = (undefined1)param_4[1];
    FUN_1002765b(param_1,param_2,param_3,&local_15);
  }
  else {
    if (param_3 != 0) {
      do {
        FUN_1001909c(param_4 + 1,uVar1 + (int)(param_4 + 1));
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
    *param_1 = param_2;
  }
  if (DAT_10388d00 == (local_14 ^ (uint)auStack_18)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

