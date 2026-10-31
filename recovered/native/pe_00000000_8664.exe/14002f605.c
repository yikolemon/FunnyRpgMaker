/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14002f605 */

undefined8 * FUN_14002f605(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_1401887b0(0x18);
  uVar1 = param_2[1];
  puVar2[1] = *param_2;
  puVar2[2] = uVar1;
  *puVar2 = spdlog::details::name_formatter<spdlog::details::scoped_padder>::vftable;
  *param_1 = puVar2;
  return param_1;
}

