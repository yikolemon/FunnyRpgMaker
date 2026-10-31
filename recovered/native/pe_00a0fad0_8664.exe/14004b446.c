/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14004b446 */

undefined8 *
FUN_14004b446(undefined8 *param_1,undefined8 *param_2,longlong param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (0 < param_3) {
    param_3 = param_3 + 1;
    do {
      uVar1 = *param_4;
      lVar2 = param_2[2];
      uVar3 = lVar2 + 1;
      if ((ulonglong)param_2[3] < uVar3) {
        (**(code **)*param_2)(param_2);
        lVar2 = param_2[2];
        uVar3 = lVar2 + 1;
      }
      param_2[2] = uVar3;
      *(undefined1 *)(param_2[1] + lVar2) = uVar1;
      param_3 = param_3 + -1;
    } while (1 < param_3);
  }
  *param_1 = param_2;
  return param_1;
}

