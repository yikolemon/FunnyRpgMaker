/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407e7fe2 */

int FUN_1407e7fe2(void)

{
  uint unaff_retaddr;
  undefined4 local_res8;
  
  return ((*(int *)((ulonglong)
                    *(uint *)((ulonglong)*(uint *)((ulonglong)unaff_retaddr + 0x290) + 0x70) +
                   (ulonglong)(local_res8 & 0x7ffff) * 4) << 0xc) >> 9) +
         *(int *)((ulonglong)*(uint *)((ulonglong)unaff_retaddr + 0x290) + 100);
}

