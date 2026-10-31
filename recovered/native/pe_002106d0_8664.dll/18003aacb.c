/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18003aacb */

undefined8 * FUN_18003aacb(undefined8 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_180239630();
  uVar1 = *param_2;
  *(undefined8 *)((longlong)puVar2 + 0xe) = 0;
  puVar2[1] = 0;
  *puVar2 = spdlog::details::ch_formatter::vftable;
  *(undefined1 *)(puVar2 + 3) = uVar1;
  *param_1 = puVar2;
  return param_1;
}

