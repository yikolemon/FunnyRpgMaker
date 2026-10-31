/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180094d9a */

void FUN_180094d9a(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_180239630(0x50);
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
  FUN_18001d276(param_1,puVar1);
  return;
}

