/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14078c7df */

undefined8 FUN_14078c7df(void)

{
  undefined8 uVar1;
  uint unaff_retaddr;
  undefined4 unaff_retaddr_00;
  undefined4 local_res8;
  
  if (unaff_retaddr < 10) {
                    /* WARNING: Could not emulate address calculation at 0x00014078c7f5 */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)((ulonglong)unaff_retaddr * 4 + 0x102b9778))(unaff_retaddr_00,local_res8);
    return uVar1;
  }
  return 0;
}

