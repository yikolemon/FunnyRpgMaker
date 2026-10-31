/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14077dc6a */

int FUN_14077dc6a(void)

{
  int unaff_retaddr;
  undefined4 local_res8;
  undefined4 local_resc;
  
  if (unaff_retaddr < local_resc) {
    local_resc = unaff_retaddr;
  }
  if (unaff_retaddr < local_res8) {
    local_resc = local_res8;
  }
  return local_resc;
}

