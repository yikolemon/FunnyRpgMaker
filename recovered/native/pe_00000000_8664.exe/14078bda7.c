/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14078bda7 */

undefined8 FUN_14078bda7(void)

{
  undefined8 uVar1;
  uint unaff_retaddr;
  
  if ((unaff_retaddr & 0xfffffffe) == 6) {
    uVar1 = FUN_140752381();
  }
  else if ((unaff_retaddr & 0xfffffffe) == 4) {
    uVar1 = FUN_140752381();
  }
  else {
    if (unaff_retaddr < 10) {
                    /* WARNING: Could not emulate address calculation at 0x00014078bde0 */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)((ulonglong)unaff_retaddr * 4 + 0x102b96f0))();
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}

