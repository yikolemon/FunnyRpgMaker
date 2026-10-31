/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404a23d0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1404a23d0(uint param_1,ulonglong param_2)

{
  bool bVar1;
  
  if (param_1 < 0xdead) {
    if (param_1 != 0xdeac) {
      if (param_1 < 0xc434) {
        if ((((param_1 != 0xc433) && (param_1 != 0x2a)) && (param_1 != 0xc42c)) &&
           ((param_1 != 0xc42d && (param_1 != 0xc42e)))) {
          bVar1 = param_1 == 0xc431;
LAB_1404a241d:
          if (!bVar1) goto LAB_1404a2421;
        }
      }
      else if (param_1 != 0xc435) {
        if (param_1 == 0xd698) goto LAB_1404a245b;
        if (param_1 != 0xdeaa) {
          bVar1 = param_1 == 0xdeab;
          goto LAB_1404a241d;
        }
      }
    }
  }
  else if ((((param_1 != 0xdead) && (param_1 != 0xdeae)) && (param_1 != 0xdeaf)) &&
          (((param_1 != 0xdeb0 && (param_1 != 0xdeb1)) &&
           ((param_1 != 0xdeb2 && ((param_1 != 0xdeb3 && (param_1 != 65000)))))))) {
    if (param_1 != 0xfde9) goto LAB_1404a2421;
LAB_1404a245b:
    param_2 = (ulonglong)((uint)param_2 & 8);
    goto LAB_1404a2421;
  }
  param_2 = 0;
LAB_1404a2421:
  (*ram0x00014059e0f8)(param_1,param_2);
  return;
}

