/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400a8149 */

char * FUN_1400a8149(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  
  lVar2 = 0x2a08;
  if ((*(uint *)(param_1 + 0x14) >> 0x1a & 1) == 0) {
    if (((*(uint *)(param_1 + 0x14) >> 10 & 1) == 0) ||
       (iVar1 = strcmp(*(char **)(param_1 + 8),"##MainMenuBar"), iVar1 != 0)) {
      if (*(longlong *)(param_1 + 0x4c8) != 0) {
        return "(Dock node)";
      }
      lVar2 = 0x2a10;
    }
    else {
      lVar2 = 0x2a00;
    }
  }
  pcVar3 = "*Missing Text*";
  if (*(char **)(DAT_140f2a910 + lVar2) != (char *)0x0) {
    pcVar3 = *(char **)(DAT_140f2a910 + lVar2);
  }
  return pcVar3;
}

