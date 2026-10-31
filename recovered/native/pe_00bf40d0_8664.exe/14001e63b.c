/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14001e63b */

undefined8 FUN_14001e63b(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  
  uVar5 = 0x23;
  if ((param_1 != 0) && (*(longlong *)(param_1 + 0x90) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0xd0) + 0x60);
    *piVar1 = *piVar1 + -1;
    if (*(int *)(*(longlong *)(param_1 + 0xd0) + 0x60) < 1) {
      lVar2 = *(longlong *)(param_1 + 0x90);
      plVar4 = (longlong *)FUN_14001e6ca((longlong *)(lVar2 + 0x20),param_1);
      if (plVar4 == (longlong *)0x0) {
        return 0x23;
      }
      lVar3 = *(longlong *)(lVar2 + 0x10);
      FUN_14001e6e6((longlong *)(lVar2 + 0x20),plVar4);
      FUN_14001c53d(lVar3,(longlong)plVar4);
      FUN_14001e71b(lVar3,param_1,lVar2);
    }
    uVar5 = 0;
  }
  return uVar5;
}

