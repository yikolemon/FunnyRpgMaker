/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10012c2d */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10012c2d(undefined4 param_1)

{
  byte bVar1;
  undefined4 ****ppppuVar2;
  int iVar3;
  undefined1 auStack_120 [8];
  wchar_t *local_118;
  undefined4 uStack_114;
  undefined4 *local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 local_100;
  undefined4 ***local_f0 [4];
  undefined4 local_e0;
  uint local_dc;
  DWORD local_d8;
  undefined4 local_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 local_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined1 local_b0 [24];
  char local_98 [72];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  byte abStack_38 [16];
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = auStack_120;
  local_18 = 0xffffffff;
  local_1c = &LAB_10058d50;
  local_20 = ExceptionList;
  ExceptionList = &local_20;
  local_d8 = GetCurrentProcessId();
  FUN_100c522a(local_98,0);
  local_18 = 0;
  local_118 = L"{}@{}";
  uStack_114 = 5;
  FUN_10012e8c(local_b0,0x51035612c,local_98,&local_d8);
  local_18 = 0xffffffff;
  FUN_10001134();
  local_18 = 1;
  FUN_100c5628(local_f0,local_b0);
  local_18 = 2;
  ppppuVar2 = local_f0;
  if (0xf < local_dc) {
    ppppuVar2 = (undefined4 ****)local_f0[0];
  }
  local_98[0] = '\0';
  iVar3 = 0;
  local_4c = 0;
  local_50 = 0;
  local_48 = _DAT_1028f530;
  uStack_44 = _UNK_1028f534;
  uStack_40 = _UNK_1028f538;
  uStack_3c = _UNK_1028f53c;
  FUN_100153b2(ppppuVar2,local_e0);
  FUN_10015424();
  local_c4 = 0;
  uStack_c0 = 0;
  uStack_bc = 0;
  uStack_b8 = 0;
  local_d4 = 0;
  uStack_d0 = 0;
  uStack_cc = 0;
  uStack_c8 = 0;
  if (local_98[0] == '\x01') {
    do {
      bVar1 = abStack_38[iVar3];
      *(char *)((int)&local_d4 + iVar3 * 2) = "0123456789abcdef"[bVar1 >> 4];
      *(char *)((int)&local_d4 + iVar3 * 2 + 1) = "0123456789abcdef"[bVar1 & 0xf];
      iVar3 = iVar3 + 1;
    } while (iVar3 != 0x10);
  }
  local_110 = (undefined4 *)0x0;
  uStack_10c = 0;
  uStack_108 = 0;
  uStack_104 = 0;
  local_100 = 0;
  local_18 = 2;
  local_110 = (undefined4 *)FUN_10228350(0x30);
  local_100 = 0x2f00000020;
  local_110[4] = local_c4;
  local_110[5] = uStack_c0;
  local_110[6] = uStack_bc;
  local_110[7] = uStack_b8;
  *local_110 = local_d4;
  local_110[1] = uStack_d0;
  local_110[2] = uStack_cc;
  local_110[3] = uStack_c8;
  *(undefined1 *)(local_110 + 8) = 0;
  local_18 = 3;
  FUN_10012eed();
  local_18 = 0xffffffff;
  FUN_10001fee();
  FUN_10001fee();
  FUN_10001134();
  ExceptionList = local_20;
  return param_1;
}

