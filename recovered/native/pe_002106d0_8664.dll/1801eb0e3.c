/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801eb0e3 */

undefined8 FUN_1801eb0e3(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_1801eb62d();
  uVar2 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x318) + 0x48) + 0x78))(uVar1);
  (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x318) + 0x48) + 0x60))(uVar1);
  return uVar2;
}

