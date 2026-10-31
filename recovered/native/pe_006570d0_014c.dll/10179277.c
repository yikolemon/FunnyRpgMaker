/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10179277 */

uint __fastcall FUN_10179277(uint param_1,int param_2,undefined4 *param_3)

{
  *param_3 = 0;
  if ((int)param_1 < 0x10) {
    if (param_1 == 8) {
      return 1;
    }
    if (param_1 != 0xf) {
      return 0;
    }
  }
  else {
    if ((param_1 == 0x20) || (param_1 == 0x18)) {
      return param_1 >> 3;
    }
    if (param_1 != 0x10) {
      return 0;
    }
    if (param_2 != 0) {
      return 2;
    }
  }
  *param_3 = 1;
  return 3;
}

