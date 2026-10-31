/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801cbce0 */

undefined8 FUN_1801cbce0(longlong param_1)

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
      lVar3 = FUN_1801cbd6f(lVar2 + 0x20,param_1);
      if (lVar3 == 0) {
        return 0x23;
      }
      uVar4 = *(undefined8 *)(lVar2 + 0x10);
      FUN_1801cbd8b(lVar2 + 0x20,lVar3);
      FUN_1801c9b65(uVar4,lVar3);
      FUN_1801cbdc0(uVar4,param_1,lVar2);
    }
    uVar4 = 0;
  }
  return uVar4;
}

