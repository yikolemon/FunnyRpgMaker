/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400817e3 */

undefined8 FUN_1400817e3(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (param_1 == (longlong *)0x0) {
    uVar1 = 0x21;
  }
  else if (param_2 == (undefined8 *)0x0) {
    uVar1 = 6;
  }
  else {
    FUN_14001c53d(*param_1,param_2[2]);
    param_2[2] = 0;
    param_2[3] = 0;
    *param_2 = 0;
    param_2[1] = 0;
    param_2[4] = 0;
    uVar1 = 0;
  }
  return uVar1;
}

