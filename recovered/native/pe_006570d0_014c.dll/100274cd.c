/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100274cd */

undefined4 *
FUN_100274cd(undefined4 *param_1,int *param_2,uint *param_3,int param_4,uint param_5,char *param_6)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_1c [3];
  char cStack_19;
  int *local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)auStack_1c;
  uVar4 = param_3[2] - param_5;
  if (param_3[2] < param_5) {
    uVar4 = 0;
  }
  uVar5 = uVar4 >> ((&DAT_10355ec6)[*param_3 >> 3 & 7] & 0x1f);
  uVar3 = param_2[1] + param_4 + (*param_3 >> 0xf & 7) * uVar4;
  if ((uint)param_2[2] < uVar3) {
    (*(code *)param_2[3])(param_2,uVar3);
  }
  if (uVar5 != 0) {
    FUN_100275d2(&local_18,param_2,uVar5,param_3);
    param_2 = local_18;
  }
  cVar1 = param_6[1];
  if (*param_6 == '\x01') {
    FUN_100276af(&local_18,param_2,(int)cVar1);
    param_2 = local_18;
  }
  else {
    iVar2 = param_2[1];
    uVar3 = iVar2 + 1;
    cStack_19 = cVar1;
    if ((uint)param_2[2] < uVar3) {
      (*(code *)param_2[3])(param_2,uVar3);
      iVar2 = param_2[1];
      uVar3 = iVar2 + 1;
    }
    param_2[1] = uVar3;
    *(char *)(*param_2 + iVar2) = cStack_19;
  }
  if (uVar4 != uVar5) {
    FUN_100275d2(&local_18,param_2,uVar4 - uVar5,param_3);
    param_2 = local_18;
  }
  *param_1 = param_2;
  if (DAT_10388d00 == (local_14 ^ (uint)auStack_1c)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

