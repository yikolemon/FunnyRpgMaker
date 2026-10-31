/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1020797f */

undefined4 __fastcall FUN_1020797f(int *param_1,char *param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  pcVar3 = (char *)*param_1;
  pcVar1 = pcVar3 + 3;
  if ((((pcVar1 < param_2) && (*pcVar3 == 't')) && (pcVar3[1] == 'r')) &&
     ((pcVar3[2] == 'u' && (*pcVar1 == 'e')))) {
    uVar2 = 1;
    pcVar3 = pcVar3 + 5;
  }
  else {
    uVar2 = 0;
    if ((((pcVar3 + 4 < param_2) && ((*pcVar3 == 'f' && (pcVar3[1] == 'a')))) && (pcVar3[2] == 'l'))
       && ((*pcVar1 == 's' && (pcVar3[4] == 'e')))) {
      pcVar3 = pcVar3 + 6;
    }
  }
  *param_1 = (int)pcVar3;
  return uVar2;
}

