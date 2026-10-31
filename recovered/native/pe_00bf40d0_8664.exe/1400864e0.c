/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400864e0 */

undefined8 FUN_1400864e0(undefined8 param_1)

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
  return param_1;
}

