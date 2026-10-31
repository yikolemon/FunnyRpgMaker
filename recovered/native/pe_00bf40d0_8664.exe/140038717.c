/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140038717 */

undefined8 FUN_140038717(longlong *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_140038c61(param_1);
  uVar2 = (**(code **)(*(longlong *)(param_1[99] + 0x48) + 0x78))(uVar1);
  (**(code **)(*(longlong *)(param_1[99] + 0x48) + 0x60))(uVar1);
  return uVar2;
}

