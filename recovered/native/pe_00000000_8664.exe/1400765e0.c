/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400765e0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1400765e0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  *(undefined8 *)(param_1 + 0xd4) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xba4) = 0;
  *(undefined8 *)(param_1 + 0xbac) = 0;
  *(undefined8 *)(param_1 + 0xbb4) = 0;
  *(undefined8 *)(param_1 + 0xbbc) = 0;
  *(undefined8 *)(param_1 + 0xbc4) = 0;
  *(undefined8 *)(param_1 + 0xbe8) = 0;
  *(undefined8 *)(param_1 + 0xbf0) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0xac4) = 0;
  *(undefined8 *)(param_1 + 0xacc) = 0;
  *(undefined8 *)(param_1 + 0xad4) = 0;
  *(undefined8 *)(param_1 + 0xadc) = 0;
  *(undefined8 *)(param_1 + 0xae4) = 0;
  *(undefined8 *)(param_1 + 0xaec) = 0;
  lVar3 = param_1;
  FUN_1401c5830(param_1,0,0xc18,param_4,param_1,0xfffffffffffffffe);
  *(undefined8 *)(param_1 + 0x18) = DAT_140211290;
  *(char **)(param_1 + 0x20) = "imgui.ini";
  *(char **)(param_1 + 0x28) = "imgui_log.txt";
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x39) = 0;
  *(undefined8 *)(param_1 + 0x41) = 0;
  *(undefined4 *)(param_1 + 0xbf8) = 0x3f800000;
  uVar1 = _UNK_1402112a8;
  *(undefined8 *)(param_1 + 8) = _DAT_1402112a0;
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(undefined2 *)(param_1 + 0x4a) = 0x100;
  *(undefined1 *)(param_1 + 0x4c) = 1;
  *(undefined1 *)(param_1 + 0x4e) = 1;
  *(undefined8 *)(param_1 + 0x4f) = 0;
  *(undefined2 *)(param_1 + 0x57) = 0x101;
  *(undefined1 *)(param_1 + 0x59) = 1;
  *(undefined2 *)(param_1 + 0x5d) = 0x100;
  *(undefined1 *)(param_1 + 0x5f) = 1;
  *(undefined2 *)(param_1 + 0x61) = 0x100;
  *(undefined2 *)(param_1 + 100) = 0x100;
  *(undefined2 *)(param_1 + 0x85) = 0x101;
  *(undefined1 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0x1010101;
  uVar1 = _UNK_1402112b8;
  *(undefined8 *)(param_1 + 0x68) = _DAT_1402112b0;
  *(undefined8 *)(param_1 + 0x70) = uVar1;
  *(undefined8 *)(param_1 + 0x78) = DAT_1402112c0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0xff7fffffff7fffff;
  *(undefined8 *)(param_1 + 0xac4) = 0xff7fffffff7fffff;
  lVar2 = 0x2df;
  do {
    *(undefined4 *)(param_1 + 0x14 + lVar2 * 4) = 0xbf800000;
    *(undefined4 *)(param_1 + lVar2 * 4) = 0xbf800000;
    uVar1 = DAT_1402112d0;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x2e4);
  lVar2 = 0x114;
  do {
    *(undefined8 *)(param_1 + lVar2) = uVar1;
    lVar2 = lVar2 + 0x10;
  } while (lVar2 != 0xac4);
  *(undefined1 *)(param_1 + 0xbe5) = 1;
  return lVar3;
}

