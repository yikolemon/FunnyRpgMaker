/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18020e472 */

void FUN_18020e472(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0xd8);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x98);
    if (*(longlong *)(lVar1 + 0xa0) != 0) {
      FUN_1801ced57(*(undefined8 *)(param_1 + 0xa0),lVar1 + 0xa0);
    }
    FUN_1801c9b65(uVar2,*(undefined8 *)(lVar1 + 0xb0));
    *(undefined8 *)(lVar1 + 0xb0) = 0;
    FUN_1801c9b65(uVar2,lVar1);
    *(undefined8 *)(param_1 + 0xd8) = 0;
  }
  return;
}

