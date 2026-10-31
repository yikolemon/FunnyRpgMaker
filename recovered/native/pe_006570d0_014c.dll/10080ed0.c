/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10080ed0 */

undefined8 * __thiscall FUN_10080ed0(undefined8 *param_1,undefined1 param_2)

{
  undefined4 uVar1;
  
  switch(param_2) {
  case 0:
    *(undefined4 *)param_1 = 0;
    break;
  case 1:
    uVar1 = FUN_10080f6c();
    *(undefined4 *)param_1 = uVar1;
    break;
  case 2:
    uVar1 = FUN_10058350();
    *(undefined4 *)param_1 = uVar1;
    break;
  case 3:
    uVar1 = FUN_100583d4(&DAT_10356101);
    *(undefined4 *)param_1 = uVar1;
    break;
  case 4:
    *(undefined1 *)param_1 = 0;
    break;
  case 5:
    *(undefined4 *)((int)param_1 + 4) = 0;
    *(undefined4 *)param_1 = 0;
    break;
  case 6:
    *(undefined4 *)((int)param_1 + 4) = 0;
    *(undefined4 *)param_1 = 0;
    break;
  case 7:
    *param_1 = 0;
    break;
  case 8:
    uVar1 = FUN_1005846c();
    *(undefined4 *)param_1 = uVar1;
    break;
  default:
    *(undefined4 *)param_1 = 0;
  }
  return param_1;
}

