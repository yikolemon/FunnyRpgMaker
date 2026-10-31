/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408d35c7 */

void FUN_1408d35c7(void)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong auStack_98 [3];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulonglong uStack_60;
  undefined8 uStack_58;
  ulonglong uStack_50;
  undefined8 uStack_48;
  ulonglong uStack_40;
  undefined8 uStack_38;
  ulonglong uStack_30;
  undefined8 uStack_28;
  ulonglong uStack_20;
  undefined8 uStack_18;
  
  uVar1 = *(uint *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) + 8);
  uVar3 = (ulonglong)uVar1;
  if (uVar1 != 0) {
    uStack_18 = 7;
    uStack_28 = 0x1408d35e0;
    uStack_20 = uVar3;
    FUN_1408d3927();
    uStack_30 = (ulonglong)(uVar1 + 0x1c);
    uStack_28 = 7;
    uStack_38 = 0x1408d35eb;
    FUN_1408d3927();
    uStack_40 = (ulonglong)(uVar1 + 0x38);
    uStack_38 = 0xc;
    uStack_48 = 0x1408d35f6;
    FUN_1408d3927();
    uStack_50 = (ulonglong)(uVar1 + 0x68);
    uStack_48 = 0xc;
    uStack_58 = 0x1408d3601;
    FUN_1408d3927();
    uStack_60 = (ulonglong)(uVar1 + 0x98);
    uStack_58 = 2;
    uStack_68 = 0x1408d360f;
    FUN_1408d3927();
    uStack_68 = *(undefined8 *)(uVar3 + 0xa0);
    uStack_70 = 0x1408d361a;
    FUN_1408cbff0();
    uStack_70 = *(undefined8 *)(uVar3 + 0xa4);
    uStack_78 = 0x1408d3625;
    FUN_1408cbff0();
    uStack_78 = *(undefined8 *)(uVar3 + 0xa8);
    uStack_80 = 0x1408d3630;
    FUN_1408cbff0();
    auStack_98[2] = (ulonglong)(uVar1 + 0xb4);
    uStack_80 = 7;
    auStack_98[1] = 0x1408d363e;
    FUN_1408d3927();
    auStack_98[0] = (ulonglong)(uVar1 + 0xd0);
    auStack_98[1] = 7;
    FUN_1408d3927();
    uVar2 = (ulonglong)((int)auStack_98 + 0x44);
    *(undefined8 *)(uVar2 - 8) = 0xc;
    *(ulonglong *)(uVar2 - 0x10) = (ulonglong)(uVar1 + 0xec);
    *(undefined8 *)(uVar2 - 0x18) = 0x1408d365d;
    FUN_1408d3927();
    *(undefined8 *)(uVar2 - 0x18) = 0xc;
    *(ulonglong *)(uVar2 - 0x20) = (ulonglong)(uVar1 + 0x11c);
    *(undefined8 *)(uVar2 - 0x28) = 0x1408d366b;
    FUN_1408d3927();
    *(undefined8 *)(uVar2 - 0x28) = 2;
    *(ulonglong *)(uVar2 - 0x30) = (ulonglong)(uVar1 + 0x14c);
    *(undefined8 *)(uVar2 - 0x38) = 0x1408d3679;
    FUN_1408d3927();
    *(undefined8 *)(uVar2 - 0x38) = *(undefined8 *)(uVar3 + 0x154);
    *(undefined8 *)(uVar2 - 0x40) = 0x1408d3684;
    FUN_1408cbff0();
    *(undefined8 *)(uVar2 - 0x40) = *(undefined8 *)(uVar3 + 0x158);
    *(undefined8 *)(uVar2 - 0x48) = 0x1408d368f;
    FUN_1408cbff0();
    *(undefined8 *)(uVar2 - 0x48) = *(undefined8 *)(uVar3 + 0x15c);
    *(undefined8 *)(uVar2 - 0x50) = 0x1408d369a;
    FUN_1408cbff0();
    *(undefined8 *)(uVar2 - 0x50) = *(undefined8 *)(uVar3 + 0x160);
    *(undefined8 *)(uVar2 - 0x58) = 0x1408d36a5;
    FUN_1408cbff0();
  }
  return;
}

