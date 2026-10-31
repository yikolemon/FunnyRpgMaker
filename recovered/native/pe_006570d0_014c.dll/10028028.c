/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10028028 */

undefined4 *
FUN_10028028(undefined4 *param_1,int *param_2,uint *param_3,int param_4,uint param_5,uint *param_6)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int *piStack_1c;
  int *local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&piStack_1c;
  uVar4 = param_3[2] - param_5;
  if (param_3[2] < param_5) {
    uVar4 = 0;
  }
  uVar5 = uVar4 >> ((&DAT_10355ecb)[*param_3 >> 3 & 7] & 0x1f);
  uVar2 = param_2[1] + param_4 + (*param_3 >> 0xf & 7) * uVar4;
  if ((uint)param_2[2] < uVar2) {
    (*(code *)param_2[3])(param_2,uVar2);
  }
  if (uVar5 != 0) {
    FUN_100275d2(&local_18,param_2,uVar5,param_3);
    param_2 = local_18;
  }
  for (uVar2 = *param_6 & 0xffffff; uVar2 != 0; uVar2 = uVar2 >> 8) {
    iVar1 = param_2[1];
    uVar3 = iVar1 + 1;
    if ((uint)param_2[2] < uVar3) {
      (*(code *)param_2[3])(param_2,uVar3);
      iVar1 = param_2[1];
      uVar3 = iVar1 + 1;
    }
    param_2[1] = uVar3;
    *(char *)(*param_2 + iVar1) = (char)uVar2;
  }
  for (uVar2 = param_6[1]; uVar2 != 0; uVar2 = uVar2 - 1) {
    iVar1 = param_2[1];
    uVar3 = iVar1 + 1;
    if ((uint)param_2[2] < uVar3) {
      (*(code *)param_2[3])(param_2,uVar3);
      iVar1 = param_2[1];
      uVar3 = iVar1 + 1;
    }
    param_2[1] = uVar3;
    *(undefined1 *)(*param_2 + iVar1) = 0x30;
  }
  FUN_1001909c(param_6[2],param_6[3]);
  if (uVar4 != uVar5) {
    FUN_100275d2(&piStack_1c,param_2,uVar4 - uVar5,param_3);
    param_2 = piStack_1c;
  }
  *param_1 = param_2;
  if (DAT_10388d00 != (local_14 ^ (uint)&piStack_1c)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return param_1;
}

