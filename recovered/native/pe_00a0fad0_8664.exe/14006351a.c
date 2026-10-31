/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14006351a */

undefined8 * FUN_14006351a(undefined8 *param_1,undefined1 param_2)

{
  undefined8 uVar1;
  
  switch(param_2) {
  case 0:
    *param_1 = 0;
    break;
  case 1:
    uVar1 = FUN_1400635a8();
    *param_1 = uVar1;
    break;
  case 2:
    uVar1 = FUN_140063644();
    *param_1 = uVar1;
    break;
  case 3:
    uVar1 = FUN_1400636a4(&DAT_1401728de);
    *param_1 = uVar1;
    break;
  case 4:
    *(undefined1 *)param_1 = 0;
    break;
  case 5:
    *param_1 = 0;
    break;
  case 6:
    *param_1 = 0;
    break;
  case 7:
    *param_1 = 0;
    break;
  case 8:
    uVar1 = FUN_14006371e();
    *param_1 = uVar1;
    break;
  default:
    *param_1 = 0;
  }
  return param_1;
}

