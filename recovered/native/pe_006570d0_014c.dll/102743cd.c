/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102743cd */

void FUN_102743cd(void)

{
  code *pcVar1;
  BOOL BVar2;
  int iVar3;
  
  iVar3 = FUN_1027441e();
  if (iVar3 != 0) {
    return;
  }
  iVar3 = ___acrt_get_sigabrt_handler();
  if (iVar3 != 0) {
    FUN_10276ec5(0x16);
  }
  if ((DAT_1039b37c & 2) != 0) {
    BVar2 = IsProcessorFeaturePresent(0x17);
    if (BVar2 != 0) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)();
    }
    FUN_10273eec(3,0x40000015,1);
  }
                    /* WARNING: Subroutine does not return */
  __exit(3);
}

