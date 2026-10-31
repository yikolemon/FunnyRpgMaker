/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140166067 */

void FUN_140166067(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    uVar1 = *param_1;
    FUN_140128b39(uVar1,param_1[0xf]);
    param_1[0xf] = 0;
    FUN_140128b39(uVar1,param_1[0x11]);
    param_1[0x11] = 0;
  }
  return;
}

