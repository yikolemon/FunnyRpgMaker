/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18000c251 */

undefined8 * FUN_18000c251(undefined8 *param_1,undefined8 *param_2,char param_3,char param_4)

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
      *(undefined1 *)(param_2[1] + lVar1) = 0x20;
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
      *(undefined1 *)(param_2[1] + lVar1) = 0x2b;
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
    *(undefined1 *)(param_2[1] + lVar1) = 0x2d;
  }
  *param_1 = param_2;
  return param_1;
}

