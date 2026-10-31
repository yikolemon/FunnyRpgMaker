/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14002d214 */

char * FUN_14002d214(char *param_1,char *param_2)

{
  longlong lVar1;
  char *pcVar2;
  char *pcVar3;
  
  do {
    if ((param_1 == param_2) || (*(longlong *)(param_1 + 0x10) == 0)) {
      return param_1;
    }
    lVar1 = FUN_14000e108(param_1,0x7b,0);
    if (lVar1 == -1) {
      pcVar2 = *(char **)param_1;
LAB_14002d262:
      if (*(ulonglong *)(param_1 + 0x18) < 0x10) {
        pcVar2 = param_1;
      }
      if (*pcVar2 != '!') {
        return param_1;
      }
    }
    else {
      pcVar2 = *(char **)param_1;
      pcVar3 = param_1;
      if (0xf < *(ulonglong *)(param_1 + 0x18)) {
        pcVar3 = pcVar2;
      }
      if (pcVar3[*(longlong *)(param_1 + 0x10) + -1] != '}') goto LAB_14002d262;
    }
    param_1 = param_1 + 0x20;
  } while( true );
}

