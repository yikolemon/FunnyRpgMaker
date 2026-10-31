/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800fcf7c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1800fcf7c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1802a89a0(param_1 + 0x28,0,0x3f0);
  uVar1 = _UNK_1802de3c8;
  *param_1 = _DAT_1802de3c0;
  param_1[1] = uVar1;
  param_1[2] = 0x410000003f19999a;
  *(undefined4 *)(param_1 + 3) = 0x41000000;
  *(undefined8 *)((longlong)param_1 + 0x1c) = DAT_1802de3d0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x40800000;
  uVar1 = _UNK_1802de3e8;
  param_1[5] = _DAT_1802de3e0;
  param_1[6] = uVar1;
  *(undefined4 *)(param_1 + 7) = 0;
  uVar1 = _UNK_1802de3f8;
  *(undefined8 *)((longlong)param_1 + 0x3c) = _DAT_1802de3f0;
  *(undefined8 *)((longlong)param_1 + 0x44) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0x4040000040800000;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  uVar1 = _UNK_1802de408;
  *(undefined8 *)((longlong)param_1 + 0x5c) = _DAT_1802de400;
  *(undefined8 *)((longlong)param_1 + 100) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x6c) = DAT_1802de410;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  uVar1 = _UNK_1802de428;
  *(undefined8 *)((longlong)param_1 + 0x7c) = _DAT_1802de420;
  *(undefined8 *)((longlong)param_1 + 0x84) = uVar1;
  uVar1 = _UNK_1802de438;
  *(undefined8 *)((longlong)param_1 + 0x8c) = _DAT_1802de430;
  *(undefined8 *)((longlong)param_1 + 0x94) = uVar1;
  uVar1 = _UNK_1802de448;
  *(undefined8 *)((longlong)param_1 + 0x9c) = _DAT_1802de440;
  *(undefined8 *)((longlong)param_1 + 0xa4) = uVar1;
  uVar1 = _UNK_1802de458;
  *(undefined8 *)((longlong)param_1 + 0xac) = _DAT_1802de450;
  *(undefined8 *)((longlong)param_1 + 0xb4) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0xbc) = DAT_1802dc280;
  uVar1 = _UNK_1802de468;
  *(undefined8 *)((longlong)param_1 + 0xc4) = _DAT_1802de460;
  *(undefined8 *)((longlong)param_1 + 0xcc) = uVar1;
  uVar1 = _UNK_1802de478;
  *(undefined8 *)((longlong)param_1 + 0xd4) = _DAT_1802de470;
  *(undefined8 *)((longlong)param_1 + 0xdc) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0xe4) = DAT_1802de480;
  uVar1 = _UNK_1802de498;
  *(undefined8 *)((longlong)param_1 + 0xec) = _DAT_1802de490;
  *(undefined8 *)((longlong)param_1 + 0xf4) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
  param_1[0x20] = DAT_1802de4a0;
  uVar1 = _UNK_1802de4b8;
  param_1[0x21] = _DAT_1802de4b0;
  param_1[0x22] = uVar1;
  uVar1 = _UNK_1802de4c8;
  param_1[0x23] = _DAT_1802de4c0;
  param_1[0x24] = uVar1;
  *(undefined1 *)(param_1 + 0x25) = 1;
  *(undefined8 *)((longlong)param_1 + 300) = DAT_1802de4d0;
  *(undefined2 *)((longlong)param_1 + 0x134) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x136) = 1;
  param_1[0x27] = DAT_1802de4e0;
  param_1[0xa6] = DAT_1802de4f0;
  param_1[0xa7] = 0xa4003ecccccd;
  *(undefined4 *)(param_1 + 0xa8) = 0x30400;
  *(ulonglong *)((longlong)param_1 + 0x544) = (ulonglong)DAT_1802ac570;
  FUN_18018d5a0(param_1);
  return param_1;
}

