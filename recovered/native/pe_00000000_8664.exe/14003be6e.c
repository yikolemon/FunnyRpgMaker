/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14003be6e */

ulonglong FUN_14003be6e(void)

{
  int iVar1;
  longlong lVar2;
  undefined8 unaff_RBX;
  undefined1 local_1f8 [32];
  undefined1 local_1d8 [32];
  undefined1 local_1b8 [32];
  undefined1 local_198 [32];
  undefined1 *local_178;
  undefined1 *local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined1 local_150 [32];
  undefined1 local_130 [32];
  undefined1 local_110 [32];
  undefined1 local_f0 [32];
  undefined1 local_d0 [32];
  undefined1 local_b0 [32];
  undefined1 local_90 [8];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined1 local_48;
  longlong local_40;
  undefined1 *local_38;
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_2e;
  undefined1 local_2d;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  FUN_140001000(local_150);
  FUN_140001000(local_130);
  FUN_140048c20(local_110);
  if (DAT_140f2a368 == 1) {
    FUN_1400032ac(local_1f8,local_110);
    local_2d = 1;
    FUN_1400027d2(local_90,"Win32Injector-x32.exe");
    local_29 = 0;
    FUN_140055480(local_f0,local_90,local_1f8);
    FUN_140040b8e(local_150,local_f0);
    FUN_140001056(local_f0);
    local_29 = 0;
    FUN_14000109c(local_90);
    local_2d = 0;
    FUN_1400032ac(local_1d8,local_110);
    local_2e = 1;
    FUN_1400027d2(local_90,"FunnyGameXLL-x32.dll");
    local_2a = 0;
    FUN_140055480(local_f0,local_90,local_1d8);
    FUN_140040b8e(local_130,local_f0);
    FUN_140001056(local_f0);
    local_2a = 0;
    FUN_14000109c(local_90);
    local_2e = 0;
  }
  else {
    FUN_1400032ac(local_1b8,local_110);
    local_2f = 1;
    FUN_1400027d2(local_90,"Win32Injector-x64.exe");
    local_2b = 0;
    FUN_140055480(local_f0,local_90,local_1b8);
    FUN_140040b8e(local_150,local_f0);
    FUN_140001056(local_f0);
    local_2b = 0;
    FUN_14000109c(local_90);
    local_2f = 0;
    FUN_1400032ac(local_198,local_110);
    local_30 = 1;
    FUN_1400027d2(local_90,"FunnyGameXLL-x64.dll");
    local_2c = 0;
    FUN_140055480(local_f0,local_90,local_198);
    FUN_140040b8e(local_130,local_f0);
    FUN_140001056(local_f0);
    local_2c = 0;
    FUN_14000109c(local_90);
    local_30 = 0;
  }
  local_90[0] = 1;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 7;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_38 = local_f0;
  FUN_140003aa0(local_38,local_150);
  local_38 = local_d0;
  FUN_140003aa0(local_38,local_130);
  local_38 = local_b0;
  FUN_1400563de(local_b0,&DAT_140f2a240);
  local_178 = local_90;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  local_170 = local_f0;
  local_38 = local_b0;
  FUN_1400450f6(&local_168,3);
  iVar1 = FUN_140056c6d(&local_168,local_90);
  FUN_14004507e(&local_168);
  lVar2 = 0x40;
  do {
    local_40 = lVar2;
    FUN_140001e90(local_f0 + lVar2);
    lVar2 = local_40 + -0x20;
  } while (lVar2 != -0x20);
  FUN_14004507e(&local_60);
  FUN_140001e90(&uStack_80);
  FUN_140001056(local_110);
  FUN_140001056(local_130);
  FUN_140001056(local_150);
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),iVar1 == 0) & 0xffffffff;
}

