/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14001efe0 */

undefined8 *
FUN_14001efe0(undefined8 *param_1,longlong *param_2,uint *param_3,longlong param_4,ulonglong param_5
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
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_78;
  uVar4 = 0;
  if (param_5 <= param_3[2]) {
    uVar4 = param_3[2] - param_5;
  }
  uVar5 = uVar4 >> ((&DAT_140edcb84)[*param_3 >> 3 & 7] & 0x3f);
  uVar3 = param_4 + param_2[1] + (*param_3 >> 0xf & 7) * uVar4;
  if ((ulonglong)param_2[2] < uVar3) {
    (*(code *)param_2[3])(param_2,uVar3);
  }
  if (uVar5 != 0) {
    FUN_14001d615(&local_50,param_2,uVar5,param_3);
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
  FUN_140019fc2(param_2,*(longlong *)(param_6 + 2),*(longlong *)(param_6 + 2) + 3);
  if (uVar4 != uVar5) {
    FUN_14001d615(&local_50,param_2,uVar4 - uVar5,param_3);
    param_2 = local_50;
  }
  *param_1 = param_2;
  if (DAT_140f17b40 == (local_48 ^ (ulonglong)auStack_78)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_48 ^ (ulonglong)auStack_78);
}

