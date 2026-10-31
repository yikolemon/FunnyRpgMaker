/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802345b2 */

undefined8 FUN_1802345b2(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    uVar1 = 0x21;
  }
  else if (param_2 == (undefined8 *)0x0) {
    uVar1 = 6;
  }
  else {
    FUN_1801c9b65(*param_1,param_2[2]);
    param_2[2] = 0;
    param_2[3] = 0;
    *param_2 = 0;
    param_2[1] = 0;
    param_2[4] = 0;
    uVar1 = 0;
  }
  return uVar1;
}

