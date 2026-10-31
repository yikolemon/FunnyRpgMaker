/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140020d8d */

undefined8 *
FUN_140020d8d(undefined8 *param_1,longlong *param_2,uint *param_3,longlong param_4,ulonglong param_5
             ,ulonglong *param_6)

{
  uint uVar1;
  longlong lVar2;
  char *pcVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  longlong *local_88 [9];
  ulonglong local_40;
  
  local_40 = DAT_140f17b40 ^ (ulonglong)auStack_b8;
  uVar6 = 0;
  if (param_5 <= param_3[2]) {
    uVar6 = param_3[2] - param_5;
  }
  uVar7 = uVar6 >> ((&DAT_140edcb89)[*param_3 >> 3 & 7] & 0x3f);
  uVar4 = param_4 + param_2[1] + (*param_3 >> 0xf & 7) * uVar6;
  if ((ulonglong)param_2[2] < uVar4) {
    (*(code *)param_2[3])(param_2,uVar4);
  }
  if (uVar7 != 0) {
    FUN_14001d615(local_88,param_2,uVar7,param_3);
    param_2 = local_88[0];
  }
  lVar2 = param_2[1];
  uVar4 = lVar2 + 1;
  if ((ulonglong)param_2[2] < uVar4) {
    (*(code *)param_2[3])(param_2);
    lVar2 = param_2[1];
    uVar4 = lVar2 + 1;
  }
  param_2[1] = uVar4;
  *(undefined1 *)(*param_2 + lVar2) = 0x30;
  lVar2 = param_2[1];
  uVar4 = lVar2 + 1;
  if ((ulonglong)param_2[2] < uVar4) {
    (*(code *)param_2[3])(param_2);
    lVar2 = param_2[1];
    uVar4 = lVar2 + 1;
  }
  param_2[1] = uVar4;
  *(undefined1 *)(*param_2 + lVar2) = 0x78;
  uVar1 = (uint)param_6[1];
  uVar5 = *param_6;
  lVar2 = param_2[1];
  uVar4 = lVar2 + (ulonglong)uVar1;
  if ((ulonglong)param_2[2] < uVar4) {
    (*(code *)param_2[3])(param_2);
    lVar2 = param_2[1];
    uVar4 = lVar2 + (ulonglong)uVar1;
    if (uVar4 <= (ulonglong)param_2[2]) goto LAB_140020ea5;
  }
  else {
LAB_140020ea5:
    param_2[1] = uVar4;
    if (*param_2 != 0) {
      pcVar3 = (char *)(lVar2 + (int)uVar1 + *param_2);
      do {
        pcVar3 = pcVar3 + -1;
        *pcVar3 = "0123456789abcdef"[(uint)uVar5 & 0xf];
        uVar5 = uVar5 >> 4;
      } while (uVar5 != 0);
      goto LAB_140020f26;
    }
  }
  pcVar3 = (char *)((longlong)local_88 + (longlong)(int)uVar1 + -1);
  do {
    *pcVar3 = "0123456789abcdef"[(uint)uVar5 & 0xf];
    uVar5 = uVar5 >> 4;
    pcVar3 = pcVar3 + -1;
  } while (uVar5 != 0);
  FUN_14001aea5(&local_90,local_88,(longlong)local_88 + (longlong)(int)uVar1,param_2);
  param_2 = local_90;
LAB_140020f26:
  if (uVar6 != uVar7) {
    FUN_14001d615(local_88,param_2,uVar6 - uVar7,param_3);
    param_2 = local_88[0];
  }
  *param_1 = param_2;
  if (DAT_140f17b40 != (local_40 ^ (ulonglong)auStack_b8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_40 ^ (ulonglong)auStack_b8);
  }
  return param_1;
}

