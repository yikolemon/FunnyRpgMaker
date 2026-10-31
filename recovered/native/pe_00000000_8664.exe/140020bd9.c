/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140020bd9 */

undefined8 * FUN_140020bd9(undefined8 *param_1,longlong *param_2,ulonglong param_3,longlong param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  char *pcVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_b8 [32];
  longlong local_98;
  ulonglong *local_90;
  longlong *local_80;
  ulonglong local_78;
  undefined4 local_70;
  char local_68 [64];
  ulonglong local_28;
  
  local_28 = DAT_140f17b40 ^ (ulonglong)auStack_b8;
  uVar1 = param_3;
  lVar6 = 0;
  do {
    lVar5 = lVar6;
    uVar1 = uVar1 >> 4;
    lVar6 = lVar5 + 1;
  } while (uVar1 != 0);
  local_70 = (undefined4)lVar6;
  local_78 = param_3;
  if (param_4 != 0) {
    local_98 = lVar5 + 3;
    local_90 = &local_78;
    FUN_140020d8d(param_1,param_2,param_4,local_98);
    goto LAB_140020d55;
  }
  lVar2 = param_2[1];
  uVar1 = param_2[2];
  if (uVar1 < lVar2 + lVar6 + 2U) {
    (*(code *)param_2[3])(param_2);
    lVar2 = param_2[1];
    uVar1 = param_2[2];
  }
  uVar4 = lVar2 + 1;
  if (uVar1 < uVar4) {
    (*(code *)param_2[3])(param_2);
    lVar2 = param_2[1];
    uVar4 = lVar2 + 1;
  }
  param_2[1] = uVar4;
  *(undefined1 *)(*param_2 + lVar2) = 0x30;
  lVar2 = param_2[1];
  uVar1 = lVar2 + 1;
  if ((ulonglong)param_2[2] < uVar1) {
    (*(code *)param_2[3])(param_2);
    lVar2 = param_2[1];
    uVar1 = lVar2 + 1;
  }
  param_2[1] = uVar1;
  *(undefined1 *)(*param_2 + lVar2) = 0x78;
  lVar2 = param_2[1];
  uVar1 = lVar2 + lVar6;
  if ((ulonglong)param_2[2] < uVar1) {
    (*(code *)param_2[3])(param_2);
    lVar2 = param_2[1];
    uVar1 = lVar2 + lVar6;
    if (uVar1 <= (ulonglong)param_2[2]) goto LAB_140020cd8;
LAB_140020d0d:
    pcVar3 = local_68 + lVar5;
    do {
      *pcVar3 = "0123456789abcdef"[(uint)param_3 & 0xf];
      param_3 = param_3 >> 4;
      pcVar3 = pcVar3 + -1;
    } while (param_3 != 0);
    FUN_14001aea5(&local_80,local_68,local_68 + lVar5 + 1,param_2);
  }
  else {
LAB_140020cd8:
    param_2[1] = uVar1;
    if (*param_2 == 0) goto LAB_140020d0d;
    pcVar3 = (char *)(lVar6 + *param_2 + lVar2);
    do {
      pcVar3 = pcVar3 + -1;
      *pcVar3 = "0123456789abcdef"[(uint)param_3 & 0xf];
      param_3 = param_3 >> 4;
      local_80 = param_2;
    } while (param_3 != 0);
  }
  *param_1 = local_80;
LAB_140020d55:
  if (DAT_140f17b40 != (local_28 ^ (ulonglong)auStack_b8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_28 ^ (ulonglong)auStack_b8);
  }
  return param_1;
}

