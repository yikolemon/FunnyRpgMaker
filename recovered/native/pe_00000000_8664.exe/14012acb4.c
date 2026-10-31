/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14012acb4 */

undefined8 FUN_14012acb4(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x23;
  if ((param_1 != 0) && (*(longlong *)(param_1 + 0x90) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0xd0) + 0x60);
    *piVar1 = *piVar1 + -1;
    if (*(int *)(*(longlong *)(param_1 + 0xd0) + 0x60) < 1) {
      lVar2 = *(longlong *)(param_1 + 0x90);
      lVar3 = FUN_14012ad43(lVar2 + 0x20,param_1);
      if (lVar3 == 0) {
        return 0x23;
      }
      uVar4 = *(undefined8 *)(lVar2 + 0x10);
      FUN_14012ad5f(lVar2 + 0x20,lVar3);
      FUN_140128b39(uVar4,lVar3);
      FUN_14012ad94(uVar4,param_1,lVar2);
    }
    uVar4 = 0;
  }
  return uVar4;
}

