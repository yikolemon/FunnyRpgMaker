/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140184820 */

void FUN_140184820(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1[2];
  uVar2 = param_1[6];
  if (lVar1 != 0) {
    FUN_1401847eb(lVar1);
    FUN_140128b39(uVar2,lVar1);
    param_1[2] = 0;
  }
  if (param_1[4] == 0) {
    FUN_140128b39(uVar2,*param_1);
    *param_1 = 0;
  }
  return;
}

