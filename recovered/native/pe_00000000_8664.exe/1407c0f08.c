/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407c0f08 */

float FUN_1407c0f08(void)

{
  uint unaff_retaddr;
  float unaff_retaddr_00;
  
  return unaff_retaddr_00 /
         (*(float *)((ulonglong)unaff_retaddr + 0x18) - *(float *)((ulonglong)unaff_retaddr + 0x14))
  ;
}

