/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180119400 */

void FUN_180119400(undefined4 param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = DAT_180419160;
  *(uint *)(DAT_180419160 + 0x1fa8) = *(uint *)(DAT_180419160 + 0x1fa8) | 4;
  *(undefined4 *)(lVar1 + 0x1fc4) = param_1;
  *(undefined4 *)(lVar1 + 0x1fc8) = param_2;
  return;
}

