/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408dfaf9 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1408dfaf9(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (*_DAT_150c3dc2e)();
  if (iVar1 == 0) {
    iVar2 = (*_DAT_150c3dab2)();
    if (iVar2 == 6) {
      func_0x0001408dfb6d();
      FUN_1408dfb4e();
      iVar1 = (*_DAT_150c3dc5f)();
    }
  }
  return iVar1;
}

