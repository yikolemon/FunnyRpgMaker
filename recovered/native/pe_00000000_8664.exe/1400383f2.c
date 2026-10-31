/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400383f2 */

undefined8 Catch_1400383f2(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = (**(code **)(**(longlong **)(param_2 + 0x60) + 8))();
  lVar1 = param_2 + 0x20;
  FUN_1400027d2(lVar1,uVar2);
  FUN_140038f90(*(undefined8 *)(param_2 + 0x50),lVar1);
  FUN_14000109c(lVar1);
  return 0x1400383db;
}

