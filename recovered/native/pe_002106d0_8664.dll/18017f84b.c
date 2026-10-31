/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18017f84b */

uint FUN_18017f84b(uint param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  
  *param_3 = 0;
  if ((int)param_1 < 0x10) {
    uVar1 = 1;
    if (param_1 != 8) {
      if (param_1 != 0xf) {
        return 0;
      }
      goto LAB_18017f87f;
    }
  }
  else {
    if ((param_1 == 0x20) || (param_1 == 0x18)) {
      return param_1 >> 3;
    }
    if (param_1 != 0x10) {
      return 0;
    }
    uVar1 = 2;
    if (param_2 == 0) {
LAB_18017f87f:
      *param_3 = 1;
      return 3;
    }
  }
  return uVar1;
}

