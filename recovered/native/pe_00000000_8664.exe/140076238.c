/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140076238 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140076238(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1401c5830(param_1 + 0x28,0,0x3f0);
  uVar1 = _UNK_140211148;
  *param_1 = _DAT_140211140;
  param_1[1] = uVar1;
  param_1[2] = 0x410000003f19999a;
  *(undefined4 *)(param_1 + 3) = 0x41000000;
  *(undefined8 *)((longlong)param_1 + 0x1c) = DAT_140211150;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x40800000;
  uVar1 = _UNK_140211168;
  param_1[5] = _DAT_140211160;
  param_1[6] = uVar1;
  *(undefined4 *)(param_1 + 7) = 0;
  uVar1 = _UNK_140211178;
  *(undefined8 *)((longlong)param_1 + 0x3c) = _DAT_140211170;
  *(undefined8 *)((longlong)param_1 + 0x44) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0x4040000040800000;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  uVar1 = _UNK_140211188;
  *(undefined8 *)((longlong)param_1 + 0x5c) = _DAT_140211180;
  *(undefined8 *)((longlong)param_1 + 100) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x6c) = DAT_140211190;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  uVar1 = _UNK_1402111a8;
  *(undefined8 *)((longlong)param_1 + 0x7c) = _DAT_1402111a0;
  *(undefined8 *)((longlong)param_1 + 0x84) = uVar1;
  uVar1 = _UNK_1402111b8;
  *(undefined8 *)((longlong)param_1 + 0x8c) = _DAT_1402111b0;
  *(undefined8 *)((longlong)param_1 + 0x94) = uVar1;
  uVar1 = _UNK_1402111c8;
  *(undefined8 *)((longlong)param_1 + 0x9c) = _DAT_1402111c0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = uVar1;
  uVar1 = _UNK_1402111d8;
  *(undefined8 *)((longlong)param_1 + 0xac) = _DAT_1402111d0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0xbc) = DAT_1401c8660;
  uVar1 = _UNK_1402111e8;
  *(undefined8 *)((longlong)param_1 + 0xc4) = _DAT_1402111e0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = uVar1;
  uVar1 = _UNK_1402111f8;
  *(undefined8 *)((longlong)param_1 + 0xd4) = _DAT_1402111f0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0xe4) = DAT_140211200;
  uVar1 = _UNK_140211218;
  *(undefined8 *)((longlong)param_1 + 0xec) = _DAT_140211210;
  *(undefined8 *)((longlong)param_1 + 0xf4) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
  param_1[0x20] = DAT_140211220;
  uVar1 = _UNK_140211238;
  param_1[0x21] = _DAT_140211230;
  param_1[0x22] = uVar1;
  uVar1 = _UNK_140211248;
  param_1[0x23] = _DAT_140211240;
  param_1[0x24] = uVar1;
  *(undefined1 *)(param_1 + 0x25) = 1;
  *(undefined8 *)((longlong)param_1 + 300) = DAT_140211250;
  *(undefined2 *)((longlong)param_1 + 0x134) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x136) = 1;
  param_1[0x27] = DAT_140211260;
  param_1[0xa6] = DAT_140211270;
  param_1[0xa7] = 0xa4003ecccccd;
  *(undefined4 *)(param_1 + 0xa8) = 0x30400;
  *(ulonglong *)((longlong)param_1 + 0x544) = (ulonglong)DAT_1401c86c8;
  FUN_1400d8b14(param_1);
  return param_1;
}

