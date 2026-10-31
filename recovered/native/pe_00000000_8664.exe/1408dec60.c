/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408dec60 */

void FUN_1408dec60(void)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  undefined8 unaff_RBP;
  ulonglong uVar8;
  undefined8 unaff_RSI;
  uint *puVar9;
  uint unaff_EDI;
  
  uVar4 = (ulonglong)&stack0xfffffffffffffff8 & 0xffffffff;
  uVar5 = (ulonglong)(((int)&stack0xfffffffffffffff8 - 8U & 0xfffffff0) + 4);
  *(undefined8 *)(uVar5 - 8) = unaff_RBP;
  *(undefined4 *)(uVar5 - 4) = *(undefined4 *)(uVar4 + 4);
  uVar8 = uVar5 - 8 & 0xffffffff;
  uVar6 = (ulonglong)((uint)(uVar5 - 8) - 0x88);
  uVar1 = *(uint *)(uVar4 + 0x10);
  *(undefined8 *)(uVar6 - 8) = unaff_RSI;
  puVar9 = (uint *)(ulonglong)*(uint *)(uVar4 + 0xc);
  *(ulonglong *)(uVar6 - 0x10) = (ulonglong)unaff_EDI;
  *(uint *)(uVar8 - 0x84) = (uint)*(ushort *)(ulonglong)uVar1;
  if ((ulonglong)*puVar9 < 8) {
                    /* WARNING: Could not emulate address calculation at 0x0001408deca5 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((ulonglong)*puVar9 * 4 + 0x10286ea8))();
    return;
  }
  *(undefined8 *)(uVar6 - 0x18) = 0xffff;
  *(undefined8 *)(uVar6 - 0x20) = *(undefined8 *)(uVar8 - 0x84);
  *(undefined8 *)(uVar6 - 0x28) = 0x1408ded3a;
  FUN_1408d9120();
  puVar7 = (undefined1 *)(ulonglong)((int)(uVar6 - 0x20) + 8);
  if (*puVar9 != 8) {
    *(undefined8 *)(puVar7 + -8) = 0x1408ded47;
    cVar2 = FUN_1408cf070();
    if (cVar2 != '\0') {
      *(uint **)(puVar7 + -8) = puVar9;
      *(undefined8 *)(puVar7 + -0x10) = 0x1408ded51;
      iVar3 = FUN_1408cf090();
      puVar7 = (undefined1 *)(ulonglong)((int)(puVar7 + -8) + 4);
      if (iVar3 != 0) goto LAB_1408ded62;
    }
  }
  *(undefined8 *)(puVar7 + -8) = *(undefined8 *)puVar9;
  *(undefined8 *)(puVar7 + -0x10) = 0x1408ded5f;
  FUN_1408d8930();
  puVar7 = (undefined1 *)(ulonglong)((int)(puVar7 + -8) + 4);
LAB_1408ded62:
  uVar1 = *(uint *)(uVar8 - 4);
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar7 + 8) = &UNK_1408ded6e;
  FUN_1408802b0(uVar1 ^ (uint)(uVar5 - 8));
}

