/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800fcbe1 */

uint FUN_1800fcbe1(ulonglong param_1,uint param_2)

{
  if ((param_2 & 0xf0) != 0 || (param_1 & 0xf0) == 0) {
    if ((param_1 & 0xf0) == 0 && (param_2 & 0xf0) != 0) {
      param_2 = param_2 & 0xffffff00 | (param_2 & 0xf0) >> 4;
    }
    return param_2;
  }
  return param_2 & 0xffffff00 | (param_2 & 0xf) << 4;
}

