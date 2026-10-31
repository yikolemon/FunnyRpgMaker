/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14078c6b7 */

undefined8 FUN_14078c6b7(void)

{
  undefined8 uVar1;
  uint unaff_retaddr;
  undefined4 local_res8;
  undefined4 local_resc;
  
  if (unaff_retaddr < 10) {
                    /* WARNING: Could not emulate address calculation at 0x00014078c6c8 */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)((ulonglong)unaff_retaddr * 4 + 0x102b9750))(local_res8,local_resc);
    return uVar1;
  }
  return 0;
}

