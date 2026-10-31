/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18003a783 */

undefined8 * FUN_18003a783(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_180239630(0x18);
  uVar1 = param_2[1];
  puVar2[1] = *param_2;
  puVar2[2] = uVar1;
  *puVar2 = spdlog::details::color_start_formatter::vftable;
  *param_1 = puVar2;
  return param_1;
}

