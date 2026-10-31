/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402b183a */

undefined8 FUN_1402b183a(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  longlong lVar10;
  undefined1 local_618 [56];
  undefined1 local_5e0 [56];
  undefined1 local_5a8 [56];
  undefined1 local_570 [56];
  undefined1 local_538 [56];
  undefined1 local_500 [56];
  undefined4 local_4c8;
  int iStack_4c4;
  undefined8 local_4b8;
  ulonglong local_4b0;
  uint local_490;
  uint local_48c;
  char *local_330;
  undefined8 local_328;
  wchar_t *local_320;
  undefined8 local_318;
  char *local_310;
  undefined8 local_308;
  char *local_300;
  undefined8 local_2f8;
  undefined *local_2f0;
  undefined8 local_2e8;
  undefined4 local_2e0;
  int iStack_2dc;
  undefined8 local_2d0;
  ulonglong local_2c8;
  uint local_2a8;
  uint local_2a4;
  undefined4 local_148 [40];
  longlong local_a8;
  char *local_a0;
  char *local_98;
  ulonglong local_90;
  char *local_88;
  char *local_80;
  undefined8 local_70;
  char *local_68;
  char *local_60;
  uint local_50;
  int local_4c [3];
  
  local_4c[1] = -2;
  local_4c[2] = -1;
  plVar1 = param_1 + 0xb;
  puVar9 = &local_4c8;
  FUN_14027c19e(plVar1,puVar9);
  if (7 < local_4b0) {
    puVar9 = (undefined4 *)CONCAT44(iStack_4c4,local_4c8);
  }
  FUN_140215958(&DAT_140629048,puVar9,local_4b8);
  FUN_14021331c(&local_4c8);
  local_2e0 = 2;
  local_148[0] = 0;
  FUN_1402841c4(&local_4c8,plVar1,local_148,&local_2e0,&DAT_1404cb55f);
  if ((char)local_4c8 == '\0') {
    cVar4 = FUN_140284338(&local_4c8,&DAT_1406290d8);
    if (cVar4 == '\0') {
      local_70 = 0x28000002b1;
      local_68 = "indowFlags_NoDecoration";
      local_60 = "Event::Init(FileCoder &)";
      FUN_140283ef0(local_148);
      FUN_14023203a(&local_2e0,local_148,"p\nSize: %d\nCapacity: %d");
      FUN_140280e42(local_618,&local_2e0);
                    /* WARNING: Subroutine does not return */
      FUN_14047ea80(local_618,&DAT_1405b7880);
    }
  }
  uVar5 = FUN_140289c02(&local_4b8);
  *(undefined1 *)(param_1 + 6) = uVar5;
  plVar2 = param_1 + 7;
  puVar9 = &local_2e0;
  FUN_14027c19e(plVar2,puVar9);
  if (7 < local_2c8) {
    puVar9 = (undefined4 *)CONCAT44(iStack_2dc,local_2e0);
  }
  FUN_140215958(&DAT_140629048,puVar9,local_2d0);
  FUN_14021331c(&local_2e0);
  local_90 = local_90 & 0xffffffffff000000;
  local_148[0] = 3;
  local_70 = (ulonglong)local_70._4_4_ << 0x20;
  FUN_1402841c4(&local_2e0,plVar2,&local_70,local_148,&local_90);
  uVar6 = FUN_140289b16(&local_2d0);
  for (uVar7 = 0; uVar7 < uVar6; uVar7 = uVar7 + 1) {
    FUN_1402b2448(local_148,&local_2e0);
    FUN_1402b3080(param_1,local_148);
    FUN_1402b12f8(local_148);
  }
  if ((iStack_2dc != 0) || (local_2a8 < local_2a4)) {
    FUN_140214a5a(&local_70,plVar2);
    local_a8 = 0x5c000002be;
    local_a0 = "indowFlags_NoDecoration";
    local_98 = "Event::Init(FileCoder &)";
    FUN_14029295e(&local_90);
    local_330 = "rectory not empty";
    local_328 = 0x2f;
    FUN_1402928d9(local_148,&local_330,&local_90,&local_70);
    FUN_1402929dc(local_5e0,local_148);
                    /* WARNING: Subroutine does not return */
    FUN_14047ea80(local_5e0,&DAT_1405b7880);
  }
  FUN_14028453c(&local_2e0);
  puVar9 = &local_2e0;
  FUN_14027c19e(plVar1,puVar9);
  if (7 < local_2c8) {
    puVar9 = (undefined4 *)CONCAT44(iStack_2dc,local_2e0);
  }
  FUN_140215958(&DAT_140629048,puVar9,local_2d0);
  FUN_14021331c(&local_2e0);
  local_50 = FUN_140289b16(&local_4b8);
  lVar10 = *param_1;
  lVar3 = param_1[1];
  local_a8 = (lVar3 - lVar10 >> 5) * -0x3333333333333333;
  if (local_a8 - (ulonglong)local_50 != 0) {
    FUN_140214a5a(local_148,plVar1);
    local_90 = 0x77000002c4;
    local_88 = "indowFlags_NoDecoration";
    local_80 = "Event::Init(FileCoder &)";
    FUN_14029295e(&local_70);
    local_320 = L"of [{}]";
    local_318 = 0x4b;
    FUN_1402b2c77(&local_2e0,&local_320,&local_70,local_148,&local_a8,&local_50);
    FUN_1402929dc(local_5a8,&local_2e0);
                    /* WARNING: Subroutine does not return */
    FUN_14047ea80(local_5a8,&DAT_1405b7880);
  }
  local_4c[0] = 0;
  iVar8 = 0;
  while (lVar10 != lVar3) {
    iVar8 = iVar8 + 1;
    local_4c[0] = iVar8;
    cVar4 = FUN_1402b2d1e(lVar10,&local_4c8);
    lVar10 = lVar10 + 0xa0;
    if (cVar4 == '\0') {
      local_70 = 0x4c000002cb;
      local_68 = "indowFlags_NoDecoration";
      local_60 = "Event::Init(FileCoder &)";
      FUN_140283ef0(local_148);
      local_310 = "t (no bounds)";
      local_308 = 0x20;
      FUN_14029d083(&local_2e0,&local_310,local_148,local_4c);
      FUN_140280e42(local_570,&local_2e0);
                    /* WARNING: Subroutine does not return */
      FUN_14047ea80(local_570,&DAT_1405b7880);
    }
  }
  cVar4 = FUN_140289c02(&local_4b8);
  if (cVar4 != (char)param_1[6]) {
    FUN_140214a5a(local_148,plVar1);
    FUN_1402b2f67(&local_70,(char)param_1[6]);
    local_a8 = 0x51000002cf;
    local_a0 = "indowFlags_NoDecoration";
    local_98 = "Event::Init(FileCoder &)";
    FUN_14029295e(&local_90);
    local_300 = "EnumSystemLocalesEx";
    local_2f8 = 0x25;
    FUN_14029cfea(&local_2e0,&local_300,&local_90,&local_70,local_148);
    FUN_1402929dc(local_538,&local_2e0);
                    /* WARNING: Subroutine does not return */
    FUN_14047ea80(local_538,&DAT_1405b7880);
  }
  if ((iStack_4c4 == 0) && (local_48c <= local_490)) {
    FUN_14028453c(&local_4c8);
    return 1;
  }
  FUN_140214a5a(local_148,plVar1);
  local_90 = 0x57000002d2;
  local_88 = "indowFlags_NoDecoration";
  local_80 = "Event::Init(FileCoder &)";
  FUN_14029295e(&local_70);
  local_2f0 = &DAT_1405981d2;
  local_2e8 = 0x2b;
  FUN_1402928d9(&local_2e0,&local_2f0,&local_70,local_148);
  FUN_1402929dc(local_500,&local_2e0);
                    /* WARNING: Subroutine does not return */
  FUN_14047ea80(local_500,&DAT_1405b7880);
}

