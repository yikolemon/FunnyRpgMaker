/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14000808d */

undefined8 Unwind_14000808d(void)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  undefined1 unaff_BL;
  longlong unaff_RBP;
  
  uVar2 = *(uint *)(unaff_RBP + 8);
  *(undefined1 *)((ulonglong)uVar2 + 0xb0) = unaff_BL;
  lVar1 = (ulonglong)uVar2 + 0xb8;
  *(longlong *)(unaff_RBP + -0x18) = lVar1;
  FUN_140005640(lVar1,9);
  lVar1 = *(longlong *)(unaff_RBP + 8);
  *(undefined8 *)(lVar1 + 200) = *(undefined8 *)(unaff_RBP + 0x50);
  *(undefined1 *)(unaff_RBP + 7) = 1;
  uVar3 = *(ulonglong *)(lVar1 + 0x38);
  *(longlong *)(unaff_RBP + -0x50) =
       ((longlong)uVar3 >> 0x3f & 0xe000000000000000U) +
       (uVar3 >> 5) * 4 + *(longlong *)(lVar1 + 0x20);
  *(ulonglong *)(unaff_RBP + -0x48) = (ulonglong)((uint)uVar3 & 0x1f);
  FUN_14000bc34(*(undefined8 *)(unaff_RBP + -0x10),unaff_RBP + -0x40,(longlong *)(unaff_RBP + -0x50)
                ,1,(undefined1 *)(unaff_RBP + 7));
  plVar4 = (longlong *)(*(longlong **)(unaff_RBP + -8))[7];
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x20))(plVar4,plVar4 != *(longlong **)(unaff_RBP + -8));
  }
  return *(undefined8 *)(unaff_RBP + 8);
}

