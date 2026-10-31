/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1008c400 */

undefined4 FUN_1008c400(char *param_1,char *param_2)

{
  int iVar1;
  char *pcVar2;
  
  while( true ) {
    if (param_1 == param_2) {
      return 1;
    }
    pcVar2 = *(char **)(param_1 + 0x10);
    if (*(char **)(param_1 + 0x10) == (char *)0x0) {
      pcVar2 = param_1;
    }
    if (((*pcVar2 != '\x02') || (iVar1 = FUN_10086870(), iVar1 != 2)) ||
       (pcVar2 = (char *)FUN_1008c5a4(0), *pcVar2 != '\x03')) break;
    param_1 = param_1 + 0x18;
  }
  return 0;
}

