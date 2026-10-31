/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140105be0 */

void FUN_140105be0(void)

{
  longlong lVar1;
  
  lVar1 = 0;
  do {
    if (*(longlong *)(&DAT_140f31828 + lVar1) != 0) {
      FUN_140077b90();
    }
    lVar1 = lVar1 + -0x30;
  } while (lVar1 != -0x90);
  return;
}

