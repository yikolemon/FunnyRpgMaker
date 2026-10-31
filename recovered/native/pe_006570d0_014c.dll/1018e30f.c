/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1018e30f */

undefined * FUN_1018e30f(uint param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_1033cdfd;
  if (param_1 < 5) {
    puVar1 = (&PTR_DAT_10300bc8)[param_1];
  }
  return puVar1;
}

