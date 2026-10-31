/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14076ab94 */

uint FUN_14076ab94(void)

{
  float unaff_retaddr;
  float unaff_retaddr_00;
  undefined4 local_res8;
  
  if (unaff_retaddr <= local_res8) {
    local_res8 = unaff_retaddr;
  }
  return -(uint)(unaff_retaddr < unaff_retaddr_00) & (uint)unaff_retaddr_00 |
         ~-(uint)(unaff_retaddr < unaff_retaddr_00) & (uint)local_res8;
}

