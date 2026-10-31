/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1013daf5 */

char * FUN_1013daf5(undefined4 param_1,char *param_2,undefined4 param_3)

{
  char *pcVar1;
  char *pcVar2;
  undefined4 uVar3;
  char *pcVar4;
  
  pcVar1 = (char *)FUN_1013da7f(param_1);
  pcVar4 = "";
  if ((*pcVar1 == '%') && (pcVar2 = (char *)FUN_1013daa2(pcVar1), pcVar4 = pcVar1, *pcVar2 != '\0'))
  {
    uVar3 = FUN_1011e1bd(pcVar2 + (1 - (int)pcVar1),param_3);
    FUN_100fa19f(param_2,pcVar1,uVar3);
    pcVar4 = param_2;
  }
  return pcVar4;
}

