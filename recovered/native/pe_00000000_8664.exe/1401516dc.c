/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401516dc */

undefined8 FUN_1401516dc(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  uVar4 = 0xa1;
  if (lVar1 + 0x18U <= *(ulonglong *)(param_1 + 0x28)) {
    lVar2 = *(longlong *)(param_1 + 0x38);
    uVar3 = FUN_140151377(param_1,lVar1);
    *(undefined4 *)(lVar2 + 0x80) = uVar3;
    uVar3 = FUN_140151377(param_1,lVar1 + 8);
    *(undefined4 *)(lVar2 + 0x84) = uVar3;
    uVar3 = FUN_140151377(param_1,lVar1 + 0x10);
    *(undefined4 *)(lVar2 + 0x88) = uVar3;
    uVar4 = 0;
  }
  return uVar4;
}

