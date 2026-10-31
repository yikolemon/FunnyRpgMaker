/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14031927e */

void FUN_14031927e(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = DAT_14062a630;
  *(undefined4 *)(DAT_14062a630 + 0x1fe0) = param_1;
  *(undefined4 *)(lVar2 + 0x1fe4) = param_2;
  *(undefined4 *)(lVar2 + 0x1fe8) = param_3;
  uVar1 = param_4[1];
  *(undefined8 *)(lVar2 + 0x1ffc) = *param_4;
  *(undefined8 *)(lVar2 + 0x2004) = uVar1;
  uVar1 = param_4[1];
  *(undefined8 *)(lVar2 + 0x1fec) = *param_4;
  *(undefined8 *)(lVar2 + 0x1ff4) = uVar1;
  return;
}

