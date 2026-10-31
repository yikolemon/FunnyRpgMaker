/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14012f068 */

void FUN_14012f068(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  byte *param_5)

{
  char cVar1;
  
  cVar1 = FUN_14012f4b4();
  if (cVar1 == '\x02') {
    cVar1 = FUN_14012f5f2(param_1,param_2,0,param_3,param_4);
  }
  if (((cVar1 == 'U') || (cVar1 == '\x02')) && ((*param_5 & 4) != 0)) {
    FUN_14012f793(param_1,param_2,param_3,param_4);
    return;
  }
  return;
}

