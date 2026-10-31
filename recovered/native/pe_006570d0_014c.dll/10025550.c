/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10025550 */

undefined4 *
FUN_10025550(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  undefined1 auStack_28 [20];
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)auStack_28;
  iVar1 = param_2[1];
  uVar2 = iVar1 + param_5;
  if ((uint)param_2[2] < uVar2) {
    (*(code *)param_2[3])(param_2,uVar2);
    iVar1 = param_2[1];
    uVar2 = iVar1 + param_5;
    if (uVar2 <= (uint)param_2[2]) goto LAB_1002559c;
  }
  else {
LAB_1002559c:
    param_2[1] = uVar2;
    if (*param_2 != 0) {
      FUN_100255fd(*param_2 + iVar1,param_3,param_4,param_5);
      *param_1 = param_2;
      goto LAB_100255d8;
    }
  }
  FUN_100255fd(auStack_28,param_3,param_4,param_5);
  FUN_100253ad(param_1,auStack_28,auStack_28 + param_5,param_2);
LAB_100255d8:
  if (DAT_10388d00 == (local_14 ^ (uint)auStack_28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

