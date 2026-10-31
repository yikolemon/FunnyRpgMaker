/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10028d44 */

undefined4 *
FUN_10028d44(undefined4 *param_1,int *param_2,uint *param_3,int param_4,uint param_5,int *param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int *piStack_1c;
  int *local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&piStack_1c;
  uVar5 = param_3[2] - param_5;
  if (param_3[2] < param_5) {
    uVar5 = 0;
  }
  uVar4 = uVar5 >> ((&DAT_10355ec6)[*param_3 >> 3 & 7] & 0x1f);
  uVar3 = param_2[1] + param_4 + (*param_3 >> 0xf & 7) * uVar5;
  if ((uint)param_2[2] < uVar3) {
    (*(code *)param_2[3])(param_2,uVar3);
  }
  if (uVar4 != 0) {
    FUN_100275d2(&local_18,param_2,uVar4,param_3);
    param_2 = local_18;
  }
  iVar1 = *param_6;
  if (iVar1 != 0) {
    iVar2 = param_2[1];
    uVar3 = iVar2 + 1;
    if ((uint)param_2[2] < uVar3) {
      (*(code *)param_2[3])(param_2,uVar3);
      iVar2 = param_2[1];
      uVar3 = iVar2 + 1;
    }
    param_2[1] = uVar3;
    *(char *)(*param_2 + iVar2) = (char)(0x202b2d00 >> ((byte)(iVar1 << 3) & 0x1f));
  }
  FUN_1001909c(param_6[1],param_6[1] + 3);
  if (uVar5 != uVar4) {
    FUN_100275d2(&piStack_1c,param_2,uVar5 - uVar4,param_3);
    param_2 = piStack_1c;
  }
  *param_1 = param_2;
  if (DAT_10388d00 == (local_14 ^ (uint)&piStack_1c)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

