/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140098bcc */

undefined1 *
FUN_140098bcc(undefined1 *param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined1 uVar1;
  longlong lVar2;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = *param_3;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  FUN_14000f628(param_1 + 0x28,&DAT_140174404,param_3,param_4,param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  FUN_14000f628(param_1 + 0x60,&DAT_140174404);
  FUN_14000f628(param_1 + 0x80,&DAT_140174404);
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  lVar2 = 0x130;
  do {
    *(undefined8 *)(param_1 + lVar2 + -0x18) = 0;
    *(undefined8 *)((longlong)(param_1 + lVar2 + -0x18) + 8) = 0;
    *(undefined8 *)(param_1 + lVar2 + -8) = 0;
    *(undefined8 *)(param_1 + lVar2) = 7;
    lVar2 = lVar2 + 0x20;
  } while (lVar2 != 0xdb0);
  FUN_14000f628(param_1 + 0xd98,&DAT_140174404);
  FUN_14000f628(param_1 + 0xdb8,&DAT_140174404);
  *(undefined4 *)(param_1 + 0xdd8) = 0;
  param_1[0xddc] = 0;
  uVar1 = FUN_1400999b4(param_1,param_2);
  *param_1 = uVar1;
  return param_1;
}

