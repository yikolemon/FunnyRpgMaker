/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14006baa2 */

undefined8 FUN_14006baa2(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 0x18);
  FUN_14006c861(puVar1,*(undefined8 *)(param_1 + 0x10));
  FUN_14006c884((undefined8 *)(param_1 + 0x90));
  FUN_14006c8a5((undefined8 *)(param_1 + 0xa8));
  *(undefined8 **)(param_1 + 0xa8) = puVar1;
  FUN_14006c8ef((undefined8 *)(param_1 + 0xe0));
  *(undefined8 **)(param_1 + 0xe0) = puVar1;
  return 0;
}

