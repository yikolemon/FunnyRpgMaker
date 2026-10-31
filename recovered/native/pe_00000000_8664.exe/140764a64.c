/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140764a64 */

ulonglong FUN_140764a64(void)

{
  uint uVar1;
  char cVar2;
  uint unaff_EBX;
  ulonglong uVar3;
  
  do {
    uVar3 = (ulonglong)unaff_EBX;
    uVar1 = *(uint *)(uVar3 + 0x1d8);
    do {
      if ((int)uVar1 < 1) {
        return uVar3;
      }
      unaff_EBX = *(uint *)(((ulonglong)*(uint *)(uVar3 + 0x1e0) - 4) + (ulonglong)uVar1 * 4);
      cVar2 = FUN_14076255d();
    } while (cVar2 == '\0');
  } while( true );
}

