/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14003a68f */

undefined8 FUN_14003a68f(void)

{
  char cVar1;
  
  cVar1 = FUN_14003aa9f();
  if (((cVar1 != '\0') && (cVar1 = FUN_14003ae9f(), cVar1 != '\0')) &&
     (cVar1 = FUN_14003be6e(), cVar1 != '\0')) {
    DAT_140f14001 = 0;
    return 1;
  }
  return 0;
}

