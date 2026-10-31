/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400d3914 */

void FUN_1400d3914(void)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  plVar3 = (longlong *)FUN_1400d30d4();
  if ((plVar3 != (longlong *)0x0) && (*plVar3 != 0)) {
    lVar4 = FUN_140081211();
    iVar1 = *(int *)(lVar4 + 0x140);
    if ((longlong)iVar1 != 0) {
      lVar4 = *(longlong *)(lVar4 + 0x148);
      lVar5 = 0;
      do {
        lVar2 = *(longlong *)(lVar4 + lVar5);
        if (*(short *)(lVar2 + 0x54) == 1) {
          *(undefined4 *)(lVar2 + 4) = 4;
          FUN_1400d30f7();
        }
        lVar5 = lVar5 + 8;
      } while ((longlong)iVar1 * 8 != lVar5);
    }
    if ((longlong *)plVar3[1] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar3[1] + 0x10))();
      plVar3[1] = 0;
    }
    if ((longlong *)plVar3[2] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar3[2] + 0x10))();
      plVar3[2] = 0;
    }
    FUN_1400d39b9();
    return;
  }
  return;
}

