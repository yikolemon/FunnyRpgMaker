/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1027a830 */

short * FUN_1027a830(short *param_1,undefined4 param_2)

{
  short sVar1;
  int iVar2;
  
  sVar1 = *param_1;
  while( true ) {
    if (sVar1 == 0) {
      return (short *)0x0;
    }
    iVar2 = FUN_10286680(param_2,sVar1);
    if (iVar2 != 0) break;
    sVar1 = param_1[1];
    param_1 = param_1 + 1;
  }
  return param_1;
}

