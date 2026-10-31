/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14009904a */

undefined4 * FUN_14009904a(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  if (param_1 == param_2) {
    FUN_14000ff1e(param_1 + 10,param_2 + 10);
  }
  else {
    FUN_140016e5c(param_1 + 4);
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 4) = 0;
    *(undefined8 *)(param_2 + 6) = 0;
    FUN_14000ff1e(param_1 + 10,param_2 + 10);
    FUN_1400317d4(param_1 + 0x12);
    *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
    *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
    *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_2 + 0x16);
    *(undefined8 *)(param_2 + 0x16) = 0;
    *(undefined8 *)(param_2 + 0x12) = 0;
    *(undefined8 *)(param_2 + 0x14) = 0;
  }
  FUN_14000ff1e(param_1 + 0x18,param_2 + 0x18);
  FUN_14000ff1e(param_1 + 0x20,param_2 + 0x20);
  if (param_1 != param_2) {
    FUN_140041304(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x2a) = *(undefined8 *)(param_2 + 0x2a);
    *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_2 + 0x2c);
    *(undefined8 *)(param_2 + 0x2c) = 0;
    *(undefined8 *)(param_2 + 0x28) = 0;
    *(undefined8 *)(param_2 + 0x2a) = 0;
    FUN_140016e5c(param_1 + 0x2e);
    *(undefined8 *)(param_1 + 0x2e) = *(undefined8 *)(param_2 + 0x2e);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0x32) = *(undefined8 *)(param_2 + 0x32);
    *(undefined8 *)(param_2 + 0x32) = 0;
    *(undefined8 *)(param_2 + 0x2e) = 0;
    *(undefined8 *)(param_2 + 0x30) = 0;
    FUN_14008d6d4(param_1 + 0x34);
    *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_2 + 0x34);
    *(undefined8 *)(param_1 + 0x36) = *(undefined8 *)(param_2 + 0x36);
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined8 *)(param_2 + 0x34) = 0;
    *(undefined8 *)(param_2 + 0x36) = 0;
    FUN_14008d65c(param_1 + 0x3a);
    *(undefined8 *)(param_1 + 0x3a) = *(undefined8 *)(param_2 + 0x3a);
    *(undefined8 *)(param_1 + 0x3c) = *(undefined8 *)(param_2 + 0x3c);
    *(undefined8 *)(param_1 + 0x3e) = *(undefined8 *)(param_2 + 0x3e);
    *(undefined8 *)(param_2 + 0x3e) = 0;
    *(undefined8 *)(param_2 + 0x3a) = 0;
    *(undefined8 *)(param_2 + 0x3c) = 0;
    FUN_140016e5c(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 0x42) = *(undefined8 *)(param_2 + 0x42);
    *(undefined8 *)(param_1 + 0x44) = *(undefined8 *)(param_2 + 0x44);
    *(undefined8 *)(param_2 + 0x44) = 0;
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined8 *)(param_2 + 0x42) = 0;
  }
  lVar4 = 0x118;
  do {
    FUN_14000ff1e((longlong)param_1 + lVar4,(longlong)param_2 + lVar4);
    lVar4 = lVar4 + 0x20;
  } while (lVar4 != 0xd98);
  FUN_14000ff1e(param_1 + 0x366,param_2 + 0x366);
  FUN_14000ff1e(param_1 + 0x36e,param_2 + 0x36e);
  param_1[0x376] = param_2[0x376];
  *(undefined1 *)(param_1 + 0x377) = *(undefined1 *)(param_2 + 0x377);
  return param_1;
}

