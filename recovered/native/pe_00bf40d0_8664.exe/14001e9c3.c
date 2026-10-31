/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14001e9c3 */

undefined8 FUN_14001e9c3(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  
  uVar5 = 0x24;
  if (param_1 != (longlong *)0x0) {
    lVar1 = *param_1;
    if (lVar1 == 0) {
      uVar5 = 0x23;
    }
    else {
      lVar2 = *(longlong *)(lVar1 + 0x90);
      if (lVar2 == 0) {
        uVar5 = 0x22;
      }
      else {
        lVar3 = *(longlong *)(lVar2 + 0x10);
        plVar4 = (longlong *)FUN_14001e6ca((longlong *)(lVar1 + 0xa8),(longlong)param_1);
        if (plVar4 != (longlong *)0x0) {
          FUN_14001e6e6((longlong *)(lVar1 + 0xa8),plVar4);
          FUN_14001c53d(lVar3,(longlong)plVar4);
          if (*(longlong **)(lVar1 + 0x80) == param_1) {
            *(undefined8 *)(lVar1 + 0x80) = 0;
            if (*(longlong *)(lVar1 + 0xa8) != 0) {
              *(undefined8 *)(lVar1 + 0x80) = *(undefined8 *)(*(longlong *)(lVar1 + 0xa8) + 0x10);
            }
          }
          FUN_14001ea8e(lVar3,(longlong)param_1,lVar2);
          uVar5 = 0;
        }
      }
    }
  }
  return uVar5;
}

