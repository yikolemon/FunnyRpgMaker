/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140063bcc */

void FUN_140063bcc(undefined8 *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = (char *)*param_1;
  pcVar2 = pcVar1;
  if (pcVar1 < param_2) {
    do {
      pcVar2 = pcVar1;
      if ((*pcVar1 == '\n') || (*pcVar1 == '\r')) break;
      pcVar1 = pcVar1 + 1;
      pcVar2 = param_2;
    } while (pcVar1 != param_2);
  }
  *param_1 = pcVar2;
  return;
}

