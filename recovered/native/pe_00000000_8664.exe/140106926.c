/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140106926 */

void FUN_140106926(void)

{
  float fVar1;
  longlong lVar2;
  
  lVar2 = FUN_14007a54a();
  fVar1 = DAT_140210014;
  FUN_14007ad62(0xb,(float)(int)(*(float *)(lVar2 + 0x50) * DAT_140210014));
  FUN_14007ad62(0xe,(float)(int)(fVar1 * *(float *)(lVar2 + 0x60)));
  return;
}

