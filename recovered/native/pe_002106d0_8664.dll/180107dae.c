/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180107dae */

void FUN_180107dae(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = DAT_180419160;
  *(undefined4 *)(DAT_180419160 + 0x1fe0) = param_1;
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

