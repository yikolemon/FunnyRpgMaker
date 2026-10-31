/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140087ba0 */

longlong FUN_140087ba0(longlong *param_1,short *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  short sVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  for (lVar4 = param_3; 0 < lVar4; lVar4 = lVar4 + lVar2) {
    if ((*(undefined8 **)param_1[7] == (undefined8 *)0x0) ||
       (iVar1 = *(int *)param_1[10], iVar1 < 1)) {
      sVar3 = (*(code *)PTR__guard_dispatch_icall_1401200f0)(param_1);
      if (sVar3 == -1) break;
      *param_2 = sVar3;
      lVar2 = -1;
      uVar5 = 2;
    }
    else {
      lVar6 = lVar4;
      if (iVar1 <= lVar4) {
        lVar6 = (longlong)iVar1;
      }
      uVar5 = lVar6 * 2;
      FUN_1400b3550((undefined8 *)param_2,*(undefined8 **)param_1[7],uVar5);
      lVar2 = -lVar6;
      *(int *)param_1[10] = *(int *)param_1[10] - (int)lVar6;
      *(longlong *)param_1[7] = *(longlong *)param_1[7] + (longlong)(int)lVar6 * 2;
    }
    param_2 = (short *)((longlong)param_2 + uVar5);
  }
  return param_3 - lVar4;
}

