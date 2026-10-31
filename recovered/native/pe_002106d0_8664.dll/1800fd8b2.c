/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800fd8b2 */

void FUN_1800fd8b2(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = DAT_1802de550;
  lVar2 = 0;
  do {
    *(undefined1 *)(param_1 + 0xa10 + lVar2) = 0;
    *(undefined8 *)(param_1 + 0xa14 + lVar2) = uVar1;
    lVar2 = lVar2 + 0x10;
  } while (lVar2 != 0x70);
  *(undefined8 *)(param_1 + 0xe8) = 0xff7fffffff7fffff;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(undefined1 *)(param_1 + 0xf4) = 0;
  lVar2 = -5;
  do {
    *(undefined4 *)(param_1 + 0xba4 + lVar2 * 4) = 0xbf800000;
    *(undefined4 *)(param_1 + 0xb90 + lVar2 * 4) = 0xbf800000;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0);
  *(undefined8 *)(param_1 + 0xf8) = 0;
  return;
}

