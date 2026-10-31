/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180141db1 */

char * FUN_180141db1(undefined8 param_1,char *param_2,undefined8 param_3)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  pcVar1 = (char *)FUN_180141d29();
  if (*pcVar1 == '%') {
    pcVar2 = (char *)FUN_180141d50(pcVar1);
    if (*pcVar2 != '\0') {
      uVar3 = FUN_180123740(pcVar2 + (1 - (longlong)pcVar1),param_3);
      FUN_1800fe79b(param_2,pcVar1,uVar3);
      pcVar1 = param_2;
    }
  }
  else {
    pcVar1 = "";
  }
  return pcVar1;
}

