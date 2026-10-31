/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14003064f */

undefined8 * FUN_14003064f(undefined8 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_1401887b0();
  uVar1 = *param_2;
  *(undefined8 *)((longlong)puVar2 + 0xe) = 0;
  puVar2[1] = 0;
  *puVar2 = spdlog::details::ch_formatter::vftable;
  *(undefined1 *)(puVar2 + 3) = uVar1;
  *param_1 = puVar2;
  return param_1;
}

