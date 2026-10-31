/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140072b95 */

void FUN_140072b95(longlong param_1,ulonglong param_2,undefined8 *param_3,undefined8 param_4)

{
  int iVar1;
  int *piVar2;
  ulonglong uVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_78;
  if (0 < (longlong)param_2) {
    do {
      uVar3 = param_2 - 1 >> 1;
      local_50 = *param_3;
      local_58 = *(undefined8 *)(param_1 + uVar3 * 8);
      piVar2 = (int *)FUN_1400705e6(param_4,&local_58);
      iVar1 = *piVar2;
      piVar2 = (int *)FUN_1400705e6(param_4,&local_50);
      if (iVar1 <= *piVar2) goto LAB_140072c15;
      *(undefined8 *)(param_1 + param_2 * 8) = *(undefined8 *)(param_1 + uVar3 * 8);
      param_2 = uVar3;
    } while (uVar3 != 0);
    param_2 = 0;
  }
LAB_140072c15:
  *(undefined8 *)(param_1 + param_2 * 8) = *param_3;
  if (DAT_140f17b40 == (local_48 ^ (ulonglong)auStack_78)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_48 ^ (ulonglong)auStack_78);
}

