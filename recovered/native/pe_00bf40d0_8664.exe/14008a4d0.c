/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14008a4d0 */

longlong FUN_14008a4d0(longlong *param_1,undefined8 *param_2,ulonglong param_3)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar4 = param_3;
  if (param_1[0xd] == 0) {
    if (*(undefined8 **)param_1[8] == (undefined8 *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)param_1[0xb];
    }
    if (0 < (longlong)param_3) {
      if (0 < iVar2) {
        uVar3 = (longlong)iVar2;
        if ((longlong)param_3 < (longlong)iVar2) {
          uVar3 = param_3;
        }
        FUN_1400b3550(*(undefined8 **)param_1[8],param_2,uVar3);
        uVar4 = param_3 - uVar3;
        *(int *)param_1[0xb] = *(int *)param_1[0xb] - (int)uVar3;
        *(longlong *)param_1[8] = *(longlong *)param_1[8] + (longlong)(int)uVar3;
        if ((longlong)uVar4 < 1) goto LAB_14008a5ef;
        param_2 = (undefined8 *)((longlong)param_2 + uVar3);
      }
      if (param_1[0x10] != 0) {
        uVar3 = FUN_1400997cc(param_2,1,uVar4,param_1[0x10]);
        uVar4 = uVar4 - uVar3;
      }
    }
  }
  else {
    for (; 0 < (longlong)uVar4; uVar4 = uVar4 + lVar1) {
      if ((*(undefined8 **)param_1[8] == (undefined8 *)0x0) ||
         (iVar2 = *(int *)param_1[0xb], iVar2 < 1)) {
        iVar2 = (*(code *)PTR__guard_dispatch_icall_1401200f0)(param_1,*(undefined1 *)param_2);
        if (iVar2 == -1) break;
        lVar1 = -1;
        uVar3 = 1;
      }
      else {
        uVar3 = uVar4;
        if ((longlong)iVar2 <= (longlong)uVar4) {
          uVar3 = (longlong)iVar2;
        }
        FUN_1400b3550(*(undefined8 **)param_1[8],param_2,uVar3);
        lVar1 = -uVar3;
        *(int *)param_1[0xb] = *(int *)param_1[0xb] - (int)uVar3;
        *(longlong *)param_1[8] = *(longlong *)param_1[8] + (longlong)(int)uVar3;
      }
      param_2 = (undefined8 *)((longlong)param_2 + uVar3);
    }
  }
LAB_14008a5ef:
  return param_3 - uVar4;
}

