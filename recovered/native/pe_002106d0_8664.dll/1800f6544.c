/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f6544 */

void FUN_1800f6544(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_18005b5ea(**(undefined4 **)(param_1 + 0x10));
  **(undefined8 **)(param_1 + 8) = uVar1;
  **(undefined1 **)(param_1 + 0x18) = 1;
  return;
}

