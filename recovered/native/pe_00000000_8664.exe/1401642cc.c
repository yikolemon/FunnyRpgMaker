/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401642cc */

void FUN_1401642cc(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x3e0);
  FUN_1401c5830(param_1,0,0x448);
  FUN_1401640db(param_1,param_2,param_3,param_4,param_5);
  *(longlong *)(param_1 + 0xb0) = lVar1;
  *(undefined4 *)(param_1 + 0x3fc) = *(undefined4 *)(lVar1 + 0xa0);
  *(undefined8 *)(param_1 + 0x410) = *(undefined8 *)(lVar1 + 0x5b8);
  uVar2 = FUN_14016603f(*(undefined4 *)(lVar1 + 0x608));
  *(undefined4 *)(param_1 + 0x404) = uVar2;
  *(undefined4 *)(param_1 + 0x424) = param_6;
  *(undefined8 *)(param_1 + 0x438) = param_7;
  *(undefined8 *)(param_1 + 0x440) = param_8;
  return;
}

