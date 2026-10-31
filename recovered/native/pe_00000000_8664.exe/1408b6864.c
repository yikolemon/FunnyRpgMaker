/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408b6864 */

undefined4 FUN_1408b6864(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  undefined8 unaff_RSI;
  
  uVar7 = (ulonglong)&stack0xfffffffffffffff8 & 0xffffffff;
  uVar5 = (ulonglong)((int)&stack0xfffffffffffffff8 - 0x5c);
  *(undefined8 *)(uVar5 - 8) = unaff_RSI;
  *(undefined8 *)(uVar5 - 0x10) = *(undefined8 *)(uVar7 + 0x18);
  *(undefined8 *)(uVar5 - 0x18) = 0x1408b6878;
  FUN_1408b6a20((int)&stack0xfffffffffffffff8 + -0x5c);
  iVar1 = *(int *)(uVar7 + 0x10);
  iVar2 = *(int *)(uVar7 + 0x14);
  uVar4 = *(undefined4 *)(uVar7 + 0xc);
  *(undefined4 *)(uVar7 - 0x10) = *(undefined4 *)(uVar7 + 0x1c);
  uVar3 = *(undefined4 *)(uVar7 + 8);
  *(int *)(uVar7 - 0xc) = iVar2;
  *(int *)(uVar7 - 8) = iVar1;
  *(undefined4 *)(uVar7 - 0x20) = uVar3;
  *(undefined4 *)(uVar7 - 0x1c) = uVar4;
  if ((iVar1 == 0) || (iVar2 == 0)) {
    *(undefined1 *)(uVar7 - 0x40) = 1;
    *(ulonglong *)(uVar5 - 0x18) = (ulonglong)((int)&stack0xfffffffffffffff8 - 0x5c);
    *(undefined4 *)(uVar7 - 0x44) = 0x16;
    *(undefined8 *)(uVar5 - 0x20) = 0;
    *(undefined8 *)(uVar5 - 0x28) = 0;
    *(undefined8 *)(uVar5 - 0x30) = 0;
    *(undefined8 *)(uVar5 - 0x38) = 0;
    *(undefined8 *)(uVar5 - 0x40) = 0;
    *(undefined8 *)(uVar5 - 0x48) = 0x1408b68b5;
    FUN_1408cbf04();
    puVar6 = (undefined1 *)(ulonglong)((int)(uVar5 - 0x40) + 0x18);
    uVar4 = 0xffffffff;
  }
  else {
    *(int *)(uVar7 - 0x14) = iVar1;
    *(int *)(uVar7 - 0x34) = (int)&stack0xfffffffffffffff8 + -8;
    *(int *)(uVar7 - 0x18) = iVar1;
    *(int *)(uVar7 - 0x30) = (int)&stack0xfffffffffffffff8 + -0x5c;
    *(int *)(uVar7 - 0x2c) = (int)&stack0xfffffffffffffff8 + -0x20;
    *(int *)(uVar7 - 0x28) = (int)&stack0xfffffffffffffff8 + -0xc;
    *(int *)(uVar7 - 0x24) = (int)&stack0xfffffffffffffff8 + -0x10;
    *(ulonglong *)(uVar5 - 0x18) = (ulonglong)((int)&stack0xfffffffffffffff8 - 0x14);
    *(ulonglong *)(uVar5 - 0x20) = (ulonglong)((int)&stack0xfffffffffffffff8 - 0x34);
    puVar6 = (undefined1 *)(uVar5 - 0x28);
    *(ulonglong *)(uVar5 - 0x28) = (ulonglong)((int)&stack0xfffffffffffffff8 - 0x18);
    *(undefined8 *)(uVar5 - 0x30) = 0x1408b68f9;
    uVar4 = FUN_1408ba36a((int)&stack0xfffffffffffffff8 + -1);
  }
  *(undefined8 *)(puVar6 + -8) = 0x1408b6903;
  FUN_1408b6a80((int)&stack0xfffffffffffffff8 + -0x5c);
  return uVar4;
}

