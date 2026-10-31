/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402782a0 */

void Unwind_1402782a0(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong unaff_R15;
  
  uVar3 = (ulonglong)*(uint *)(unaff_RBP + -8);
  do {
    uVar1 = *(undefined8 *)(unaff_RBP + -0x18);
    *(undefined8 *)(uVar3 + unaff_R15) = uVar1;
    *(undefined8 *)(uVar3 + 8 + unaff_R15) = uVar1;
    if (unaff_RBX == unaff_RSI) {
      *(longlong **)(unaff_RBP + -0x28) = unaff_RBX;
      puVar2 = *(undefined8 **)(unaff_RBP + -0x10);
      *puVar2 = unaff_RBX;
      unaff_RBX[1] = (longlong)puVar2;
      return;
    }
    if ((ulonglong)unaff_RBX[5] < 0x10) {
      plVar4 = unaff_RBX + 2;
    }
    else {
      plVar4 = (longlong *)unaff_RBX[2];
    }
    uVar3 = FUN_14022da8b(plVar4,unaff_RBX[4]);
    unaff_R15 = (uVar3 & *(ulonglong *)(unaff_RDI + 0x30)) * 0x10;
    plVar4 = *(longlong **)(*(longlong *)(unaff_RBP + -8) + 8 + unaff_R15);
    plVar5 = unaff_RBX;
    while( true ) {
      unaff_RBX = (longlong *)*plVar5;
      FUN_140235ded(plVar5 + 2);
      thunk_FUN_1404a2310(plVar5,0x50);
      *(longlong *)(unaff_RDI + 0x10) = *(longlong *)(unaff_RDI + 0x10) + -1;
      if (plVar5 == plVar4) break;
      plVar5 = unaff_RBX;
      if (unaff_RBX == unaff_RSI) {
        FUN_1402782c6();
        return;
      }
    }
    uVar3 = *(ulonglong *)(unaff_RBP + -8);
  } while( true );
}

