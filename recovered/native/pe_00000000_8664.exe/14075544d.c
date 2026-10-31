/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14075544d */

char * FUN_14075544d(void)

{
  char *pcVar1;
  uint uVar2;
  uint unaff_retaddr;
  uint local_res8;
  
  pcVar1 = (char *)(ulonglong)unaff_retaddr;
  uVar2 = -(uint)(local_res8 == 0) | local_res8;
  if (unaff_retaddr < uVar2) {
    do {
      if (*pcVar1 == '#') {
        if (pcVar1[1] == '#') {
          return pcVar1;
        }
      }
      else if (*pcVar1 == '\0') {
        return pcVar1;
      }
    } while (unaff_retaddr != uVar2);
    pcVar1 = (char *)(ulonglong)uVar2;
  }
  return pcVar1;
}

