/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140093f90 */

void FUN_140093f90(undefined8 param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1400d3680(0x28);
  *(undefined4 *)(puVar1 + 1) = 0xd;
  *(undefined8 *)((longlong)puVar1 + 0xc) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x14) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x1c) = 0;
  *puVar1 = std::_Node_capture::vftable;
  *(undefined4 *)(puVar1 + 4) = param_2;
  FUN_14009434a(param_1,puVar1);
  return;
}

