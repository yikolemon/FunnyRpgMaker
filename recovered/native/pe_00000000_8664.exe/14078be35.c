/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14078be35 */

void FUN_14078be35(void)

{
  undefined8 unaff_RDI;
  undefined4 unaff_retaddr;
  undefined4 local_resc;
  uint uVar1;
  
  uVar1 = (uint)((ulonglong)unaff_RDI >> 0x20);
  if (uVar1 < 10) {
                    /* WARNING: Could not emulate address calculation at 0x00014078be54 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((ulonglong)uVar1 * 4 + 0x102b9718))(local_resc,unaff_retaddr);
    return;
  }
  return;
}

