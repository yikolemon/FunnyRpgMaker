/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18007f272 */

void FUN_18007f272(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    *(undefined4 *)(param_2 + 0x10) = uVar1;
    uVar1 = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
    *(undefined4 *)(param_2 + 0x14) = uVar1;
    uVar1 = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
    *(undefined4 *)(param_2 + 0x18) = uVar1;
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_2 + 0x20) = uVar2;
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_2 + 0x28) = uVar2;
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_2 + 0x30) = uVar2;
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_2 + 0x38) = uVar2;
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = uVar2;
  }
  return;
}

