/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408cc1bd */

uint FUN_1408cc1bd(void)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  
  uVar1 = *(uint *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) + 8);
  if (uVar1 < 0xdead) {
    if (uVar1 == 0xdeac) {
      return 0;
    }
    if (uVar1 < 0xc434) {
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
      goto LAB_1408cc23d;
    }
    if (uVar1 == 0xc435) {
      return 0;
    }
    if (uVar1 == 0xd698) {
      return 0;
    }
    iVar2 = uVar1 - 0xdeaa;
    bVar3 = iVar2 == 0;
  }
  else if (uVar1 < 0xdeb2) {
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
    bVar3 = iVar2 == 0;
  }
  else {
    if (uVar1 == 0xdeb2) {
      return 0;
    }
    if (uVar1 == 0xdeb3) {
      return 0;
    }
    iVar2 = uVar1 - 65000;
    bVar3 = iVar2 == 0;
  }
  if (bVar3) {
    return 0;
  }
  iVar2 = iVar2 + -1;
LAB_1408cc23d:
  if (iVar2 == 0) {
    return 0;
  }
  return *(uint *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) + 0xc) & 0xffffff7f;
}

