/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408c63f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_1408cbff0(void)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (*(int *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) + 8) != 0) {
    iVar3 = (*_DAT_150c2a014)();
    if (iVar3 == 0) {
      uVar1 = (*_DAT_150c29fa7)();
      uVar4 = FUN_1408c0f1a();
      puVar2 = (undefined4 *)FUN_1408c0ecd(uVar1);
      *puVar2 = uVar4;
    }
  }
  return;
}

