/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14007827f */

longlong FUN_14007827f(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  
  iVar1 = FUN_1401a45e0();
  lVar4 = -1;
  if (iVar1 != -1) {
    iVar2 = FUN_14019ea38(param_1,0,2);
    if (iVar2 == 0) {
      uVar3 = FUN_1401a45e0(param_1);
      if (uVar3 != 0xffffffff) {
        iVar1 = FUN_14019ea38(param_1,iVar1,0);
        lVar4 = (longlong)(int)(-(uint)(iVar1 != 0) | uVar3);
      }
    }
  }
  return lVar4;
}

