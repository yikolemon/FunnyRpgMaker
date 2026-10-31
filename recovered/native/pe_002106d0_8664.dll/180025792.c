/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180025792 */

undefined8 * FUN_180025792(undefined8 *param_1,longlong *param_2,undefined4 param_3,uint param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 auStack_68 [46];
  undefined1 local_3a [10];
  ulonglong local_30;
  
  local_30 = DAT_180402640 ^ (ulonglong)auStack_68;
  lVar1 = param_2[1];
  uVar2 = lVar1 + (ulonglong)param_4;
  if ((ulonglong)param_2[2] < uVar2) {
    (*(code *)param_2[3])(param_2);
    lVar1 = param_2[1];
    uVar2 = (ulonglong)param_4 + lVar1;
    if (uVar2 <= (ulonglong)param_2[2]) goto LAB_1800257de;
  }
  else {
LAB_1800257de:
    param_2[1] = uVar2;
    if (*param_2 != 0) {
      FUN_180024c02(*param_2 + lVar1,param_3,param_4);
      *param_1 = param_2;
      goto LAB_180025827;
    }
  }
  FUN_180024c02(local_3a,param_3,param_4);
  FUN_180025857(param_1,local_3a,local_3a + (int)param_4,param_2);
LAB_180025827:
  if (DAT_180402640 == (local_30 ^ (ulonglong)auStack_68)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_30 ^ (ulonglong)auStack_68);
}

