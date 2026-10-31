/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14000d704 */

undefined8 * FUN_14000d704(undefined8 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  ulonglong uVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar1 = *param_2;
  *(undefined1 *)param_1 = uVar1;
  switch(uVar1) {
  case 1:
    uVar2 = FUN_14000db4c(*(undefined8 *)(param_2 + 8));
    break;
  case 2:
    uVar2 = FUN_14000df9e(*(undefined8 *)(param_2 + 8));
    break;
  case 3:
    uVar2 = FUN_14000e1a8(*(undefined8 *)(param_2 + 8));
    break;
  case 4:
    uVar2 = (ulonglong)(byte)param_2[8];
    break;
  case 5:
    uVar2 = *(ulonglong *)(param_2 + 8);
    break;
  case 6:
    uVar2 = *(ulonglong *)(param_2 + 8);
    break;
  case 7:
    uVar2 = *(ulonglong *)(param_2 + 8);
    break;
  case 8:
    uVar2 = FUN_14000e222(*(undefined8 *)(param_2 + 8));
    break;
  default:
    goto switchD_14000d747_default;
  }
  param_1[1] = uVar2;
switchD_14000d747_default:
  return param_1;
}

