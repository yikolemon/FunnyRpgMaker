/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18008d440 */

ulonglong FUN_18008d440(char *param_1,char *param_2)

{
  longlong lVar1;
  char *pcVar2;
  undefined8 unaff_RSI;
  ulonglong uVar3;
  
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  do {
    if (param_1 == param_2) {
LAB_18008d494:
      return uVar3 & 0xffffffff;
    }
    pcVar2 = *(char **)(param_1 + 0x10);
    if (*(char **)(param_1 + 0x10) == (char *)0x0) {
      pcVar2 = param_1;
    }
    if ((*pcVar2 != '\x02') || (lVar1 = FUN_180087b54(), lVar1 != 2)) {
LAB_18008d492:
      uVar3 = 0;
      goto LAB_18008d494;
    }
    pcVar2 = *(char **)(param_1 + 0x10);
    if (*(char **)(param_1 + 0x10) == (char *)0x0) {
      pcVar2 = param_1;
    }
    pcVar2 = (char *)FUN_18008d5cc(pcVar2,0);
    if (*pcVar2 != '\x03') goto LAB_18008d492;
    param_1 = param_1 + 0x18;
  } while( true );
}

