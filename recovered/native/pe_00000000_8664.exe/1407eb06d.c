/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407eb06d */

char * FUN_1407eb06d(void)

{
  char *pcVar1;
  uint unaff_retaddr;
  undefined4 local_res8;
  undefined1 local_resc;
  
  pcVar1 = (char *)(ulonglong)unaff_retaddr;
  if (unaff_retaddr < local_res8 && (local_resc & 2) == 0) {
    do {
      if ((*pcVar1 != ' ') && (*pcVar1 != '\t')) goto LAB_1407eb09b;
    } while (unaff_retaddr != local_res8);
    pcVar1 = (char *)(ulonglong)local_res8;
  }
LAB_1407eb09b:
  if ((uint)pcVar1 < local_res8) {
    pcVar1 = (char *)(ulonglong)((uint)pcVar1 + (uint)(*pcVar1 == '\n'));
  }
  return pcVar1;
}

