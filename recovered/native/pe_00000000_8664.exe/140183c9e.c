/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140183c9e */

undefined8 FUN_140183c9e(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    uVar1 = 0x21;
  }
  else if (param_2 == (undefined8 *)0x0) {
    uVar1 = 6;
  }
  else {
    FUN_140128b39(*param_1,param_2[2]);
    param_2[2] = 0;
    param_2[3] = 0;
    *param_2 = 0;
    param_2[1] = 0;
    param_2[4] = 0;
    uVar1 = 0;
  }
  return uVar1;
}

