/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18013ceb3 */

byte FUN_18013ceb3(uint param_1,undefined4 param_2,longlong param_3,longlong param_4)

{
  byte bVar1;
  int iVar2;
  
  if (((param_1 >> 9 & 1) == 0) || (param_3 == 0 && param_4 == 0)) {
LAB_18013cef2:
    bVar1 = 0;
  }
  else {
    if (param_3 == 0 || param_4 == 0) {
      if (param_3 == 0) {
        return 1;
      }
      if (param_4 == 0) {
        return 1;
      }
    }
    else {
      iVar2 = FUN_18013a239(param_2,param_3,param_4);
      if (iVar2 < 0) {
        return 1;
      }
      if (iVar2 != 0) goto LAB_18013cef2;
    }
    bVar1 = FUN_18013a576(param_2,param_3);
    bVar1 = bVar1 ^ 1 | (byte)(param_1 >> 10) & 1;
  }
  return bVar1;
}

