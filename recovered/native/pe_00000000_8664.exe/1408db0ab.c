/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408db0ab */

void FUN_1408db0ab(void)

{
  ushort in_FPUStatusWord;
  ushort unaff_retaddr;
  
  if (((unaff_retaddr != 0x27f) && ((unaff_retaddr & 0x20) != 0)) &&
     ((in_FPUStatusWord & 0x20) != 0)) {
    FUN_1408dec17();
    return;
  }
  return;
}

