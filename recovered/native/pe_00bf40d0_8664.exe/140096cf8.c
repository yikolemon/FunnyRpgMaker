/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140096cf8 */

void FUN_140096cf8(void)

{
  code *pcVar1;
  BOOL BVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  puVar4 = auStack_28;
  lVar3 = __acrt_get_sigabrt_handler();
  if (lVar3 != 0) {
    FUN_1400a3fc4(0x16);
  }
  if ((DAT_14013bb28 & 2) != 0) {
    BVar2 = IsProcessorFeaturePresent(0x17);
    puVar4 = auStack_28;
    if (BVar2 != 0) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(7);
      puVar4 = auStack_20;
    }
    *(undefined8 *)(puVar4 + -8) = 0x140096d43;
    FUN_1400a0f08(3,0x40000015,1);
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar4 + -8) = &UNK_140096d4d;
  FUN_1400939e0(3);
}

