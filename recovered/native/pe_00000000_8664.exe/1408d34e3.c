/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408d34e3 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1408d34e3(ulonglong param_1)

{
  uint uVar1;
  uint *puVar2;
  
  uVar1 = *(uint *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) + 8);
  puVar2 = (uint *)(ulonglong)uVar1;
  if (uVar1 != 0) {
    uVar1 = *puVar2;
    if (uVar1 != _DAT_150c6e878) {
      FUN_1408cbff0();
      param_1 = (ulonglong)uVar1;
    }
    uVar1 = puVar2[1];
    if (uVar1 != _DAT_150c6e88e) {
      FUN_1408cbff0(param_1);
      param_1 = (ulonglong)uVar1;
    }
    uVar1 = puVar2[2];
    if (uVar1 != _DAT_150c6e8a4) {
      FUN_1408cbff0(param_1);
      param_1 = (ulonglong)uVar1;
    }
    uVar1 = puVar2[0xc];
    if (uVar1 != _DAT_150c6e8de) {
      FUN_1408cbff0(param_1);
      param_1 = (ulonglong)uVar1;
    }
    if (puVar2[0xd] != _DAT_150c6e8f4) {
      FUN_1408cbff0(param_1);
    }
  }
  return;
}

