/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10025309 */

undefined4 * FUN_10025309(undefined4 *param_1,int *param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  undefined1 auStack_20 [2];
  undefined1 auStack_1e [10];
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)auStack_20;
  iVar1 = param_2[1];
  uVar2 = iVar1 + param_4;
  if ((uint)param_2[2] < uVar2) {
    (*(code *)param_2[3])(param_2,uVar2);
    iVar1 = param_2[1];
    uVar2 = iVar1 + param_4;
    if (uVar2 <= (uint)param_2[2]) goto LAB_10025349;
  }
  else {
LAB_10025349:
    param_2[1] = uVar2;
    if (*param_2 != 0) {
      FUN_1002472e(*param_2 + iVar1,param_3,param_4);
      *param_1 = param_2;
      goto LAB_10025388;
    }
  }
  FUN_1002472e(auStack_1e,param_3,param_4);
  FUN_100253ad(param_1,auStack_1e,auStack_1e + param_4,param_2);
LAB_10025388:
  if (DAT_10388d00 == (local_14 ^ (uint)auStack_20)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

