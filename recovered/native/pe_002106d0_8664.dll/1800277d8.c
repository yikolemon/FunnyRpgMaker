/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800277d8 */

undefined8 *
FUN_1800277d8(undefined8 *param_1,longlong *param_2,uint *param_3,longlong param_4,ulonglong param_5
             ,undefined8 *param_6)

{
  undefined4 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_88;
  uVar3 = 0;
  if (param_5 <= param_3[2]) {
    uVar3 = param_3[2] - param_5;
  }
  uVar6 = uVar3 >> ((&DAT_180385fae)[*param_3 >> 3 & 7] & 0x3f);
  uVar5 = param_4 + param_2[1] + (*param_3 >> 0xf & 7) * uVar3;
  if ((ulonglong)param_2[2] < uVar5) {
    (*(code *)param_2[3])(param_2,uVar5);
  }
  if (uVar6 != 0) {
    FUN_180027adf(&local_58,param_2,uVar6,param_3);
    param_2 = (longlong *)CONCAT44(uStack_54,local_58);
  }
  for (uVar4 = *(uint *)*param_6 & 0xffffff; uVar4 != 0; uVar4 = uVar4 >> 8) {
    lVar2 = param_2[1];
    uVar5 = lVar2 + 1;
    if ((ulonglong)param_2[2] < uVar5) {
      (*(code *)param_2[3])(param_2);
      lVar2 = param_2[1];
      uVar5 = lVar2 + 1;
    }
    param_2[1] = uVar5;
    *(char *)(*param_2 + lVar2) = (char)uVar4;
  }
  puVar1 = (undefined4 *)param_6[2];
  local_58 = *puVar1;
  uStack_54 = puVar1[1];
  uStack_50 = puVar1[2];
  uStack_4c = puVar1[3];
  FUN_180028380(param_6[1],&local_60,param_2);
  if (uVar3 != uVar6) {
    FUN_180027adf(&local_58,local_60,uVar3 - uVar6,param_3);
    local_60 = CONCAT44(uStack_54,local_58);
  }
  *param_1 = local_60;
  if (DAT_180402640 != (local_48 ^ (ulonglong)auStack_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_48 ^ (ulonglong)auStack_88);
  }
  return param_1;
}

