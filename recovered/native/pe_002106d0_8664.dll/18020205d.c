/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18020205d */

undefined8 FUN_18020205d(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (lVar1 == 0) {
    uVar2 = 3;
  }
  else {
    FUN_180201c8b(param_1,*(undefined8 *)(param_1 + 0x20));
    *(undefined4 *)(lVar1 + 0xb4) = 0x201;
    uVar2 = 0;
  }
  return uVar2;
}

