/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140011793 */

undefined8 * FUN_140011793(undefined8 *param_1,undefined8 *param_2,char param_3,char param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (param_4 == '\0') {
    if (param_3 == '\x03') {
      lVar1 = param_2[2];
      uVar2 = lVar1 + 1;
      if ((ulonglong)param_2[3] < uVar2) {
        (**(code **)*param_2)(param_2);
        lVar1 = param_2[2];
        uVar2 = lVar1 + 1;
      }
      param_2[2] = uVar2;
      *(undefined2 *)(param_2[1] + lVar1 * 2) = 0x20;
    }
    else if (param_3 == '\x01') {
      lVar1 = param_2[2];
      uVar2 = lVar1 + 1;
      if ((ulonglong)param_2[3] < uVar2) {
        (**(code **)*param_2)(param_2);
        lVar1 = param_2[2];
        uVar2 = lVar1 + 1;
      }
      param_2[2] = uVar2;
      *(undefined2 *)(param_2[1] + lVar1 * 2) = 0x2b;
    }
  }
  else {
    lVar1 = param_2[2];
    uVar2 = lVar1 + 1;
    if ((ulonglong)param_2[3] < uVar2) {
      (**(code **)*param_2)(param_2);
      lVar1 = param_2[2];
      uVar2 = lVar1 + 1;
    }
    param_2[2] = uVar2;
    *(undefined2 *)(param_2[1] + lVar1 * 2) = 0x2d;
  }
  *param_1 = param_2;
  return param_1;
}

