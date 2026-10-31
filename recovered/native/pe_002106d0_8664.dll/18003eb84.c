/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18003eb84 */

undefined8 * FUN_18003eb84(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_180239630(0x30);
  uVar1 = *param_3;
  uVar2 = param_2[1];
  puVar3[1] = *param_2;
  puVar3[2] = uVar2;
  *puVar3 = spdlog::details::z_formatter<spdlog::details::null_scoped_padder>::vftable;
  *(undefined4 *)(puVar3 + 3) = uVar1;
  puVar3[4] = 0;
  *(undefined4 *)(puVar3 + 5) = 0;
  *param_1 = puVar3;
  return param_1;
}

