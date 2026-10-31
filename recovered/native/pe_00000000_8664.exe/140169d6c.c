/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140169d6c */

undefined4 FUN_140169d6c(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    uVar3 = 0xa1;
  }
  else {
    if (*(int *)(lVar1 + -4) == 2) {
      *(longlong *)(param_1 + 0x18) = lVar1 + -8;
      return *(undefined4 *)(lVar1 + -8);
    }
    uVar2 = *(undefined8 *)(param_1 + 8);
    uVar3 = 0xa0;
  }
  FUN_1401691c8(uVar2,uVar3);
  return 0;
}

