/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140074584 */

bool FUN_140074584(void)

{
  longlong lVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  HMONITOR pHVar5;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 ***local_90;
  undefined8 local_88;
  undefined1 local_80 [32];
  undefined8 ***local_60 [2];
  undefined8 local_50;
  ulonglong local_48;
  undefined8 *local_40;
  undefined1 local_35;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
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
  FUN_1400d76ec();
  lVar1 = FUN_14007c514(0);
  if (lVar1 != 0) {
    pbVar2 = (byte *)FUN_140081200();
    local_40 = (undefined8 *)FUN_1401887b0(0x20);
    local_d8 = 0;
    uStack_d0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    FUN_140001000();
    local_2b = 1;
    local_2f = 1;
    FUN_1400027d2(local_80,"Game/FunnyGameUIViewConfig.ini");
    local_29 = 1;
    local_2a = 0;
    FUN_140055480(local_60,local_80,&local_d8);
    local_90 = local_60;
    if (7 < local_48) {
      local_90 = local_60[0];
    }
    local_88 = local_50;
    local_31 = 1;
    FUN_140017160(local_40,&local_90,&local_35);
    puVar3 = local_40;
    if (0xf < (ulonglong)local_40[3]) {
      puVar3 = (undefined8 *)*local_40;
    }
    *(undefined8 **)(pbVar2 + 0x20) = puVar3;
    local_31 = 0;
    FUN_140001056(local_60);
    local_29 = 0;
    local_2a = 0;
    FUN_14000109c(local_80);
    local_2b = 0;
    local_2f = 0;
    local_32 = 0;
    local_40 = (undefined8 *)FUN_1401887b0(0x20);
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    FUN_140001000();
    local_30 = 1;
    local_2e = 1;
    FUN_1400027d2(local_80,"Game/FunnyGameUIViewLog.log");
    local_2c = 0;
    local_2d = 1;
    FUN_140055480(local_60,local_80,&local_b8);
    local_90 = local_60;
    if (7 < local_48) {
      local_90 = local_60[0];
    }
    local_88 = local_50;
    local_33 = 1;
    FUN_140017160(local_40,&local_90,&local_35);
    puVar3 = local_40;
    if (0xf < (ulonglong)local_40[3]) {
      puVar3 = (undefined8 *)*local_40;
    }
    *(undefined8 **)(pbVar2 + 0x28) = puVar3;
    local_33 = 0;
    FUN_140001056(local_60);
    local_2c = 0;
    local_2d = 0;
    FUN_14000109c(local_80);
    local_30 = 0;
    local_2e = 0;
    local_34 = 0;
    *pbVar2 = *pbVar2 | 0x81;
    pbVar2[0x54] = 1;
    puVar4 = (undefined4 *)FUN_14007a54a();
    *puVar4 = 0x41a00000;
    FUN_1400749ca();
    FUN_14007501d();
    pHVar5 = MonitorFromPoint((POINT)0x0,2);
    DAT_140f17ad0 = FUN_1400d7995(pHVar5);
    FUN_140075714();
  }
  return lVar1 != 0;
}

