/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14003f52d */

void FUN_14003f52d(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x408);
  if (lVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x98);
    uVar1 = **(uint **)(lVar2 + 0x18);
    FUN_14001c53d(lVar3,*(longlong *)(lVar2 + 8));
    *(undefined8 *)(lVar2 + 8) = 0;
    FUN_14001c53d(lVar3,*(longlong *)(lVar2 + 0x10));
    *(undefined8 *)(lVar2 + 0x10) = 0;
    FUN_14001c53d(lVar3,*(longlong *)(lVar2 + 0x28));
    *(undefined8 *)(lVar2 + 0x28) = 0;
    FUN_14001c53d(lVar3,*(longlong *)(lVar2 + 0x18));
    *(undefined8 *)(lVar2 + 0x18) = 0;
    plVar4 = *(longlong **)(lVar2 + 0x38);
    if (plVar4 != (longlong *)0x0) {
      lVar5 = *plVar4;
      if (lVar5 != 0) {
        if ((ulonglong)uVar1 != 0) {
          lVar5 = 0;
          do {
            FUN_14001c53d(lVar3,*(longlong *)(**(longlong **)(lVar2 + 0x38) + 8 + lVar5));
            *(undefined8 *)(**(longlong **)(lVar2 + 0x38) + 8 + lVar5) = 0;
            lVar5 = lVar5 + 0x10;
          } while ((ulonglong)uVar1 << 4 != lVar5);
          lVar5 = **(longlong **)(lVar2 + 0x38);
        }
        FUN_14001c53d(lVar3,lVar5);
        **(undefined8 **)(lVar2 + 0x38) = 0;
        plVar4 = *(longlong **)(lVar2 + 0x38);
      }
      FUN_14003f3a1(param_1,(uint *)(plVar4 + 1));
      FUN_14003f47a(param_1,*(longlong *)(lVar2 + 0x38) + 0x28);
      FUN_14001c53d(lVar3,*(longlong *)(lVar2 + 0x38));
      *(undefined8 *)(lVar2 + 0x38) = 0;
    }
    if (*(uint **)(lVar2 + 0x48) != (uint *)0x0) {
      FUN_14003f3a1(param_1,*(uint **)(lVar2 + 0x48));
      FUN_14003f47a(param_1,*(longlong *)(lVar2 + 0x48) + 0x20);
      FUN_14001c53d(lVar3,*(longlong *)(lVar2 + 0x48));
      *(undefined8 *)(lVar2 + 0x48) = 0;
    }
    if (*(uint **)(lVar2 + 0x58) != (uint *)0x0) {
      FUN_14003f3a1(param_1,*(uint **)(lVar2 + 0x58));
      FUN_14003f47a(param_1,*(longlong *)(lVar2 + 0x58) + 0x20);
      FUN_14001c53d(lVar3,*(longlong *)(lVar2 + 0x58));
      *(undefined8 *)(lVar2 + 0x58) = 0;
    }
    if (*(longlong *)(lVar2 + 0x60) != 0) {
      FUN_14003f3a1(param_1,(uint *)(*(longlong *)(lVar2 + 0x60) + 8));
      FUN_14001c53d(lVar3,*(longlong *)(*(longlong *)(lVar2 + 0x60) + 0x28));
      *(undefined8 *)(*(longlong *)(lVar2 + 0x60) + 0x28) = 0;
      FUN_14001c53d(lVar3,*(longlong *)(lVar2 + 0x60));
      *(undefined8 *)(lVar2 + 0x60) = 0;
    }
    FUN_14001c53d(lVar3,*(longlong *)(lVar2 + 0x78));
    *(undefined8 *)(lVar2 + 0x78) = 0;
    FUN_14001c53d(lVar3,*(longlong *)(lVar2 + 0x70));
    *(undefined8 *)(lVar2 + 0x70) = 0;
    FUN_14001c53d(lVar3,*(longlong *)(lVar2 + 0x88));
    *(undefined8 *)(lVar2 + 0x88) = 0;
    FUN_14001c53d(lVar3,lVar2);
    return;
  }
  return;
}

