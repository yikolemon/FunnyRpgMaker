/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1007e4c4 */

void __thiscall FUN_1007e4c4(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_1 != param_2) {
    uVar1 = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
    *(undefined4 *)(param_2 + 0xc) = uVar1;
    uVar1 = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    *(undefined4 *)(param_2 + 0x10) = uVar1;
    uVar1 = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
    *(undefined4 *)(param_2 + 0x14) = uVar1;
    uVar1 = *(undefined4 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(param_2 + 0x18) = uVar1;
    uVar1 = *(undefined4 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(param_2 + 0x20) = uVar1;
    uVar1 = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
    *(undefined4 *)(param_2 + 0x28) = uVar1;
    uVar1 = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
    *(undefined4 *)(param_2 + 0x2c) = uVar1;
    uVar1 = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
    *(undefined4 *)(param_2 + 0x30) = uVar1;
  }
  return;
}

