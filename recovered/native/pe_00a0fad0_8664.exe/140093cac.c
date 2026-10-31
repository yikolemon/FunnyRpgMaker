/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140093cac */

undefined8 * FUN_140093cac(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1400d3680(0x30);
  *(undefined4 *)(puVar1 + 1) = 0x14;
  *(undefined8 *)((longlong)puVar1 + 0xc) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x14) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x1c) = 0;
  *puVar1 = std::_Root_node::vftable;
  puVar1[4] = 0;
  puVar1[5] = 0;
  *param_1 = puVar1;
  param_1[1] = puVar1;
  *(undefined4 *)(param_1 + 2) = param_3;
  param_1[3] = param_2;
  return param_1;
}

