/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140755394 */

/* WARNING: Instruction at (ram,0x0001407553c5) overlaps instruction at (ram,0x0001407553c4)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140755394(ulonglong param_1)

{
  ulonglong uVar1;
  uint *puVar2;
  uint uVar3;
  uint unaff_EBX;
  ulonglong uVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  longlong unaff_R15;
  undefined8 uStack_20;
  
  puVar5 = &stack0xffffffffffffffe8;
  uVar6 = (ulonglong)_DAT_150af2aed;
  uVar3 = *(uint *)(uVar6 + 0x1f80);
  if ((int)*(uint *)(uVar6 + 0x1f80) < (int)unaff_EBX) {
    uStack_20 = 0x1034ab81;
    FUN_140754dc5();
    puVar5 = (undefined1 *)(ulonglong)((int)&uStack_20 + 4);
    unaff_EBX = *(uint *)(uVar6 + 0x1f80);
    uVar3 = unaff_EBX;
  }
  uVar1 = (ulonglong)uVar3;
  if (0 < (int)unaff_EBX) {
    while( true ) {
      uVar4 = (ulonglong)(uint)((int)param_1 + (int)uVar1 * 0xc);
      *(undefined8 *)(puVar5 + -8) = *(undefined8 *)(uVar4 - 0xc);
      *(undefined8 *)(puVar5 + -0x10) = 0x1407553d9;
      puVar2 = (uint *)FUN_140754f67();
      puVar5 = (undefined1 *)(ulonglong)((int)(puVar5 + -8) + 4);
      uVar3 = *puVar2 & 0xffff;
      uVar1 = (ulonglong)(*puVar2 >> 0x10);
      if (uVar3 == 0x802) {
        *(undefined4 *)(uVar6 + 0xcc0 + uVar1) = *(undefined4 *)(uVar4 - 8);
        *(undefined4 *)(uVar6 + 0xcc4 + uVar1) = *(undefined4 *)(uVar4 - 4);
      }
      else if (uVar3 == 0x801) {
        *(undefined4 *)(uVar6 + 0xcc0 + uVar1) = *(undefined4 *)(uVar4 - 8);
      }
      uVar1 = (ulonglong)*(uint *)(uVar6 + 0x1f80);
      *(ulonglong *)(uVar6 + 0x1f80) = uVar1;
      if (unaff_R15 < 2) break;
      param_1 = (ulonglong)*(uint *)(uVar6 + 0x1f88);
    }
  }
  return;
}

