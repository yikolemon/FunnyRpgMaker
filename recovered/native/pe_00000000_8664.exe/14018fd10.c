/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14018fd10 */

/* WARNING: Control flow encountered bad instruction data */

longlong * Unwind_14018fd10(longlong *param_1,undefined8 param_2,byte *param_3,longlong *param_4)

{
  char *in_RAX;
  
  *in_RAX = *in_RAX + (byte)in_RAX;
  DAT_1561816ab = DAT_1561816ab & (byte)in_RAX;
  if (DAT_1561816ab != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_4 = *param_1;
  if ((*param_3 & 1) != 0) {
    *param_4 = *(longlong *)((ulonglong)*(uint *)(param_3 + 0x14) + *param_1);
  }
  return param_4;
}

