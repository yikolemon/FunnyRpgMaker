/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140115938 */

void FUN_140115938(void)

{
  code *pcVar1;
  longlong lVar2;
  BOOL BVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  puVar4 = auStack_28;
  lVar2 = __acrt_get_sigabrt_handler();
  if (lVar2 != 0) {
    FUN_140124874(0x16);
  }
  if ((DAT_1401ca578 & 2) != 0) {
    BVar3 = IsProcessorFeaturePresent(0x17);
    puVar4 = auStack_28;
    if (BVar3 != 0) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(7);
      puVar4 = auStack_20;
    }
    *(undefined8 *)(puVar4 + -8) = 0x140115983;
    FUN_140120f50(3,0x40000015);
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar4 + -8) = &UNK_14011598d;
  FUN_1401115f4(3);
}

