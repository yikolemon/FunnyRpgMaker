/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180027b85 */

undefined8 *
FUN_180027b85(undefined8 *param_1,longlong *param_2,longlong param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    uVar1 = *param_4;
    lVar2 = param_2[1];
    uVar3 = lVar2 + 1;
    if ((ulonglong)param_2[2] < uVar3) {
      (*(code *)param_2[3])(param_2);
      lVar2 = param_2[1];
      uVar3 = lVar2 + 1;
    }
    param_2[1] = uVar3;
    *(undefined1 *)(*param_2 + lVar2) = uVar1;
  }
  *param_1 = param_2;
  return param_1;
}

