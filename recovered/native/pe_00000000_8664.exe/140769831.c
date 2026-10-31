/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140769831 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140769831(void)

{
  undefined8 *unaff_RBP;
  
  if (0 < (int)(_DAT_e888b70f1039d74c & 0x85660000)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RBP = 0x1034ac3a;
  unaff_RBP[-1] = 0x140769894;
  FUN_140754dc5();
  return;
}

