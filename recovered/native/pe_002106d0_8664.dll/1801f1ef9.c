/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801f1ef9 */

void FUN_1801f1ef9(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x408);
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x98);
    uVar1 = **(uint **)(lVar2 + 0x18);
    FUN_1801c9b65(uVar3,*(undefined8 *)(lVar2 + 8));
    *(undefined8 *)(lVar2 + 8) = 0;
    FUN_1801c9b65(uVar3,*(undefined8 *)(lVar2 + 0x10));
    *(undefined8 *)(lVar2 + 0x10) = 0;
    FUN_1801c9b65(uVar3,*(undefined8 *)(lVar2 + 0x28));
    *(undefined8 *)(lVar2 + 0x28) = 0;
    FUN_1801c9b65(uVar3,*(undefined8 *)(lVar2 + 0x18));
    *(undefined8 *)(lVar2 + 0x18) = 0;
    plVar4 = *(longlong **)(lVar2 + 0x38);
    if (plVar4 != (longlong *)0x0) {
      lVar5 = *plVar4;
      if (lVar5 != 0) {
        if ((ulonglong)uVar1 != 0) {
          lVar5 = 0;
          do {
            FUN_1801c9b65(uVar3,*(undefined8 *)(**(longlong **)(lVar2 + 0x38) + 8 + lVar5));
            *(undefined8 *)(**(longlong **)(lVar2 + 0x38) + 8 + lVar5) = 0;
            lVar5 = lVar5 + 0x10;
          } while ((ulonglong)uVar1 << 4 != lVar5);
          lVar5 = **(longlong **)(lVar2 + 0x38);
        }
        FUN_1801c9b65(uVar3,lVar5);
        **(undefined8 **)(lVar2 + 0x38) = 0;
        plVar4 = *(longlong **)(lVar2 + 0x38);
      }
      FUN_1801f1d6d(param_1,plVar4 + 1);
      FUN_1801f1e46(param_1,*(longlong *)(lVar2 + 0x38) + 0x28);
      FUN_1801c9b65(uVar3,*(undefined8 *)(lVar2 + 0x38));
      *(undefined8 *)(lVar2 + 0x38) = 0;
    }
    if (*(longlong *)(lVar2 + 0x48) != 0) {
      FUN_1801f1d6d(param_1);
      FUN_1801f1e46(param_1,*(longlong *)(lVar2 + 0x48) + 0x20);
      FUN_1801c9b65(uVar3,*(undefined8 *)(lVar2 + 0x48));
      *(undefined8 *)(lVar2 + 0x48) = 0;
    }
    if (*(longlong *)(lVar2 + 0x58) != 0) {
      FUN_1801f1d6d(param_1);
      FUN_1801f1e46(param_1,*(longlong *)(lVar2 + 0x58) + 0x20);
      FUN_1801c9b65(uVar3,*(undefined8 *)(lVar2 + 0x58));
      *(undefined8 *)(lVar2 + 0x58) = 0;
    }
    if (*(longlong *)(lVar2 + 0x60) != 0) {
      FUN_1801f1d6d(param_1,*(longlong *)(lVar2 + 0x60) + 8);
      FUN_1801c9b65(uVar3,*(undefined8 *)(*(longlong *)(lVar2 + 0x60) + 0x28));
      *(undefined8 *)(*(longlong *)(lVar2 + 0x60) + 0x28) = 0;
      FUN_1801c9b65(uVar3,*(undefined8 *)(lVar2 + 0x60));
      *(undefined8 *)(lVar2 + 0x60) = 0;
    }
    FUN_1801c9b65(uVar3,*(undefined8 *)(lVar2 + 0x78));
    *(undefined8 *)(lVar2 + 0x78) = 0;
    FUN_1801c9b65(uVar3,*(undefined8 *)(lVar2 + 0x70));
    *(undefined8 *)(lVar2 + 0x70) = 0;
    FUN_1801c9b65(uVar3,*(undefined8 *)(lVar2 + 0x88));
    *(undefined8 *)(lVar2 + 0x88) = 0;
    FUN_1801c9b65(uVar3,lVar2);
    return;
  }
  return;
}

