/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18020208d */

undefined8 FUN_18020208d(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  uVar3 = 3;
  if (((lVar1 != 0) && (*(longlong *)(lVar1 + 0x170) != 0)) &&
     (uVar3 = 0xa0, *(char *)(*(longlong *)(lVar1 + 0x170) + 0x231) == '\0')) {
    uVar2 = FUN_180201c8b(param_1,*(undefined8 *)(param_1 + 0x20));
    *(undefined4 *)(lVar1 + 0x168) = uVar2;
    uVar3 = 0;
  }
  return uVar3;
}

