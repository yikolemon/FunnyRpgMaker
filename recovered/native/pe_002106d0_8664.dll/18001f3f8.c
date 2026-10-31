/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18001f3f8 */

undefined8 * FUN_18001f3f8(longlong param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)FUN_180239630(0x28);
  *(uint *)(puVar1 + 1) = param_2 & 0xff | 10;
  *(undefined8 *)((longlong)puVar1 + 0xc) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x14) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x1c) = 0;
  *puVar1 = std::_Node_assert::vftable;
  puVar1[4] = 0;
  puVar2 = (undefined8 *)FUN_180239630(0x20);
  *puVar2 = std::_Node_base::vftable;
  *(undefined4 *)(puVar2 + 1) = 1;
  *(undefined8 *)((longlong)puVar2 + 0xc) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x14) = 0;
  *(undefined4 *)((longlong)puVar2 + 0x1c) = 0;
  FUN_18001d276(param_1,puVar1);
  puVar1[4] = puVar2;
  puVar2[3] = puVar1;
  *(undefined8 **)(param_1 + 8) = puVar2;
  return puVar1;
}

