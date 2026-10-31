/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180116b13 */

void FUN_180116b13(undefined8 *param_1)

{
  longlong lVar1;
  
  lVar1 = DAT_180419160;
  *(uint *)(DAT_180419160 + 0x2030) = *(uint *)(DAT_180419160 + 0x2030) | 0x80;
  *(undefined8 *)(lVar1 + 0x2064) = *param_1;
  return;
}

