/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18007555a */

longlong FUN_18007555a(longlong *param_1,undefined1 *param_2,ulonglong param_3)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  for (uVar4 = param_3; 0 < (longlong)uVar4; uVar4 = uVar4 + lVar1) {
    if ((*(longlong *)param_1[7] == 0) ||
       (uVar3 = (ulonglong)*(int *)param_1[10], (longlong)uVar3 < 1)) {
      iVar2 = (**(code **)(*param_1 + 0x38))(param_1);
      if (iVar2 == -1) break;
      *param_2 = (char)iVar2;
      param_2 = param_2 + 1;
      lVar1 = -1;
    }
    else {
      if (uVar4 < uVar3) {
        uVar3 = uVar4;
      }
      FUN_1802a82f0(param_2,*(longlong *)param_1[7],uVar3);
      param_2 = param_2 + uVar3;
      lVar1 = -uVar3;
      *(int *)param_1[10] = *(int *)param_1[10] - (int)uVar3;
      *(longlong *)param_1[7] = *(longlong *)param_1[7] + uVar3;
    }
  }
  return param_3 - uVar4;
}

