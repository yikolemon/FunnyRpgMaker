/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180042768 */

undefined8 Catch_180042768(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = (**(code **)(**(longlong **)(param_2 + 0x60) + 8))();
  lVar1 = param_2 + 0x20;
  FUN_180001e92(lVar1,uVar2);
  FUN_1800432de(*(undefined8 *)(param_2 + 0x50),lVar1);
  FUN_180001ef2(lVar1);
  return 0x180042751;
}

