/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18001db56 */

void FUN_18001db56(undefined8 param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_180239630(0x20);
  *puVar1 = std::_Node_base::vftable;
  *(undefined4 *)(puVar1 + 1) = param_2;
  *(undefined8 *)((longlong)puVar1 + 0xc) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x14) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x1c) = 0;
  FUN_18001d276(param_1,puVar1);
  return;
}

