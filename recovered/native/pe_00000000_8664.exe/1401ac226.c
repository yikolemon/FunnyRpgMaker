/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401ac226 */

longlong Unwind_1401ac226(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 unaff_RBX;
  int *unaff_RSI;
  longlong unaff_RDI;
  undefined8 unaff_R13;
  longlong unaff_R14;
  undefined4 uStack0000000000000030;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 uStack0000000000000088;
  undefined8 uStack0000000000000090;
  undefined4 uStack00000000000000f0;
  undefined4 in_stack_000000f8;
  undefined4 uStack0000000000000100;
  undefined4 uStack0000000000000108;
  
  uVar1 = *(undefined8 *)(unaff_RDI + 0x28);
  uStack0000000000000088 = *(undefined8 *)(unaff_RDI + 0x48);
  uStack0000000000000090 = *(undefined8 *)(unaff_RDI + 0x68);
  uStack00000000000000f0 = *(undefined4 *)(unaff_RDI + 0x78);
  uStack0000000000000030 = *(undefined4 *)(unaff_RDI + 0x38);
  uStack0000000000000100 = uStack0000000000000030;
  uStack0000000000000108 = uStack0000000000000030;
  __except_validate_context_record();
  lVar4 = FUN_1401aae30();
  *(int **)(lVar4 + 0x20) = unaff_RSI;
  lVar4 = FUN_1401aae30();
  *(undefined8 *)(lVar4 + 0x28) = unaff_RBX;
  lVar4 = FUN_1401aae30();
  uVar5 = _CreateFrameInfo(&stack0x00000098,*(undefined8 *)(*(longlong *)(lVar4 + 0x20) + 0x28));
  if (*(longlong *)(unaff_RDI + 0x58) != unaff_R14) {
    in_stack_000000f8 = 1;
    FUN_1401aae30();
  }
  lVar4 = FUN_1401bf420(in_stack_00000050,uVar1,0x100);
  if ((lVar4 < 2) && (lVar4 = *(longlong *)((longlong)&stack0x00000088 + lVar4 * 8), lVar4 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_1401a0758();
  }
  FUN_1401bf450(lVar4,uVar1);
  uVar2 = uStack0000000000000100;
  FUN_14018ffb0(uVar5);
  if (((((int)unaff_R14 == 0) && (*unaff_RSI == -0x1f928c9d)) && (unaff_RSI[6] == 4)) &&
     ((unaff_RSI[8] + 0xe66cfae0U < 3 &&
      (iVar3 = FUN_1401903f0(*(undefined8 *)(unaff_RSI + 10)), iVar3 != 0)))) {
    __DestructExceptionObject();
  }
  lVar6 = FUN_1401aae30();
  *(undefined8 *)(lVar6 + 0x20) = in_stack_00000058;
  lVar6 = FUN_1401aae30();
  *(undefined8 *)(lVar6 + 0x28) = unaff_R13;
  lVar6 = FUN_1401aae30();
  *(undefined4 *)(lVar6 + 0x78) = uVar2;
  lVar6 = FUN_1401aae30();
  *(undefined4 *)(lVar6 + 0x78) = 0xfffffffe;
  return lVar4;
}

