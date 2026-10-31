/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004903c8 */

void FUN_004903c8(void)

{
  code *pcVar1;
  int iVar2;
  BOOL BVar3;
  
  iVar2 = ___acrt_get_sigabrt_handler();
  if (iVar2 != 0) {
    FUN_0049817c(0x16);
  }
  if ((DAT_0051adfc & 2) != 0) {
    BVar3 = IsProcessorFeaturePresent(0x17);
    if (BVar3 != 0) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)();
    }
    FUN_00495ccc(3,0x40000015,1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0048d3b1(3);
}

