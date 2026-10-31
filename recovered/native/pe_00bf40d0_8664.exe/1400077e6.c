/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400077e6 */

longlong FUN_1400077e6(longlong *param_1,undefined8 *param_2,ulonglong param_3)

{
  longlong lVar1;
  short sVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  for (uVar4 = param_3; 0 < (longlong)uVar4; uVar4 = uVar4 + lVar1) {
    if ((*(undefined8 **)param_1[8] == (undefined8 *)0x0) ||
       (uVar3 = (ulonglong)*(int *)param_1[0xb], (longlong)uVar3 < 1)) {
      sVar2 = (**(code **)(*param_1 + 0x18))(param_1,*(undefined2 *)param_2);
      if (sVar2 == -1) break;
      param_2 = (undefined8 *)((longlong)param_2 + 2);
      lVar1 = -1;
    }
    else {
      if (uVar4 < uVar3) {
        uVar3 = uVar4;
      }
      FUN_1400b3550(*(undefined8 **)param_1[8],param_2,uVar3 * 2);
      param_2 = (undefined8 *)((longlong)param_2 + uVar3 * 2);
      lVar1 = -uVar3;
      *(int *)param_1[0xb] = *(int *)param_1[0xb] - (int)uVar3;
      *(longlong *)param_1[8] = *(longlong *)param_1[8] + uVar3 * 2;
    }
  }
  return param_3 - uVar4;
}

