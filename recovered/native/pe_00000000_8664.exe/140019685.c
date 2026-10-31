/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140019685 */

void Unwind_140019685(void)

{
  int iVar1;
  int iVar2;
  char *_Str;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong unaff_RBX;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong in_stack_00000068;
  ulonglong in_stack_00000070;
  
  (*(code *)unaff_RSI[3])();
  lVar3 = unaff_RSI[1];
  unaff_RSI[1] = lVar3 + 1;
  *(undefined1 *)(*unaff_RSI + lVar3) = 0x5d;
  lVar3 = unaff_RSI[1];
  uVar5 = lVar3 + 1;
  if ((ulonglong)unaff_RSI[2] < uVar5) {
    (*(code *)unaff_RSI[3])();
    lVar3 = unaff_RSI[1];
    uVar5 = lVar3 + 1;
  }
  unaff_RSI[1] = uVar5;
  *(undefined1 *)(*unaff_RSI + lVar3) = 0x20;
  if (*(longlong *)(unaff_RDI + 8) != 0) {
    lVar3 = unaff_RSI[1];
    uVar5 = lVar3 + 1;
    if ((ulonglong)unaff_RSI[2] < uVar5) {
      (*(code *)unaff_RSI[3])();
      lVar3 = unaff_RSI[1];
      uVar5 = lVar3 + 1;
    }
    unaff_RSI[1] = uVar5;
    *(undefined1 *)(*unaff_RSI + lVar3) = 0x5b;
    FUN_140019fc2();
    lVar3 = unaff_RSI[1];
    uVar5 = lVar3 + 1;
    if ((ulonglong)unaff_RSI[2] < uVar5) {
      (*(code *)unaff_RSI[3])();
      lVar3 = unaff_RSI[1];
      uVar5 = lVar3 + 1;
    }
    unaff_RSI[1] = uVar5;
    *(undefined1 *)(*unaff_RSI + lVar3) = 0x5d;
    lVar3 = unaff_RSI[1];
    uVar5 = lVar3 + 1;
    if ((ulonglong)unaff_RSI[2] < uVar5) {
      (*(code *)unaff_RSI[3])();
      lVar3 = unaff_RSI[1];
      uVar5 = lVar3 + 1;
    }
    unaff_RSI[1] = uVar5;
    *(undefined1 *)(*unaff_RSI + lVar3) = 0x20;
  }
  lVar3 = unaff_RSI[1];
  uVar5 = lVar3 + 1;
  if ((ulonglong)unaff_RSI[2] < uVar5) {
    (*(code *)unaff_RSI[3])();
    lVar3 = unaff_RSI[1];
    uVar5 = lVar3 + 1;
  }
  unaff_RSI[1] = uVar5;
  *(undefined1 *)(*unaff_RSI + lVar3) = 0x5b;
  *(longlong *)(unaff_RDI + 0x28) = unaff_RSI[1];
  FUN_140019fc2();
  lVar3 = unaff_RSI[1];
  *(longlong *)(unaff_RDI + 0x30) = lVar3;
  uVar5 = lVar3 + 1;
  if ((ulonglong)unaff_RSI[2] < uVar5) {
    (*(code *)unaff_RSI[3])();
    lVar3 = unaff_RSI[1];
    uVar5 = lVar3 + 1;
  }
  unaff_RSI[1] = uVar5;
  *(undefined1 *)(*unaff_RSI + lVar3) = 0x5d;
  lVar3 = unaff_RSI[1];
  uVar5 = lVar3 + 1;
  if ((ulonglong)unaff_RSI[2] < uVar5) {
    (*(code *)unaff_RSI[3])();
    lVar3 = unaff_RSI[1];
    uVar5 = lVar3 + 1;
  }
  unaff_RSI[1] = uVar5;
  *(undefined1 *)(*unaff_RSI + lVar3) = 0x20;
  if (0 < *(int *)(unaff_RDI + 0x40)) {
    lVar3 = unaff_RSI[1];
    uVar5 = lVar3 + 1;
    if ((ulonglong)unaff_RSI[2] < uVar5) {
      (*(code *)unaff_RSI[3])();
      lVar3 = unaff_RSI[1];
      uVar5 = lVar3 + 1;
    }
    unaff_RSI[1] = uVar5;
    *(undefined1 *)(*unaff_RSI + lVar3) = 0x5b;
    _Str = (char *)FUN_14001a21c(*(undefined8 *)(unaff_RDI + 0x38));
    strlen(_Str);
    FUN_140019fc2();
    lVar3 = unaff_RSI[1];
    uVar5 = lVar3 + 1;
    if ((ulonglong)unaff_RSI[2] < uVar5) {
      (*(code *)unaff_RSI[3])();
      lVar3 = unaff_RSI[1];
      uVar5 = lVar3 + 1;
    }
    unaff_RSI[1] = uVar5;
    *(undefined1 *)(*unaff_RSI + lVar3) = 0x3a;
    iVar1 = *(int *)(unaff_RDI + 0x40);
    iVar2 = -iVar1;
    if (-iVar1 < 0) {
      iVar2 = iVar1;
    }
    in_stack_00000068 = FUN_14001a250(&stack0x00000050,iVar2,0x15);
    if (iVar1 < 0) {
      *(undefined1 *)(in_stack_00000068 + -1) = 0x2d;
      in_stack_00000068 = in_stack_00000068 + -1;
    }
    FUN_140019fc2();
    lVar3 = unaff_RSI[1];
    uVar5 = lVar3 + 1;
    if ((ulonglong)unaff_RSI[2] < uVar5) {
      (*(code *)unaff_RSI[3])();
      lVar3 = unaff_RSI[1];
      uVar5 = lVar3 + 1;
    }
    unaff_RSI[1] = uVar5;
    *(undefined1 *)(*unaff_RSI + lVar3) = 0x5d;
    lVar3 = unaff_RSI[1];
    uVar5 = lVar3 + 1;
    if ((ulonglong)unaff_RSI[2] < uVar5) {
      (*(code *)unaff_RSI[3])();
      lVar3 = unaff_RSI[1];
      uVar5 = lVar3 + 1;
    }
    unaff_RSI[1] = uVar5;
    *(undefined1 *)(*unaff_RSI + lVar3) = 0x20;
  }
  lVar3 = FUN_140019bd2();
  if (*(longlong *)(lVar3 + 8) != 0) {
    lVar4 = unaff_RSI[1];
    uVar5 = lVar4 + 1;
    if ((ulonglong)unaff_RSI[2] < uVar5) {
      (*(code *)unaff_RSI[3])();
      lVar4 = unaff_RSI[1];
      uVar5 = lVar4 + 1;
    }
    unaff_RSI[1] = uVar5;
    *(undefined1 *)(*unaff_RSI + lVar4) = 0x5b;
    FUN_140019ca0(unaff_RBX + 0x140,lVar3);
    lVar3 = unaff_RSI[1];
    uVar5 = lVar3 + 1;
    if ((ulonglong)unaff_RSI[2] < uVar5) {
      (*(code *)unaff_RSI[3])();
      lVar3 = unaff_RSI[1];
      uVar5 = lVar3 + 1;
    }
    unaff_RSI[1] = uVar5;
    *(undefined1 *)(*unaff_RSI + lVar3) = 0x5d;
    lVar3 = unaff_RSI[1];
    uVar5 = lVar3 + 1;
    if ((ulonglong)unaff_RSI[2] < uVar5) {
      (*(code *)unaff_RSI[3])();
      lVar3 = unaff_RSI[1];
      uVar5 = lVar3 + 1;
    }
    unaff_RSI[1] = uVar5;
    *(undefined1 *)(*unaff_RSI + lVar3) = 0x20;
  }
  FUN_140019fc2();
  if (DAT_140f17b40 == (in_stack_00000070 ^ (ulonglong)&stack0x00000000)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(in_stack_00000070 ^ (ulonglong)&stack0x00000000);
}

