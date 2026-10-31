/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400811cd */

undefined8 FUN_1400811cd(void)

{
  undefined8 uVar1;
  
  if (*(code **)(DAT_140f2a910 + 0xc48) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001400811e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(DAT_140f2a910 + 0xc48))();
    return uVar1;
  }
  return 0;
}

