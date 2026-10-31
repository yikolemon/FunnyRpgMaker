/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140085c30 */

void FUN_140085c30(void)

{
  LPCRITICAL_SECTION p_Var1;
  
  LOCK();
  DAT_14012eac8 = DAT_14012eac8 + 1;
  UNLOCK();
  if (DAT_14012eac8 == 0) {
    p_Var1 = (LPCRITICAL_SECTION)&DAT_14013c9d0;
    do {
      FUN_14008b980(p_Var1);
      p_Var1 = p_Var1 + 1;
    } while (p_Var1 != (LPCRITICAL_SECTION)&DAT_14013cb10);
  }
  FUN_14008b5e0(0x1400b4fb0);
  return;
}

