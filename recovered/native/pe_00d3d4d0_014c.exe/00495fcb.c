/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00495fcb */

uint __cdecl FUN_00495fcb(uint param_1,uint param_2)

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
      goto LAB_00496002;
    }
    if (param_1 == 0xc435) {
      return 0;
    }
    if (param_1 == 0xd698) goto LAB_0049605b;
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
LAB_0049605b:
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
LAB_00496002:
  if (iVar1 == 0) {
    return 0;
  }
  return param_2;
}

