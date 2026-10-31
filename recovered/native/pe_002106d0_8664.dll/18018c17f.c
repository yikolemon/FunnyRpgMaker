/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18018c17f */

void FUN_18018c17f(longlong param_1,ulonglong param_2,undefined8 *param_3,undefined8 param_4)

{
  int iVar1;
  int *piVar2;
  ulonglong uVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_78;
  if (0 < (longlong)param_2) {
    do {
      uVar3 = param_2 - 1 >> 1;
      local_50 = *param_3;
      local_58 = *(undefined8 *)(param_1 + uVar3 * 8);
      piVar2 = (int *)FUN_18018a34e(param_4,&local_58);
      iVar1 = *piVar2;
      piVar2 = (int *)FUN_18018a34e(param_4,&local_50);
      if (iVar1 <= *piVar2) goto LAB_18018c1ff;
      *(undefined8 *)(param_1 + param_2 * 8) = *(undefined8 *)(param_1 + uVar3 * 8);
      param_2 = uVar3;
    } while (uVar3 != 0);
    param_2 = 0;
  }
LAB_18018c1ff:
  *(undefined8 *)(param_1 + param_2 * 8) = *param_3;
  if (DAT_180402640 == (local_48 ^ (ulonglong)auStack_78)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_48 ^ (ulonglong)auStack_78);
}

