/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1027bd70 */

int FUN_1027bd70(short *param_1,undefined4 param_2)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  
  sVar1 = *param_1;
  psVar3 = param_1;
  while ((sVar1 != 0 && (iVar2 = FUN_10286680(param_2,sVar1), iVar2 == 0))) {
    sVar1 = psVar3[1];
    psVar3 = psVar3 + 1;
  }
  return (int)psVar3 - (int)param_1 >> 1;
}

