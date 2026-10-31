/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407b8eca */

void FUN_1407b8eca(void)

{
  short *psVar1;
  bool bVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong unaff_RBX;
  undefined8 unaff_RBP;
  int iVar6;
  uint uVar7;
  
  uVar7 = (uint)((ulonglong)unaff_RBP >> 0x20);
  uVar3 = unaff_RBX >> 0x20;
  uVar4 = (int)unaff_RBP * 0x74;
  uVar5 = (uint)*(short *)((ulonglong)*(uint *)(uVar3 + 0x10) + 0x56 + (ulonglong)uVar4);
  if (uVar7 != uVar5) {
    bVar2 = (int)uVar5 <= (int)uVar7;
    iVar6 = (uint)bVar2 * 2 + -1;
    *(short *)((ulonglong)(*(uint *)(uVar3 + 0x10) + uVar4) + 0x56) =
         (short)((ulonglong)unaff_RBP >> 0x20);
    do {
      psVar1 = (short *)((ulonglong)*(uint *)(uVar3 + 0x10) + 0x56 +
                        (ulonglong)
                        (uint)(*(short *)((ulonglong)(*(int *)(uVar3 + 0x18) + (uint)bVar2 * 4 + -2)
                                         + (ulonglong)uVar5 * 2) * 0x74));
      *psVar1 = *psVar1 - (short)iVar6;
      uVar5 = uVar5 + iVar6;
    } while (uVar7 != uVar5);
    iVar6 = *(int *)(uVar3 + 0x40);
    while (0 < iVar6) {
      *(undefined2 *)
       ((ulonglong)*(uint *)(uVar3 + 0x18) +
       (ulonglong)(uint)(int)*(short *)((ulonglong)*(uint *)(uVar3 + 0x10) + 0x56) * 2) = 0;
      iVar6 = *(int *)(uVar3 + 0x40);
    }
    *(undefined1 *)(uVar3 + 0x1f5) = 1;
  }
  return;
}

