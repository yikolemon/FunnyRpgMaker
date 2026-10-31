/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18010f000 */

void FUN_18010f000(undefined2 *param_1)

{
  longlong lVar1;
  
  lVar1 = DAT_180419160;
  *param_1 = *(undefined2 *)(DAT_180419160 + 0x15d8);
  param_1[1] = *(undefined2 *)(*(longlong *)(lVar1 + 0x1608) + 0x148);
  param_1[2] = *(undefined2 *)(*(longlong *)(lVar1 + 0x1608) + 0x1e0);
  param_1[3] = *(undefined2 *)(lVar1 + 0x20e8);
  param_1[4] = *(undefined2 *)(lVar1 + 0x20f8);
  param_1[5] = *(undefined2 *)(lVar1 + 0x2108);
  param_1[6] = *(undefined2 *)(lVar1 + 0x2118);
  param_1[7] = *(undefined2 *)(lVar1 + 0x2138);
  param_1[8] = *(undefined2 *)(lVar1 + 0x2128);
  param_1[9] = *(undefined2 *)(lVar1 + 0x2158);
  param_1[10] = *(undefined2 *)(lVar1 + 0x2864);
  return;
}

