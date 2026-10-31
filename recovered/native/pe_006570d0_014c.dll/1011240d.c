/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1011240d */

void FUN_1011240d(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  ulonglong uVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar5 = DAT_1039d74c;
  *(undefined2 *)(DAT_1039d74c + 0x20d9) = 1;
  *(undefined1 *)(iVar5 + 0x20d8) = 1;
  *(undefined4 *)(iVar5 + 0x20e8) = param_1;
  *(undefined4 *)(iVar5 + 0x20ec) = param_1;
  *(undefined4 *)(iVar5 + 0x20f0) = param_2;
  *(uint *)(iVar5 + 0x20dc) = param_3 >> 6 & 0x10 | param_3;
  *(undefined4 *)(iVar5 + 0x20e0) = param_4;
  uVar6 = 0;
  if ((param_3 >> 9 & 1) == 0) {
    uVar6 = *(undefined4 *)(iVar5 + 0x108);
  }
  *(undefined4 *)(iVar5 + 0x20e4) = uVar6;
  *(undefined4 *)(iVar5 + 0x2120) = 0;
  *(undefined4 *)(iVar5 + 0x2128) = 0;
  *(undefined4 *)(iVar5 + 0x2124) = 0;
  *(undefined4 *)(iVar5 + 0x213c) = 0;
  uVar4 = DAT_102b8d80;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = DAT_102b8d80;
  *(undefined1 (*) [16])(iVar5 + 0x2150) = auVar1;
  *(undefined4 *)(iVar5 + 0x2148) = 0x7f7fffff;
  uVar3 = DAT_102b8950;
  *(undefined8 *)(iVar5 + 0x2140) = DAT_102b8950;
  *(undefined4 *)(iVar5 + 0x2160) = 0;
  *(undefined4 *)(iVar5 + 0x2174) = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar4;
  *(undefined1 (*) [16])(iVar5 + 0x2188) = auVar2;
  *(undefined4 *)(iVar5 + 0x2180) = 0x7f7fffff;
  *(undefined8 *)(iVar5 + 0x2178) = uVar3;
  *(undefined4 *)(iVar5 + 0x2198) = 0;
  *(undefined4 *)(iVar5 + 0x21ac) = 0;
  *(undefined4 *)(iVar5 + 0x21c4) = 0xffffffff;
  *(undefined4 *)(iVar5 + 0x21c0) = 0xffffffff;
  *(undefined4 *)(iVar5 + 0x21b8) = 0x7f7fffff;
  *(undefined8 *)(iVar5 + 0x21b0) = uVar3;
  *(undefined4 *)(iVar5 + 0x211c) = 0;
  *(undefined4 *)(iVar5 + 0x21c8) = 0;
  *(undefined4 *)(iVar5 + 0x21d0) = 0;
  *(undefined4 *)(iVar5 + 0x21cc) = 0;
  *(undefined4 *)(iVar5 + 0x21e4) = 0;
  *(undefined4 *)(iVar5 + 0x21f8) = 0xffffffff;
  *(undefined4 *)(iVar5 + 0x21fc) = 0xffffffff;
  *(undefined4 *)(iVar5 + 0x21f0) = 0x7f7fffff;
  *(undefined8 *)(iVar5 + 0x21e8) = uVar3;
  *(undefined1 *)(iVar5 + 0x2099) = 1;
  return;
}

