/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1401277d0 */

short * FUN_1401277d0(short *param_1,undefined8 param_2)

{
  short sVar1;
  longlong lVar2;
  
  sVar1 = *param_1;
  while( true ) {
    if (sVar1 == 0) {
      return (short *)0x0;
    }
    lVar2 = FUN_140107f30(param_2,sVar1);
    if (lVar2 != 0) break;
    sVar1 = param_1[1];
    param_1 = param_1 + 1;
  }
  return param_1;
}

