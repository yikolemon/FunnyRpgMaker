/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801c0c22 */

void FUN_1801c0c22(void)

{
  float fVar1;
  longlong lVar2;
  
  lVar2 = FUN_18010128e();
  fVar1 = DAT_1802dc418;
  FUN_180101aa6(0xb,(float)(int)(*(float *)(lVar2 + 0x50) * DAT_1802dc418));
  FUN_180101aa6(0xe,(float)(int)(fVar1 * *(float *)(lVar2 + 0x60)));
  return;
}

