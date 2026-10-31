/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140089a80 */

longlong FUN_140089a80(longlong *param_1,undefined8 *param_2,ulonglong param_3)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  for (uVar3 = param_3; 0 < (longlong)uVar3; uVar3 = uVar3 + lVar1) {
    if ((*(undefined8 **)param_1[8] == (undefined8 *)0x0) ||
       (iVar2 = *(int *)param_1[0xb], iVar2 < 1)) {
      iVar2 = (*(code *)PTR__guard_dispatch_icall_1401200f0)(param_1,*(undefined1 *)param_2);
      if (iVar2 == -1) break;
      lVar1 = -1;
      uVar4 = 1;
    }
    else {
      uVar4 = uVar3;
      if ((longlong)iVar2 <= (longlong)uVar3) {
        uVar4 = (longlong)iVar2;
      }
      FUN_1400b3550(*(undefined8 **)param_1[8],param_2,uVar4);
      lVar1 = -uVar4;
      *(int *)param_1[0xb] = *(int *)param_1[0xb] - (int)uVar4;
      *(longlong *)param_1[8] = *(longlong *)param_1[8] + (longlong)(int)uVar4;
    }
    param_2 = (undefined8 *)((longlong)param_2 + uVar4);
  }
  return param_3 - uVar3;
}

