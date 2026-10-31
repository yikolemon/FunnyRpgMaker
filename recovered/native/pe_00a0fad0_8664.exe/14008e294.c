/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14008e294 */

ulonglong FUN_14008e294(char *param_1,char *param_2)

{
  longlong lVar1;
  char *pcVar2;
  undefined8 unaff_RSI;
  ulonglong uVar3;
  
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  do {
    if (param_1 == param_2) {
LAB_14008e2e8:
      return uVar3 & 0xffffffff;
    }
    pcVar2 = *(char **)(param_1 + 0x10);
    if (*(char **)(param_1 + 0x10) == (char *)0x0) {
      pcVar2 = param_1;
    }
    if ((*pcVar2 != '\x02') || (lVar1 = FUN_14006aefc(), lVar1 != 2)) {
LAB_14008e2e6:
      uVar3 = 0;
      goto LAB_14008e2e8;
    }
    pcVar2 = *(char **)(param_1 + 0x10);
    if (*(char **)(param_1 + 0x10) == (char *)0x0) {
      pcVar2 = param_1;
    }
    pcVar2 = (char *)FUN_1400706a4(pcVar2,0);
    if (*pcVar2 != '\x03') goto LAB_14008e2e6;
    param_1 = param_1 + 0x18;
  } while( true );
}

