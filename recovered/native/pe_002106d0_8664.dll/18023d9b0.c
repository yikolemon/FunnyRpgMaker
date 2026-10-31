/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18023d9b0 */

undefined4 FUN_18023d9b0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_180246a20();
  if (iVar1 != 0) {
    FUN_1802466e0();
    return 1;
  }
  uVar2 = FUN_180246a10();
  iVar1 = FUN_18027deb8(uVar2);
  if (iVar1 != 0) {
    return 0;
  }
  thunk_FUN_18027f04c();
  return 1;
}

