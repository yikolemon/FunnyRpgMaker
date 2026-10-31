/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180201e93 */

undefined8 FUN_180201e93(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  uVar4 = 0xa1;
  if (lVar1 + 0x20U <= *(ulonglong *)(param_1 + 0x28)) {
    lVar2 = *(longlong *)(param_1 + 0x38);
    uVar3 = FUN_180201ce9(param_1,lVar1);
    uVar3 = FUN_1801cf464(uVar3);
    *(undefined4 *)(lVar2 + 0x50) = uVar3;
    uVar3 = FUN_180201ce9(param_1,lVar1 + 8);
    uVar3 = FUN_1801cf464(uVar3);
    *(undefined4 *)(lVar2 + 0x54) = uVar3;
    uVar3 = FUN_180201ce9(param_1,lVar1 + 0x10);
    uVar3 = FUN_1801cf464(uVar3);
    *(undefined4 *)(lVar2 + 0x58) = uVar3;
    uVar3 = FUN_180201ce9(param_1,lVar1 + 0x18);
    uVar3 = FUN_1801cf464(uVar3);
    *(undefined4 *)(lVar2 + 0x5c) = uVar3;
    uVar4 = 0;
  }
  return uVar4;
}

