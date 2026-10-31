/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140dd8695 */

void FUN_140dd8695(void)

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
    uStack_28 = 0x140dd86ae;
    uStack_20 = uVar3;
    FUN_140dd89f5();
    uStack_30 = (ulonglong)(uVar1 + 0x1c);
    uStack_28 = 7;
    uStack_38 = 0x140dd86b9;
    FUN_140dd89f5();
    uStack_40 = (ulonglong)(uVar1 + 0x38);
    uStack_38 = 0xc;
    uStack_48 = 0x140dd86c4;
    FUN_140dd89f5();
    uStack_50 = (ulonglong)(uVar1 + 0x68);
    uStack_48 = 0xc;
    uStack_58 = 0x140dd86cf;
    FUN_140dd89f5();
    uStack_60 = (ulonglong)(uVar1 + 0x98);
    uStack_58 = 2;
    uStack_68 = 0x140dd86dd;
    FUN_140dd89f5();
    uStack_68 = *(undefined8 *)(uVar3 + 0xa0);
    uStack_70 = 0x140dd86e8;
    FUN_140dd41d0();
    uStack_70 = *(undefined8 *)(uVar3 + 0xa4);
    uStack_78 = 0x140dd86f3;
    FUN_140dd41d0();
    uStack_78 = *(undefined8 *)(uVar3 + 0xa8);
    uStack_80 = 0x140dd86fe;
    FUN_140dd41d0();
    auStack_98[2] = (ulonglong)(uVar1 + 0xb4);
    uStack_80 = 7;
    auStack_98[1] = 0x140dd870c;
    FUN_140dd89f5();
    auStack_98[0] = (ulonglong)(uVar1 + 0xd0);
    auStack_98[1] = 7;
    FUN_140dd89f5();
    uVar2 = (ulonglong)((int)auStack_98 + 0x44);
    *(undefined8 *)(uVar2 - 8) = 0xc;
    *(ulonglong *)(uVar2 - 0x10) = (ulonglong)(uVar1 + 0xec);
    *(undefined8 *)(uVar2 - 0x18) = 0x140dd872b;
    FUN_140dd89f5();
    *(undefined8 *)(uVar2 - 0x18) = 0xc;
    *(ulonglong *)(uVar2 - 0x20) = (ulonglong)(uVar1 + 0x11c);
    *(undefined8 *)(uVar2 - 0x28) = 0x140dd8739;
    FUN_140dd89f5();
    *(undefined8 *)(uVar2 - 0x28) = 2;
    *(ulonglong *)(uVar2 - 0x30) = (ulonglong)(uVar1 + 0x14c);
    *(undefined8 *)(uVar2 - 0x38) = 0x140dd8747;
    FUN_140dd89f5();
    *(undefined8 *)(uVar2 - 0x38) = *(undefined8 *)(uVar3 + 0x154);
    *(undefined8 *)(uVar2 - 0x40) = 0x140dd8752;
    FUN_140dd41d0();
    *(undefined8 *)(uVar2 - 0x40) = *(undefined8 *)(uVar3 + 0x158);
    *(undefined8 *)(uVar2 - 0x48) = 0x140dd875d;
    FUN_140dd41d0();
    *(undefined8 *)(uVar2 - 0x48) = *(undefined8 *)(uVar3 + 0x15c);
    *(undefined8 *)(uVar2 - 0x50) = 0x140dd8768;
    FUN_140dd41d0();
    *(undefined8 *)(uVar2 - 0x50) = *(undefined8 *)(uVar3 + 0x160);
    *(undefined8 *)(uVar2 - 0x58) = 0x140dd8773;
    FUN_140dd41d0();
  }
  return;
}

