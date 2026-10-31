/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102235e6 */

undefined4 FUN_102235e6(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar1 = 0x21;
  }
  else if (param_2 == (undefined4 *)0x0) {
    uVar1 = 6;
  }
  else {
    FUN_101c0017(*param_1,param_2[3]);
    *(undefined8 *)(param_2 + 4) = 0;
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    uVar1 = 0;
  }
  return uVar1;
}

