/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18023845b */

void FUN_18023845b(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xd0);
  FUN_1802383de();
  if (*(longlong *)(param_1 + 0x70) != param_1 + 0x88) {
    FUN_1801c9b65(uVar1);
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  FUN_1801c9b65(uVar1,*(undefined8 *)(param_1 + 0x58));
  FUN_1802a89a0(param_1,0,0xd8);
  return;
}

