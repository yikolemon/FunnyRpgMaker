/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1002aaa5 */

undefined4 * thunk_FUN_1002aaaa(undefined4 *param_1,int *param_2,uint param_3,int param_4)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int *piStack_40;
  uint uStack_3c;
  int iStack_38;
  undefined1 auStack_34 [7];
  char acStack_2d [25];
  uint uStack_14;
  
  uStack_14 = DAT_10388d00 ^ (uint)&piStack_40;
  uVar6 = 0x1f;
  if ((param_3 | 1) != 0) {
    for (; (param_3 | 1) >> uVar6 == 0; uVar6 = uVar6 - 1) {
    }
  }
  uVar6 = (uVar6 ^ 0x1c) >> 2;
  iVar7 = -uVar6 + 8;
  iVar3 = 10 - uVar6;
  uStack_3c = param_3;
  iStack_38 = iVar7;
  if (param_4 != 0) {
    FUN_1002ac0f(param_1,param_2,param_4,iVar3,iVar3,&uStack_3c);
    goto LAB_1002abec;
  }
  iVar1 = param_2[1];
  uVar5 = param_2[2];
  if (uVar5 < (uint)(iVar3 + iVar1)) {
    (*(code *)param_2[3])(param_2,iVar3 + iVar1);
    iVar1 = param_2[1];
    uVar5 = param_2[2];
  }
  uVar4 = iVar1 + 1;
  if (uVar5 < uVar4) {
    (*(code *)param_2[3])(param_2,uVar4);
    iVar1 = param_2[1];
    uVar4 = iVar1 + 1;
  }
  param_2[1] = uVar4;
  *(undefined1 *)(*param_2 + iVar1) = 0x30;
  iVar3 = param_2[1];
  uVar5 = iVar3 + 1;
  if ((uint)param_2[2] < uVar5) {
    (*(code *)param_2[3])(param_2,uVar5);
    iVar3 = param_2[1];
    uVar5 = iVar3 + 1;
  }
  param_2[1] = uVar5;
  *(undefined1 *)(*param_2 + iVar3) = 0x78;
  iVar3 = param_2[1];
  uVar5 = iVar3 + iVar7;
  if ((uint)param_2[2] < uVar5) {
    (*(code *)param_2[3])(param_2,uVar5);
    iVar3 = param_2[1];
    uVar5 = iVar3 + iVar7;
    if (uVar5 <= (uint)param_2[2]) goto LAB_1002ab88;
LAB_1002abaf:
    pcVar2 = acStack_2d + -uVar6;
    do {
      *pcVar2 = "0123456789abcdef"[param_3 & 0xf];
      param_3 = param_3 >> 4;
      pcVar2 = pcVar2 + -1;
    } while (param_3 != 0);
    FUN_100253ad(&piStack_40,auStack_34,acStack_2d + -uVar6 + 1,param_2);
  }
  else {
LAB_1002ab88:
    param_2[1] = uVar5;
    if (*param_2 == 0) goto LAB_1002abaf;
    pcVar2 = (char *)((iVar3 - uVar6) + *param_2 + 7);
    do {
      *pcVar2 = "0123456789abcdef"[param_3 & 0xf];
      param_3 = param_3 >> 4;
      pcVar2 = pcVar2 + -1;
      piStack_40 = param_2;
    } while (param_3 != 0);
  }
  *param_1 = piStack_40;
LAB_1002abec:
  if (DAT_10388d00 != (uStack_14 ^ (uint)&piStack_40)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return param_1;
}

