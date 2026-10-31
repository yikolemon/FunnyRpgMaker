/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800986be */

undefined1 *
FUN_1800986be(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  puVar2 = param_1 + 0x28;
  FUN_180001254(puVar2,L"",param_3,param_4,puVar2);
  puVar3 = param_1 + 0x48;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  puVar4 = param_1 + 0x60;
  FUN_180001254(puVar4,L"");
  puVar5 = param_1 + 0x80;
  FUN_180001254(puVar5,L"");
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
  lVar1 = 0x130;
  do {
    *(undefined8 *)(param_1 + lVar1 + -0x18) = 0;
    *(undefined8 *)((longlong)(param_1 + lVar1 + -0x18) + 8) = 0;
    *(undefined8 *)(param_1 + lVar1 + -8) = 0;
    *(undefined8 *)(param_1 + lVar1) = 7;
    lVar1 = lVar1 + 0x20;
  } while (lVar1 != 0xdb0);
  FUN_180001254(param_1 + 0xd98,L"",param_3,param_4,puVar2,puVar3,puVar4,puVar5,param_1 + 0xa0,
                param_1 + 0xb8,param_1 + 0xd0,param_1 + 0xe8,param_1 + 0x100,param_1 + 0x118,
                param_1 + 0xd98);
  FUN_180001254(param_1 + 0xdb8,L"");
  *(undefined4 *)(param_1 + 0xdd8) = 0;
  param_1[0xddc] = 0;
  return param_1;
}

