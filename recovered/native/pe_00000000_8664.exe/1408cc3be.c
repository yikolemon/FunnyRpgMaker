/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408cc3be */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1408cc3be(void)

{
  ulonglong *puVar1;
  int iVar2;
  ulonglong *puVar3;
  ulonglong auStack_10 [2];
  
  auStack_10[1] = 0;
  auStack_10[0] = 0x1408cc3ca;
  FUN_1408d1150();
  puVar1 = auStack_10 + 1;
  if (_DAT_7589f6331039b400 != 0xffffffff) {
    puVar3 = auStack_10;
    auStack_10[0] = (ulonglong)_DAT_7589f6331039b400;
    iVar2 = FUN_1408cca86();
    puVar1 = auStack_10;
    if (iVar2 != 0) goto LAB_1408cc3ef;
  }
  puVar3 = puVar1;
  puVar3[0xffffffffffffffff] = 0x1408cc3ed;
  FUN_1408cc5d9();
LAB_1408cc3ef:
  *(undefined8 *)((longlong)puVar3 + -8) = 0x1408cc401;
  FUN_1408d1190();
  return;
}

