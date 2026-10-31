/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14015157f */

undefined8 FUN_14015157f(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  uVar4 = 0xa1;
  if (lVar1 + 0x20U <= *(ulonglong *)(param_1 + 0x28)) {
    lVar2 = *(longlong *)(param_1 + 0x38);
    uVar3 = FUN_1401513d5(param_1,lVar1);
    uVar3 = FUN_14012e438(uVar3);
    *(undefined4 *)(lVar2 + 0x50) = uVar3;
    uVar3 = FUN_1401513d5(param_1,lVar1 + 8);
    uVar3 = FUN_14012e438(uVar3);
    *(undefined4 *)(lVar2 + 0x54) = uVar3;
    uVar3 = FUN_1401513d5(param_1,lVar1 + 0x10);
    uVar3 = FUN_14012e438(uVar3);
    *(undefined4 *)(lVar2 + 0x58) = uVar3;
    uVar3 = FUN_1401513d5(param_1,lVar1 + 0x18);
    uVar3 = FUN_14012e438(uVar3);
    *(undefined4 *)(lVar2 + 0x5c) = uVar3;
    uVar4 = 0;
  }
  return uVar4;
}

