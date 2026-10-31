/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14000de58 */

undefined * Catch_14000de58(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_2 + 0x58) + 8))();
  FUN_14000169c(*(undefined8 *)(param_2 + 0x48),uVar1);
  return &DAT_14000de0e;
}

