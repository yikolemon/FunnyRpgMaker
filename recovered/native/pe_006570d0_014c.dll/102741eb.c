/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102741eb */

uint FUN_102741eb(uint param_1,uint param_2)

{
  int iVar1;
  
  if (param_1 < 0xdead) {
    if (param_1 == 0xdeac) {
      return 0;
    }
    if (param_1 < 0xc434) {
      if (param_1 == 0xc433) {
        return 0;
      }
      if (param_1 == 0x2a) {
        return 0;
      }
      if (param_1 == 0xc42c) {
        return 0;
      }
      if (param_1 == 0xc42d) {
        return 0;
      }
      if (param_1 == 0xc42e) {
        return 0;
      }
      iVar1 = param_1 - 0xc431;
      goto LAB_10274222;
    }
    if (param_1 == 0xc435) {
      return 0;
    }
    if (param_1 == 0xd698) goto LAB_1027427b;
    iVar1 = param_1 - 0xdeaa;
  }
  else {
    if (0xdeb1 < param_1) {
      if (param_1 == 0xdeb2) {
        return 0;
      }
      if (param_1 == 0xdeb3) {
        return 0;
      }
      if (param_1 == 65000) {
        return 0;
      }
      if (param_1 != 0xfde9) {
        return param_2;
      }
LAB_1027427b:
      return param_2 & 8;
    }
    if (param_1 == 0xdeb1) {
      return 0;
    }
    if (param_1 == 0xdead) {
      return 0;
    }
    if (param_1 == 0xdeae) {
      return 0;
    }
    iVar1 = param_1 - 0xdeaf;
  }
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = iVar1 + -1;
LAB_10274222:
  if (iVar1 == 0) {
    return 0;
  }
  return param_2;
}

