/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18011711d */

void FUN_18011711d(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  lVar2 = DAT_180419160;
  *(undefined2 *)(DAT_180419160 + 0x22a1) = 1;
  *(undefined1 *)(lVar2 + 0x22a0) = 1;
  *(undefined4 *)(lVar2 + 0x22b0) = param_1;
  *(undefined4 *)(lVar2 + 0x22b4) = param_1;
  *(undefined4 *)(lVar2 + 0x22b8) = param_2;
  *(uint *)(lVar2 + 0x22a4) = param_3 >> 6 & 0x10 | param_3;
  *(undefined4 *)(lVar2 + 0x22a8) = param_4;
  uVar3 = 0;
  if ((param_3 >> 9 & 1) == 0) {
    uVar3 = *(undefined4 *)(lVar2 + 0x13c);
  }
  *(undefined4 *)(lVar2 + 0x22ac) = uVar3;
  *(undefined4 *)(lVar2 + 0x2308) = 0;
  *(undefined8 *)(lVar2 + 0x22e8) = 0;
  *(undefined8 *)(lVar2 + 0x22f0) = 0;
  *(undefined8 *)(lVar2 + 0x2318) = 0xffffffffffffffff;
  *(undefined4 *)(lVar2 + 0x2314) = 0x7f7fffff;
  uVar1 = DAT_1802de500;
  *(undefined8 *)(lVar2 + 0x230c) = DAT_1802de500;
  *(undefined4 *)(lVar2 + 0x2340) = 0;
  *(undefined8 *)(lVar2 + 0x2320) = 0;
  *(undefined8 *)(lVar2 + 9000) = 0;
  *(undefined8 *)(lVar2 + 0x2350) = 0xffffffffffffffff;
  *(undefined4 *)(lVar2 + 0x234c) = 0x7f7fffff;
  *(undefined8 *)(lVar2 + 0x2344) = uVar1;
  *(undefined4 *)(lVar2 + 0x2378) = 0;
  *(undefined8 *)(lVar2 + 0x2358) = 0;
  *(undefined8 *)(lVar2 + 0x2360) = 0;
  *(undefined8 *)(lVar2 + 0x2388) = 0xffffffffffffffff;
  *(undefined4 *)(lVar2 + 0x2384) = 0x7f7fffff;
  *(undefined8 *)(lVar2 + 0x237c) = uVar1;
  *(undefined4 *)(lVar2 + 0x22e4) = 0;
  *(undefined4 *)(lVar2 + 0x23b0) = 0;
  *(undefined8 *)(lVar2 + 0x2390) = 0;
  *(undefined8 *)(lVar2 + 0x2398) = 0;
  *(undefined8 *)(lVar2 + 0x23c0) = 0xffffffffffffffff;
  *(undefined4 *)(lVar2 + 0x23bc) = 0x7f7fffff;
  *(undefined8 *)(lVar2 + 0x23b4) = uVar1;
  *(undefined1 *)(lVar2 + 0x2261) = 1;
  return;
}

