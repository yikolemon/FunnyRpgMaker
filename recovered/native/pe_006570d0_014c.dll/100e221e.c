/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100e221e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e221e(void)

{
  double dVar1;
  
  dVar1 = DAT_1028b438;
  if (DAT_1039d410 != '\0') {
    dVar1 = (double)_DAT_1039d414;
  }
  (**(code **)(*DAT_1039d258 + 0x10))(dVar1);
  return;
}

