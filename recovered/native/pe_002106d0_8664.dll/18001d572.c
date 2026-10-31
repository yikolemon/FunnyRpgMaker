/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18001d572 */

undefined8 * FUN_18001d572(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)FUN_180239630(0x20);
  *(undefined4 *)(puVar1 + 1) = 0x11;
  *(undefined8 *)((longlong)puVar1 + 0xc) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x14) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x1c) = 0;
  *puVar1 = std::_Node_endif::vftable;
  FUN_18001d276(param_1,puVar1);
  puVar2 = (undefined8 *)FUN_180239630(0x30);
  *(undefined4 *)(puVar2 + 1) = 0x10;
  *(undefined8 *)((longlong)puVar2 + 0xc) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x14) = 0;
  *(undefined4 *)((longlong)puVar2 + 0x1c) = 0;
  *puVar2 = std::_Node_if::vftable;
  puVar2[4] = puVar1;
  puVar2[5] = 0;
  FUN_180020978(*(undefined8 *)(param_2 + 0x10),puVar2);
  return puVar1;
}

