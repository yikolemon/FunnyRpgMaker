/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400bf15f */

void FUN_1400bf15f(longlong param_1,longlong param_2)

{
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  if (0x28 < param_2 - param_1) {
    local_58 = *(undefined4 *)(param_2 + -0x28);
    uStack_54 = *(undefined4 *)(param_2 + -0x24);
    uStack_50 = *(undefined4 *)(param_2 + -0x20);
    uStack_4c = *(undefined4 *)(param_2 + -0x1c);
    local_48 = *(undefined4 *)(param_2 + -0x18);
    uStack_44 = *(undefined4 *)(param_2 + -0x14);
    uStack_40 = *(undefined4 *)(param_2 + -0x10);
    uStack_3c = *(undefined4 *)(param_2 + -0xc);
    *(undefined8 *)(param_2 + -0x18) = 0;
    *(undefined8 *)(param_2 + -0x10) = 7;
    *(undefined2 *)(param_2 + -0x28) = 0;
    local_38 = *(undefined8 *)(param_2 + -8);
    FUN_14000ff1e(param_2 + -0x28,param_1);
    *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_1 + 0x20);
    FUN_1400beffb(param_1,0,((param_2 + -0x28) - param_1 >> 3) * -0x3333333333333333,&local_58);
    FUN_140005242(&local_58);
  }
  return;
}

