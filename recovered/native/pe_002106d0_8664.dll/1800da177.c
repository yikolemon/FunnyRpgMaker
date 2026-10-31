/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800da177 */

void FUN_1800da177(void)

{
  longlong lVar1;
  
  lVar1 = 0;
  do {
    if (*(longlong *)(&DAT_1804184a8 + lVar1) != 0) {
      FUN_1800fe8d4();
    }
    lVar1 = lVar1 + -0x30;
  } while (lVar1 != -0x90);
  return;
}

