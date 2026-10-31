/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140dd41d0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140dd41d0(void)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (*(int *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) + 8) != 0) {
    iVar3 = (*_DAT_1412dce8c)();
    if (iVar3 == 0) {
      uVar1 = (*_DAT_1412dce57)();
      uVar4 = FUN_140dcd98a();
      puVar2 = (undefined4 *)FUN_140dcd93d(uVar1);
      *puVar2 = uVar4;
    }
  }
  return;
}

