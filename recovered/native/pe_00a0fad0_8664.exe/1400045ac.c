/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400045ac */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1400045ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 local_118 [64];
  undefined1 local_d8 [64];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_38 = param_3;
  local_30 = param_3;
  local_28 = param_4;
  local_20 = param_2;
  FUN_140050b56(local_118);
  FUN_140006874(local_98,local_28);
  FUN_140050be8(local_d8,&local_30);
  FUN_140006874(local_78,local_20);
  lVar4 = FUN_14002bfdc(param_1,local_78,local_d8,local_98,0,local_118);
  FUN_14000169c(local_58,&DAT_14017067f);
  FUN_140004c14(lVar4,local_58);
  uVar3 = _UNK_1401390ac;
  uVar2 = _UNK_1401390a8;
  uVar1 = _UNK_1401390a4;
  *(undefined4 *)(lVar4 + 0x1a8) = _DAT_1401390a0;
  *(undefined4 *)(lVar4 + 0x1ac) = uVar1;
  *(undefined4 *)(lVar4 + 0x1b0) = uVar2;
  *(undefined4 *)(lVar4 + 0x1b4) = uVar3;
  *(undefined2 *)(lVar4 + 0x269) = 1;
  *(undefined1 *)(lVar4 + 0x26b) = 1;
  FUN_1400017de(local_20);
  FUN_1400017de(local_28);
  return lVar4;
}

