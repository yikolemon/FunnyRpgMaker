/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408cc0bb */

uint FUN_1408cc0bb(void)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)&stack0xfffffffffffffff8 & 0xffffffff;
  uVar1 = *(uint *)(uVar3 + 8);
  if (uVar1 < 0xdead) {
    if (uVar1 == 0xdeac) {
      return 0;
    }
    if (0xc433 < uVar1) {
      if (uVar1 == 0xc435) {
        return 0;
      }
      if (uVar1 == 0xd698) {
LAB_1408cc14b:
        return *(uint *)(uVar3 + 0xc) & 8;
      }
      iVar2 = uVar1 - 0xdeaa;
      goto LAB_1408cc10b;
    }
    if (uVar1 == 0xc433) {
      return 0;
    }
    if (uVar1 == 0x2a) {
      return 0;
    }
    if (uVar1 == 0xc42c) {
      return 0;
    }
    if (uVar1 == 0xc42d) {
      return 0;
    }
    if (uVar1 == 0xc42e) {
      return 0;
    }
    iVar2 = uVar1 - 0xc431;
  }
  else {
    if (0xdeb1 < uVar1) {
      if (uVar1 == 0xdeb2) {
        return 0;
      }
      if (uVar1 == 0xdeb3) {
        return 0;
      }
      if (uVar1 == 65000) {
        return 0;
      }
      if (uVar1 == 0xfde9) goto LAB_1408cc14b;
      goto LAB_1408cc146;
    }
    if (uVar1 == 0xdeb1) {
      return 0;
    }
    if (uVar1 == 0xdead) {
      return 0;
    }
    if (uVar1 == 0xdeae) {
      return 0;
    }
    iVar2 = uVar1 - 0xdeaf;
LAB_1408cc10b:
    if (iVar2 == 0) {
      return 0;
    }
    iVar2 = iVar2 + -1;
  }
  if (iVar2 == 0) {
    return 0;
  }
LAB_1408cc146:
  return *(uint *)(uVar3 + 0xc);
}

