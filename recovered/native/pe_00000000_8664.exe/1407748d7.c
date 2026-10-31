/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407748d7 */

/* WARNING: Instruction at (ram,0x00014077493d) overlaps instruction at (ram,0x00014077493c)
    */

void FUN_1407748d7(ulonglong param_1,uint param_2)

{
  uint uVar1;
  ulonglong uVar2;
  undefined8 unaff_RBX;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar3 = &stack0xffffffffffffffe0;
  puVar4 = (undefined8 *)(ulonglong)param_2;
  if ((*(byte *)(param_1 + 0x27b5) & 4) != 0) {
    uStack_28 = *puVar4;
    uStack_30 = 0x1034d6da;
    FUN_1407518b6();
    puVar3 = (undefined1 *)(ulonglong)((int)&uStack_30 + 8);
  }
  if (*(uint *)(puVar4 + 0xf) != 0) {
    *(undefined4 *)((ulonglong)*(uint *)(puVar4 + 0xf) + 0x434) = 0;
  }
  uVar1 = *(uint *)(puVar4 + 3);
  uVar2 = (ulonglong)uVar1;
  if (((byte)((ulonglong)unaff_RBX >> 0x20) & uVar1 != 0) != 0) {
    uVar1 = *(uint *)(uVar2 + 0x1c);
    if (uVar1 == param_2) {
      uVar1 = *(uint *)(uVar2 + 0x20);
    }
    *(ulonglong *)(puVar3 + -8) = (ulonglong)uVar1;
    *(undefined8 *)(puVar3 + -0x10) = 0x14077492a;
    FUN_1407739d0(param_1 & 0xffffffff);
    return;
  }
  if (uVar1 != 0) {
    do {
      do {
      } while (*(uint *)(uVar2 + 0x1c) != param_2);
      *(undefined4 *)((ulonglong)*(uint *)(puVar4 + 3) + 0x1c) = 0;
    } while( true );
  }
  FUN_140771e15(param_1 & 0xffffffff,param_2);
  return;
}

