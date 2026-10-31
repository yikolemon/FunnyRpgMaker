/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140096b58 */

void FUN_140096b58(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1400d3680(0x30);
  *(undefined4 *)(puVar1 + 1) = 6;
  *(undefined8 *)((longlong)puVar1 + 0xc) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x14) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x1c) = 0;
  *puVar1 = std::_Node_str<wchar_t>::vftable;
  puVar1[4] = 0;
  puVar1[5] = 0;
  FUN_14009434a(param_1,puVar1);
  return;
}

