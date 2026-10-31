/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800fefc3 */

longlong FUN_1800fefc3(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  
  iVar1 = FUN_1802863a0();
  lVar4 = -1;
  if (iVar1 != -1) {
    iVar2 = FUN_18027e7d8(param_1,0,2);
    if (iVar2 == 0) {
      uVar3 = FUN_1802863a0(param_1);
      if (uVar3 != 0xffffffff) {
        iVar1 = FUN_18027e7d8(param_1,iVar1,0);
        lVar4 = (longlong)(int)(-(uint)(iVar1 != 0) | uVar3);
      }
    }
  }
  return lVar4;
}

