/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1002ac0f */

undefined4 *
FUN_1002ac0f(undefined4 *param_1,int *param_2,uint *param_3,int param_4,uint param_5,uint *param_6)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint local_3c;
  undefined4 uStack_38;
  int *local_34 [8];
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_3c;
  uVar6 = param_3[2] - param_5;
  if (param_3[2] < param_5) {
    uVar6 = 0;
  }
  uVar5 = uVar6 >> ((&DAT_10355ecb)[*param_3 >> 3 & 7] & 0x1f);
  uVar4 = param_2[1] + param_4 + (*param_3 >> 0xf & 7) * uVar6;
  if ((uint)param_2[2] < uVar4) {
    (*(code *)param_2[3])(param_2,uVar4);
  }
  local_3c = uVar5;
  if (uVar5 != 0) {
    FUN_100275d2(local_34,param_2,uVar5,param_3);
    param_2 = local_34[0];
  }
  iVar2 = param_2[1];
  uVar4 = iVar2 + 1;
  if ((uint)param_2[2] < uVar4) {
    (*(code *)param_2[3])(param_2,uVar4);
    iVar2 = param_2[1];
    uVar4 = iVar2 + 1;
  }
  param_2[1] = uVar4;
  *(undefined1 *)(*param_2 + iVar2) = 0x30;
  iVar2 = param_2[1];
  uVar4 = iVar2 + 1;
  if ((uint)param_2[2] < uVar4) {
    (*(code *)param_2[3])(param_2,uVar4);
    iVar2 = param_2[1];
    uVar4 = iVar2 + 1;
  }
  param_2[1] = uVar4;
  *(undefined1 *)(*param_2 + iVar2) = 0x78;
  uVar5 = *param_6;
  uVar1 = param_6[1];
  iVar2 = param_2[1];
  uVar4 = iVar2 + uVar1;
  if ((uint)param_2[2] < uVar4) {
    (*(code *)param_2[3])(param_2,uVar4);
    iVar2 = param_2[1];
    uVar4 = iVar2 + uVar1;
    if (uVar4 <= (uint)param_2[2]) goto LAB_1002acf2;
  }
  else {
LAB_1002acf2:
    param_2[1] = uVar4;
    if (*param_2 != 0) {
      pcVar3 = (char *)(iVar2 + uVar1 + *param_2);
      do {
        pcVar3 = pcVar3 + -1;
        *pcVar3 = "0123456789abcdef"[uVar5 & 0xf];
        uVar5 = uVar5 >> 4;
      } while (uVar5 != 0);
      goto LAB_1002ad4f;
    }
  }
  pcVar3 = (char *)((int)local_34 + (uVar1 - 1));
  do {
    *pcVar3 = "0123456789abcdef"[uVar5 & 0xf];
    uVar5 = uVar5 >> 4;
    pcVar3 = pcVar3 + -1;
  } while (uVar5 != 0);
  FUN_100253ad(&uStack_38,local_34,(int)local_34 + uVar1,param_2);
  param_2 = uStack_38;
LAB_1002ad4f:
  if (uVar6 != local_3c) {
    FUN_100275d2(local_34,param_2,uVar6 - local_3c,param_3);
    param_2 = local_34[0];
  }
  *param_1 = param_2;
  if (DAT_10388d00 != (local_14 ^ (uint)&local_3c)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return param_1;
}

