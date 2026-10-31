/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10129176 */

char * __fastcall FUN_10129176(int param_1)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = 0x272c;
  if ((*(uint *)(param_1 + 0xc) >> 0x1a & 1) == 0) {
    if (((*(uint *)(param_1 + 0xc) >> 10 & 1) == 0) ||
       (iVar1 = _strcmp(*(char **)(param_1 + 4),"##MainMenuBar"), iVar1 != 0)) {
      if (*(int *)(param_1 + 0x434) != 0) {
        return "(Dock node)";
      }
      iVar1 = 0x2730;
    }
    else {
      iVar1 = 0x2728;
    }
  }
  pcVar2 = "*Missing Text*";
  if (*(char **)(DAT_1039d74c + iVar1) != (char *)0x0) {
    pcVar2 = *(char **)(DAT_1039d74c + iVar1);
  }
  return pcVar2;
}

