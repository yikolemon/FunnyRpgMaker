/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180018bde */

void FUN_180018bde(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (param_2 != param_3) {
    lVar3 = param_1[1];
    do {
      uVar4 = param_3 - param_2;
      if ((ulonglong)(param_1[2] - lVar3) < uVar4) {
        (*(code *)param_1[3])(param_1,lVar3 + uVar4);
        lVar3 = param_1[1];
        if ((ulonglong)(param_1[2] - lVar3) <= uVar4) {
          uVar4 = param_1[2] - lVar3;
        }
      }
      if (uVar4 != 0) {
        lVar1 = *param_1;
        uVar2 = 0;
        do {
          *(undefined1 *)(lVar3 + lVar1 + uVar2) = *(undefined1 *)(param_2 + uVar2);
          uVar2 = uVar2 + 1;
        } while (uVar4 != uVar2);
        lVar3 = param_1[1];
      }
      lVar3 = lVar3 + uVar4;
      param_1[1] = lVar3;
      param_2 = param_2 + uVar4;
    } while (param_2 != param_3);
  }
  return;
}

