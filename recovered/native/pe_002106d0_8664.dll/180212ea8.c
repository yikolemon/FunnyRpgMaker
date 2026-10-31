/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180212ea8 */

void FUN_180212ea8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined **ppuVar2;
  undefined8 *puVar3;
  
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[1] = param_2;
  param_1[2] = param_3;
  *param_1 = param_2;
  param_1[4] = param_4;
  ppuVar2 = &PTR_FUN_18033c7b0;
  puVar3 = param_1 + 5;
  for (lVar1 = 0xd; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *ppuVar2;
    ppuVar2 = ppuVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}

