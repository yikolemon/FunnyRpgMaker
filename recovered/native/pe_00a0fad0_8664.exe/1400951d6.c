/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400951d6 */

void FUN_1400951d6(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1400d3680(0x50);
  *(undefined4 *)(puVar1 + 1) = 7;
  *(undefined8 *)((longlong)puVar1 + 0xc) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x14) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x1c) = 0;
  *puVar1 = std::_Node_class<wchar_t,std::regex_traits<wchar_t>_>::vftable;
  puVar1[9] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *(undefined2 *)(puVar1 + 8) = 0;
  FUN_14009434a(param_1,puVar1);
  return;
}

