/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14007051c */

ulonglong FUN_14007051c(char *param_1,char *param_2)

{
  char *pcVar1;
  undefined8 unaff_RSI;
  ulonglong uVar2;
  
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  do {
    if (param_1 == param_2) {
LAB_14007056b:
      return uVar2 & 0xffffffff;
    }
    pcVar1 = *(char **)(param_1 + 0x10);
    if (*(char **)(param_1 + 0x10) == (char *)0x0) {
      pcVar1 = param_1;
    }
    if (((*pcVar1 != '\x02') ||
        ((*(longlong **)(pcVar1 + 8))[1] - **(longlong **)(pcVar1 + 8) != 0x20)) ||
       (pcVar1 = (char *)FUN_1400706a4(pcVar1,0), *pcVar1 != '\x03')) {
      uVar2 = 0;
      goto LAB_14007056b;
    }
    param_1 = param_1 + 0x18;
  } while( true );
}

