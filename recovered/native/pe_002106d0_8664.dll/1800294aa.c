/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800294aa */

undefined8 *
FUN_1800294aa(undefined8 *param_1,longlong *param_2,uint *param_3,longlong param_4,ulonglong param_5
             ,int *param_6)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auStack_78 [40];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_78;
  uVar4 = 0;
  if (param_5 <= param_3[2]) {
    uVar4 = param_3[2] - param_5;
  }
  uVar5 = uVar4 >> ((&DAT_180385fa9)[*param_3 >> 3 & 7] & 0x3f);
  uVar3 = param_4 + param_2[1] + (*param_3 >> 0xf & 7) * uVar4;
  if ((ulonglong)param_2[2] < uVar3) {
    (*(code *)param_2[3])(param_2,uVar3);
  }
  if (uVar5 != 0) {
    FUN_180027adf(&local_50,param_2,uVar5,param_3);
    param_2 = local_50;
  }
  iVar1 = *param_6;
  if (iVar1 != 0) {
    lVar2 = param_2[1];
    uVar3 = lVar2 + 1;
    if ((ulonglong)param_2[2] < uVar3) {
      (*(code *)param_2[3])(param_2);
      lVar2 = param_2[1];
      uVar3 = lVar2 + 1;
    }
    param_2[1] = uVar3;
    *(char *)(*param_2 + lVar2) = (char)(0x202b2d00 >> ((byte)(iVar1 << 3) & 0x1f));
  }
  FUN_180018bde(param_2,*(longlong *)(param_6 + 2),*(longlong *)(param_6 + 2) + 3);
  if (uVar4 != uVar5) {
    FUN_180027adf(&local_50,param_2,uVar4 - uVar5,param_3);
    param_2 = local_50;
  }
  *param_1 = param_2;
  if (DAT_180402640 == (local_48 ^ (ulonglong)auStack_78)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_48 ^ (ulonglong)auStack_78);
}

