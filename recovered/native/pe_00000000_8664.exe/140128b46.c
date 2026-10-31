/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140128b46 */

void FUN_140128b46(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    uVar1 = *param_1;
    FUN_140128abc();
    FUN_140128b39(uVar1,param_1);
    return;
  }
  return;
}

