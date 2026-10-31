/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14005baae */

void FUN_14005baae(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0xd8);
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x98);
    if (*(longlong *)(lVar1 + 0xa0) != 0) {
      FUN_14002115a(*(longlong *)(param_1 + 0xa0),(longlong *)(lVar1 + 0xa0));
    }
    FUN_14001c53d(lVar2,*(longlong *)(lVar1 + 0xb0));
    *(undefined8 *)(lVar1 + 0xb0) = 0;
    FUN_14001c53d(lVar2,lVar1);
    *(undefined8 *)(param_1 + 0xd8) = 0;
  }
  return;
}

