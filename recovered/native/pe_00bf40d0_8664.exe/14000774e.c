/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14000774e */

longlong FUN_14000774e(longlong *param_1,short *param_2,ulonglong param_3)

{
  longlong lVar1;
  short sVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  for (uVar4 = param_3; 0 < (longlong)uVar4; uVar4 = uVar4 + lVar1) {
    if ((*(undefined8 **)param_1[7] == (undefined8 *)0x0) ||
       (uVar3 = (ulonglong)*(int *)param_1[10], (longlong)uVar3 < 1)) {
      sVar2 = (**(code **)(*param_1 + 0x38))(param_1);
      if (sVar2 == -1) break;
      *param_2 = sVar2;
      param_2 = param_2 + 1;
      lVar1 = -1;
    }
    else {
      if (uVar4 < uVar3) {
        uVar3 = uVar4;
      }
      FUN_1400b3550((undefined8 *)param_2,*(undefined8 **)param_1[7],uVar3 * 2);
      param_2 = param_2 + uVar3;
      lVar1 = -uVar3;
      *(int *)param_1[10] = *(int *)param_1[10] - (int)uVar3;
      *(longlong *)param_1[7] = *(longlong *)param_1[7] + uVar3 * 2;
    }
  }
  return param_3 - uVar4;
}

