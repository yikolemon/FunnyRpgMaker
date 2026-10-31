/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10234c50 */

void FUN_10234c50(PVOID param_1)

{
  code *pcVar1;
  PVOID pvVar2;
  int iVar3;
  BOOL BVar4;
  
  if (DAT_10389e08 != 0) {
    pvVar2 = EncodePointer(param_1);
    DAT_10389e08 = DAT_10389e08 + -1;
    *(PVOID *)(DAT_10389e08 * 4 + 0x1039d7e4) = pvVar2;
    return;
  }
  iVar3 = ___acrt_get_sigabrt_handler();
  if (iVar3 != 0) {
    FUN_10276ec5(0x16);
  }
  if ((DAT_1039b37c & 2) != 0) {
    BVar4 = IsProcessorFeaturePresent(0x17);
    if (BVar4 != 0) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)();
    }
    FUN_10273eec(3,0x40000015,1);
  }
                    /* WARNING: Subroutine does not return */
  __exit(3);
}

