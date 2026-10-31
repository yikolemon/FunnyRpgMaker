/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801d0094 */

void FUN_1801d0094(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  byte *param_5)

{
  char cVar1;
  
  cVar1 = FUN_1801d04e0();
  if (cVar1 == '\x02') {
    cVar1 = FUN_1801d061e(param_1,param_2,0,param_3,param_4);
  }
  if (((cVar1 == 'U') || (cVar1 == '\x02')) && ((*param_5 & 4) != 0)) {
    FUN_1801d07bf(param_1,param_2,param_3,param_4);
    return;
  }
  return;
}

