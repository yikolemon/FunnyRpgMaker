/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800755e6 */

longlong FUN_1800755e6(longlong *param_1,undefined1 *param_2,ulonglong param_3)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  for (uVar4 = param_3; 0 < (longlong)uVar4; uVar4 = uVar4 + lVar1) {
    if ((*(longlong *)param_1[8] == 0) ||
       (uVar3 = (ulonglong)*(int *)param_1[0xb], (longlong)uVar3 < 1)) {
      iVar2 = (**(code **)(*param_1 + 0x18))(param_1,*param_2);
      if (iVar2 == -1) break;
      param_2 = param_2 + 1;
      lVar1 = -1;
    }
    else {
      if (uVar4 < uVar3) {
        uVar3 = uVar4;
      }
      FUN_1802a82f0(*(longlong *)param_1[8],param_2,uVar3);
      param_2 = param_2 + uVar3;
      lVar1 = -uVar3;
      *(int *)param_1[0xb] = *(int *)param_1[0xb] - (int)uVar3;
      *(longlong *)param_1[8] = *(longlong *)param_1[8] + uVar3;
    }
  }
  return param_3 - uVar4;
}

