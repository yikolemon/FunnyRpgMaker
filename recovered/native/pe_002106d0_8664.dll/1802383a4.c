/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802383a4 */

void FUN_1802383a4(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    FUN_180238cd2(lVar1);
    FUN_1801c9b65(uVar2,lVar1);
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}

