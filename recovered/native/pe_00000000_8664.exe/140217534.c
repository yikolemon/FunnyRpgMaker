/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140217534 */

undefined8 *
FUN_140217534(undefined8 *param_1,undefined1 *param_2,undefined1 *param_3,undefined8 *param_4)

{
  undefined1 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    uVar1 = *param_2;
    lVar2 = param_4[2];
    uVar3 = lVar2 + 1;
    if ((ulonglong)param_4[3] < uVar3) {
      (**(code **)*param_4)(param_4);
      lVar2 = param_4[2];
      uVar3 = lVar2 + 1;
    }
    param_4[2] = uVar3;
    *(undefined1 *)(param_4[1] + lVar2) = uVar1;
  }
  *param_1 = param_2;
  param_1[1] = param_4;
  return param_1;
}

