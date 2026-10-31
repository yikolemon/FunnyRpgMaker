/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140025f24 */

void FUN_140025f24(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar2 = param_2[1];
  lVar4 = param_2[2];
  plVar1 = param_2 + 4;
  if ((longlong *)*param_2 == plVar1) {
    *param_1 = (longlong)(param_1 + 4);
    param_1[2] = lVar4;
    if (uVar2 != 0) {
      lVar4 = 0;
      do {
        *(undefined4 *)((longlong)(param_1 + 4) + lVar4) = *(undefined4 *)((longlong)plVar1 + lVar4)
        ;
        lVar4 = lVar4 + 4;
      } while (uVar2 * 4 - lVar4 != 0);
    }
  }
  else {
    *param_1 = *param_2;
    param_1[2] = lVar4;
    *param_2 = (longlong)plVar1;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  uVar3 = param_1[2];
  if (uVar3 < uVar2) {
    (*(code *)param_1[3])(param_1,uVar2);
    uVar3 = param_1[2];
  }
  if (uVar2 < uVar3) {
    uVar3 = uVar2;
  }
  param_1[1] = uVar3;
  return;
}

