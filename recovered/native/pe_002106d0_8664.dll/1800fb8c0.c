/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800fb8c0 */

void FUN_1800fb8c0(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  if (param_1 < 0x40000001) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_1800fccd4(param_2,param_1 - 0x40000000);
  }
  if (param_1 < 0xffffffff40000000 && lVar1 == 0) {
    lVar1 = FUN_1800fcdfd(param_1 + 0x40000000,param_3);
  }
  if (lVar1 == 0 && 0x40000000 < param_1) {
    lVar1 = FUN_1800fcdfd(param_1 - 0x40000000,param_1);
  }
  if ((param_1 < 0xffffffff40000000) && (lVar1 == 0)) {
    lVar1 = FUN_1800fccd4(param_1,param_1 + 0x40000000);
  }
  if (lVar1 == 0) {
    lVar1 = FUN_1800fccd4(param_2,param_1);
    if (lVar1 == 0) {
      FUN_1800fcdfd(param_1,param_3);
      return;
    }
  }
  return;
}

