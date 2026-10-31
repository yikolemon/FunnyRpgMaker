/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801c8e72 */

void FUN_1801c8e72(void)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)FUN_1801c68b0();
  if (*plVar2 != 0) {
    lVar3 = FUN_180107ef9();
    iVar1 = *(int *)(lVar3 + 0x140);
    if ((longlong)iVar1 != 0) {
      lVar3 = *(longlong *)(lVar3 + 0x148);
      lVar4 = 0;
      do {
        if (*(short *)(*(longlong *)(lVar3 + lVar4) + 0x54) == 1) {
          FUN_1801c8a8e();
        }
        lVar4 = lVar4 + 8;
      } while ((longlong)iVar1 * 8 != lVar4);
    }
    if ((longlong *)plVar2[9] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar2[9] + 0x10))();
      plVar2[9] = 0;
    }
    if ((longlong *)plVar2[10] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar2[10] + 0x10))();
      plVar2[10] = 0;
    }
    if ((longlong *)plVar2[4] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar2[4] + 0x10))();
      plVar2[4] = 0;
    }
    if ((longlong *)plVar2[3] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar2[3] + 0x10))();
      plVar2[3] = 0;
    }
    if ((longlong *)plVar2[0xc] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar2[0xc] + 0x10))();
      plVar2[0xc] = 0;
    }
    if ((longlong *)plVar2[0xd] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar2[0xd] + 0x10))();
      plVar2[0xd] = 0;
    }
    if ((longlong *)plVar2[0xb] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar2[0xb] + 0x10))();
      plVar2[0xb] = 0;
    }
    if ((longlong *)plVar2[8] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar2[8] + 0x10))();
      plVar2[8] = 0;
    }
    if ((longlong *)plVar2[7] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar2[7] + 0x10))();
      plVar2[7] = 0;
    }
    if ((longlong *)plVar2[6] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar2[6] + 0x10))();
      plVar2[6] = 0;
    }
    if ((longlong *)plVar2[5] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar2[5] + 0x10))();
      plVar2[5] = 0;
    }
  }
  return;
}

