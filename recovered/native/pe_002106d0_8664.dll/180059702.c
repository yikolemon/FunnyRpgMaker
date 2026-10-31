/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180059702 */

undefined8 * FUN_180059702(undefined8 *param_1,undefined1 param_2)

{
  undefined8 uVar1;
  
  switch(param_2) {
  case 0:
    *param_1 = 0;
    break;
  case 1:
    uVar1 = FUN_1800572e4();
    *param_1 = uVar1;
    break;
  case 2:
    uVar1 = FUN_180059790();
    *param_1 = uVar1;
    break;
  case 3:
    uVar1 = FUN_1800597f0(&DAT_1803861e4);
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
    uVar1 = FUN_18005986a();
    *param_1 = uVar1;
    break;
  default:
    *param_1 = 0;
  }
  return param_1;
}

