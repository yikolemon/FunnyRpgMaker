/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14001ade0 */

undefined8 * FUN_14001ade0(undefined8 *param_1,longlong *param_2,undefined4 param_3,uint param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 auStack_68 [46];
  undefined1 local_3a [10];
  ulonglong local_30;
  
  local_30 = DAT_140f17b40 ^ (ulonglong)auStack_68;
  lVar1 = param_2[1];
  uVar2 = lVar1 + (ulonglong)param_4;
  if ((ulonglong)param_2[2] < uVar2) {
    (*(code *)param_2[3])(param_2);
    lVar1 = param_2[1];
    uVar2 = (ulonglong)param_4 + lVar1;
    if (uVar2 <= (ulonglong)param_2[2]) goto LAB_14001ae2c;
  }
  else {
LAB_14001ae2c:
    param_2[1] = uVar2;
    if (*param_2 != 0) {
      FUN_14001a250(*param_2 + lVar1,param_3,param_4);
      *param_1 = param_2;
      goto LAB_14001ae75;
    }
  }
  FUN_14001a250(local_3a,param_3,param_4);
  FUN_14001aea5(param_1,local_3a,local_3a + (int)param_4,param_2);
LAB_14001ae75:
  if (DAT_140f17b40 == (local_30 ^ (ulonglong)auStack_68)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_30 ^ (ulonglong)auStack_68);
}

