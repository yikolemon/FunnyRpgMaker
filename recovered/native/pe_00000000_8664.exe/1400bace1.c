/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400bace1 */

char * FUN_1400bace1(undefined8 param_1,char *param_2,undefined8 param_3)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  pcVar1 = (char *)FUN_1400bac59();
  if (*pcVar1 == '%') {
    pcVar2 = (char *)FUN_1400bac80(pcVar1);
    if (*pcVar2 != '\0') {
      uVar3 = FUN_14009c66f(pcVar2 + (1 - (longlong)pcVar1),param_3);
      FUN_140077a57(param_2,pcVar1,uVar3);
      pcVar1 = param_2;
    }
  }
  else {
    pcVar1 = "";
  }
  return pcVar1;
}

