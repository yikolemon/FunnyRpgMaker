/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180225a68 */

void FUN_180225a68(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x4d8);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x98);
    FUN_1801ced57(*(undefined8 *)(param_1 + 0xa0),lVar1 + 0x18);
    FUN_1801c9b65(uVar2,lVar1);
    return;
  }
  return;
}

