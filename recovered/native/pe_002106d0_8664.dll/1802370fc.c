/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802370fc */

undefined8 FUN_1802370fc(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = FUN_180237138();
  if (iVar2 != 0) {
    return 0xfffffffe;
  }
  lVar1 = *(longlong *)(param_1 + 0x28);
  *(undefined8 *)(lVar1 + 0x34) = 0;
  *(undefined4 *)(lVar1 + 0x3c) = 0;
  uVar3 = FUN_180237170(param_1);
  return uVar3;
}

