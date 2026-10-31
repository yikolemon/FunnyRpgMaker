/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408be132 */

void FUN_1408be132(void)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 unaff_RSI;
  uint unaff_EDI;
  
  uVar7 = (ulonglong)&stack0xfffffffffffffff8 & 0xffffffff;
  uVar5 = (ulonglong)((int)&stack0xfffffffffffffff8 - 0x98);
  *(ulonglong *)(uVar5 - 8) = (ulonglong)unaff_EDI;
  uVar2 = *(uint *)(uVar7 + 0x10);
  if ((uVar2 == 0) || (*(int *)(uVar7 + 0x18) == 0)) {
    *(undefined8 *)(uVar5 - 0x10) = 0x1408be154;
    puVar4 = (undefined4 *)FUN_1408c0ecd();
    *puVar4 = 0x16;
    *(undefined8 *)(uVar5 - 0x10) = 0x1408be15f;
    FUN_1408cbd78();
    puVar6 = (undefined8 *)(uVar5 - 8);
  }
  else {
    *(undefined8 *)(uVar5 - 0x10) = unaff_RSI;
    *(undefined8 *)(uVar5 - 0x18) = *(undefined8 *)(uVar7 + 0x14);
    *(ulonglong *)(uVar5 - 0x20) = (ulonglong)uVar2;
    *(undefined8 *)(uVar5 - 0x28) = 0x1408be174;
    iVar3 = FUN_1408c9f60();
    *(undefined8 *)(uVar5 - 0x18) = *(undefined8 *)(uVar7 + 0x1c);
    *(undefined8 *)(uVar5 - 0x20) = 0x1408be186;
    FUN_1408b3d5b((int)&stack0xfffffffffffffff8 + -0x98);
    *(undefined8 *)(uVar5 - 0x20) = *(undefined8 *)(uVar7 + 0x20);
    *(uint *)(uVar7 - 0x88) = uVar2;
    *(uint *)(uVar7 - 0x84) = uVar2 + iVar3;
    *(uint *)(uVar7 - 0x80) = uVar2;
    *(ulonglong *)(uVar5 - 0x28) = (ulonglong)((int)&stack0xfffffffffffffff8 - 0x94);
    *(undefined8 *)(uVar5 - 0x30) = *(undefined8 *)(uVar7 + 0x18);
    *(undefined8 *)(uVar5 - 0x38) = *(undefined8 *)(uVar7 + 0xc);
    *(undefined8 *)(uVar5 - 0x40) = *(undefined8 *)(uVar7 + 8);
    *(ulonglong *)(uVar5 - 0x48) = (ulonglong)((int)&stack0xfffffffffffffff8 - 0x88);
    *(undefined8 *)(uVar5 - 0x50) = 0x1408be1ba;
    FUN_1408be93a((int)&stack0xfffffffffffffff8 + -0x7c);
    *(undefined8 *)(uVar5 - 0x50) = 0x1408be1c2;
    FUN_1408be97e((int)&stack0xfffffffffffffff8 + -0x7c);
    puVar6 = (undefined8 *)(uVar5 - 0x40);
    if (*(char *)(uVar7 - 0x8c) != '\0') {
      puVar1 = (uint *)((ulonglong)*(uint *)(uVar7 - 0x98) + 0x350);
      *puVar1 = *puVar1 & 0xfffffffd;
      puVar6 = (undefined8 *)(uVar5 - 0x40);
    }
  }
  uVar2 = *(uint *)(uVar7 - 4);
                    /* WARNING: Subroutine does not return */
  *puVar6 = &UNK_1408be1e4;
  FUN_1408802b0(uVar2 ^ (uint)&stack0xfffffffffffffff8);
}

