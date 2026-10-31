/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408b7ef3 */

void FUN_1408b7ef3(ulonglong param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 uVar4;
  undefined8 unaff_RBX;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 unaff_RSI;
  uint *puVar7;
  uint unaff_EDI;
  
  uVar6 = (ulonglong)&stack0xfffffffffffffff8 & 0xffffffff;
  uVar5 = (ulonglong)((int)&stack0xfffffffffffffff8 - 0x464);
  *(undefined8 *)(uVar5 - 8) = unaff_RBX;
  *(undefined8 *)(uVar5 - 0x10) = unaff_RSI;
  puVar7 = (uint *)(param_1 & 0xffffffff);
  *(ulonglong *)(uVar5 - 0x18) = (ulonglong)unaff_EDI;
  uVar1 = puVar7[1];
  uVar2 = *(uint *)(ulonglong)*puVar7;
  *(ulonglong *)(uVar5 - 0x20) = (ulonglong)uVar2;
  *(undefined8 *)(uVar5 - 0x28) = 0x1408b7f1a;
  uVar4 = FUN_1408cf0c9();
  *(undefined1 *)(uVar6 - 0x464) = uVar4;
  *(undefined4 *)(uVar6 - 0x460) = *(undefined4 *)(ulonglong)*puVar7;
  *(undefined8 *)(uVar5 - 0x20) = *(undefined8 *)(ulonglong)puVar7[4];
  uVar3 = puVar7[3];
  *(undefined8 *)(uVar5 - 0x28) = *(undefined8 *)(puVar7 + 1);
  *(undefined8 *)(uVar5 - 0x30) = *(undefined8 *)(ulonglong)uVar3;
  uVar3 = puVar7[2];
  *(undefined8 *)(uVar5 - 0x38) = *(undefined8 *)((longlong)(ulonglong)uVar3 + 4);
  *(undefined8 *)(uVar5 - 0x40) = *(undefined8 *)(ulonglong)uVar3;
  *(ulonglong *)(uVar5 - 0x48) = (ulonglong)((int)&stack0xfffffffffffffff8 - 0x460);
  *(undefined8 *)(uVar5 - 0x50) = 0x1408b7f52;
  FUN_1408b70c1((int)&stack0xfffffffffffffff8 + -0x45c);
  *(undefined4 *)(uVar6 - 0xc) = 0;
  *(undefined8 *)(uVar5 - 0x50) = 0x1408b7f61;
  FUN_1408b7267((int)&stack0xfffffffffffffff8 + -0x45c);
  *(undefined8 *)(uVar5 - 0x50) = 0x1408b7f6e;
  FUN_1408b6bf1((int)&stack0xfffffffffffffff8 + -0x420);
  *(ulonglong *)(uVar5 - 0x50) = (ulonglong)uVar1;
  *(ulonglong *)(uVar5 - 0x58) = (ulonglong)uVar2;
  *(undefined8 *)(uVar5 - 0x60) = *(undefined8 *)(uVar6 - 0x464);
  *(undefined8 *)(uVar5 - 0x68) = 0x1408b7f7b;
  FUN_1408cf1b2();
  uVar1 = *(uint *)(uVar6 - 4);
                    /* WARNING: Subroutine does not return */
  *(undefined **)((ulonglong)((int)(uVar5 - 0x60) + 0xc) + 0x10) = &UNK_1408b7f8d;
  FUN_1408802b0(uVar1 ^ (uint)&stack0xfffffffffffffff8);
}

