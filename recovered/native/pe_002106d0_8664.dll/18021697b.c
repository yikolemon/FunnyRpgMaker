/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18021697b */

void FUN_18021697b(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    uVar1 = *param_1;
    FUN_1801c9b65(uVar1,param_1[0xf]);
    param_1[0xf] = 0;
    FUN_1801c9b65(uVar1,param_1[0x11]);
    param_1[0x11] = 0;
  }
  return;
}

