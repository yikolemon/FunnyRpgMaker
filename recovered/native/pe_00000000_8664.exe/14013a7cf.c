/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14013a7cf */

undefined8 FUN_14013a7cf(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14013ad19();
  uVar2 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x318) + 0x48) + 0x78))(uVar1);
  (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x318) + 0x48) + 0x60))(uVar1);
  return uVar2;
}

