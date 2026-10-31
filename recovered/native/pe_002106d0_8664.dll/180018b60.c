/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180018b60 */

void FUN_180018b60(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar2 = param_2[1];
  lVar3 = param_2[2];
  plVar1 = param_2 + 4;
  if ((longlong *)*param_2 == plVar1) {
    *param_1 = (longlong)(param_1 + 4);
    param_1[2] = lVar3;
    if (uVar2 != 0) {
      uVar4 = 0;
      do {
        *(undefined1 *)((longlong)(param_1 + 4) + uVar4) = *(undefined1 *)((longlong)plVar1 + uVar4)
        ;
        uVar4 = uVar4 + 1;
      } while (uVar2 != uVar4);
    }
  }
  else {
    *param_1 = *param_2;
    param_1[2] = lVar3;
    *param_2 = (longlong)plVar1;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  uVar4 = param_1[2];
  if (uVar4 < uVar2) {
    (*(code *)param_1[3])(param_1,uVar2);
    uVar4 = param_1[2];
  }
  if (uVar2 < uVar4) {
    uVar4 = uVar2;
  }
  param_1[1] = uVar4;
  return;
}

