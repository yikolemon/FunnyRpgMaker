/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180032892 */

undefined8 *
FUN_180032892(undefined8 *param_1,longlong *param_2,uint *param_3,longlong param_4,ulonglong param_5
             ,undefined8 *param_6)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined1 local_60;
  undefined8 local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_88;
  uVar2 = 0;
  if (param_5 <= param_3[2]) {
    uVar2 = param_3[2] - param_5;
  }
  uVar5 = uVar2 >> ((&DAT_180385fae)[*param_3 >> 3 & 7] & 0x3f);
  uVar4 = param_4 + param_2[1] + (*param_3 >> 0xf & 7) * uVar2;
  if ((ulonglong)param_2[2] < uVar4) {
    (*(code *)param_2[3])(param_2,uVar4);
  }
  if (uVar5 != 0) {
    FUN_180027adf(&local_50,param_2,uVar5,param_3);
    param_2 = local_50;
  }
  iVar3 = *(int *)*param_6;
  if (iVar3 != 0) {
    lVar1 = param_2[1];
    uVar4 = lVar1 + 1;
    if ((ulonglong)param_2[2] < uVar4) {
      (*(code *)param_2[3])(param_2);
      lVar1 = param_2[1];
      uVar4 = lVar1 + 1;
    }
    param_2[1] = uVar4;
    *(char *)(*param_2 + lVar1) = (char)(0x202b2d00 >> ((byte)(iVar3 << 3) & 0x1f));
  }
  local_58 = param_6[5];
  local_60 = *(undefined1 *)param_6[4];
  local_68 = *(undefined4 *)param_6[3];
  FUN_180032a3a(&local_50,param_2,*(undefined8 *)param_6[1],*(undefined4 *)param_6[2]);
  plVar6 = local_50;
  iVar3 = *(int *)param_6[6];
  if (0 < iVar3) {
    do {
      lVar1 = plVar6[1];
      uVar4 = lVar1 + 1;
      if ((ulonglong)plVar6[2] < uVar4) {
        (*(code *)plVar6[3])(plVar6);
        lVar1 = plVar6[1];
        uVar4 = lVar1 + 1;
      }
      plVar6[1] = uVar4;
      *(undefined1 *)(*plVar6 + lVar1) = 0x30;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (uVar2 != uVar5) {
    FUN_180027adf(&local_50,plVar6,uVar2 - uVar5,param_3);
    plVar6 = local_50;
  }
  *param_1 = plVar6;
  if (DAT_180402640 == (local_48 ^ (ulonglong)auStack_88)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_48 ^ (ulonglong)auStack_88);
}

