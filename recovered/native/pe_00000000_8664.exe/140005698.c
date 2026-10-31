/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140005698 */

undefined8 * FUN_140005698(undefined8 *param_1,undefined1 param_2)

{
  undefined8 uVar1;
  
  switch(param_2) {
  case 0:
    *param_1 = 0;
    break;
  case 1:
    uVar1 = FUN_140005726();
    *param_1 = uVar1;
    break;
  case 2:
    uVar1 = FUN_140005796();
    *param_1 = uVar1;
    break;
  case 3:
    uVar1 = FUN_1400057f6(&DAT_140edcdbf);
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
    uVar1 = FUN_140005870();
    *param_1 = uVar1;
    break;
  default:
    *param_1 = 0;
  }
  return param_1;
}

