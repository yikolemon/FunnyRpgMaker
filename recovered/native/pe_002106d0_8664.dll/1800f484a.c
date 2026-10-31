/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f484a */

void FUN_1800f484a(longlong param_1,ulonglong param_2)

{
  ulonglong **ppuVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  ulonglong *puVar4;
  int iVar5;
  uint uVar6;
  ulonglong *puVar7;
  ulonglong *puVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong local_88;
  ulonglong local_80;
  ulonglong *local_78 [3];
  ulonglong *local_60;
  ulonglong *local_58;
  ulonglong *local_50;
  ulonglong *local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  FUN_1800f514a(local_78,&local_88);
  puVar7 = local_78[0];
  local_78[0] = (ulonglong *)0x0;
  puVar2 = *(undefined8 **)(param_1 + 0xf8);
  *(ulonglong **)(param_1 + 0xf8) = puVar7;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  FUN_1800f4e94(local_78);
  if (param_2 == 0) {
    iVar5 = FUN_18023e530();
    if (iVar5 == 0) {
      param_2 = 1;
    }
    else {
      uVar6 = FUN_18023e530();
      param_2 = (ulonglong)uVar6;
    }
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_2;
  puVar7 = SUB168(auVar3 * ZEXT816(0x18),0);
  local_58 = puVar7 + 1;
  if ((ulonglong *)0xfffffffffffffff7 < puVar7) {
    local_58 = (ulonglong *)0xffffffffffffffff;
  }
  *(ulonglong *)(param_1 + 0x130) = param_2;
  if (SUB168(auVar3 * ZEXT816(0x18),8) != 0) {
    local_58 = (ulonglong *)0xffffffffffffffff;
  }
  puVar8 = (ulonglong *)thunk_FUN_180239630();
  *puVar8 = param_2;
  local_50 = puVar8;
  if (param_2 != 0) {
    puVar9 = (ulonglong *)0x0;
    do {
      local_48 = puVar9;
      FUN_1800f542a((longlong)puVar8 + (longlong)(puVar9 + 1));
      puVar9 = local_48 + 3;
    } while (puVar7 != puVar9);
  }
  ppuVar1 = (ulonglong **)(param_1 + 0x138);
  local_78[0] = local_50 + 1;
  if (ppuVar1 != local_78) {
    local_78[0] = (ulonglong *)0x0;
    puVar7 = *ppuVar1;
    *ppuVar1 = local_50 + 1;
    if (puVar7 != (ulonglong *)0x0) {
      local_58 = puVar7 + -1;
      local_50 = (ulonglong *)puVar7[-1];
      puVar8 = (ulonglong *)((longlong)local_50 * 0x18);
      local_60 = puVar7;
      puVar4 = puVar8;
      puVar9 = local_48;
      puVar10 = local_50;
      while (local_48 = puVar4, puVar10 != (ulonglong *)0x0) {
        FUN_1800f5398((longlong)puVar7 + (longlong)(local_48 + -3));
        puVar10 = local_48 + -3;
        puVar4 = puVar10;
        puVar9 = local_48;
      }
      local_48 = puVar9;
      thunk_FUN_1802464a0(local_58,puVar8 + 1);
    }
  }
  puVar7 = local_78[0];
  if (local_78[0] != (ulonglong *)0x0) {
    local_58 = local_78[0] + -1;
    local_50 = (ulonglong *)local_78[0][-1];
    puVar8 = (ulonglong *)((longlong)local_50 * 0x18);
    puVar4 = puVar8;
    local_60 = local_78[0];
    puVar9 = local_48;
    puVar10 = local_50;
    while (local_48 = puVar4, puVar10 != (ulonglong *)0x0) {
      FUN_1800f5398((longlong)puVar7 + (longlong)(local_48 + -3));
      puVar10 = local_48 + -3;
      puVar4 = puVar10;
      puVar9 = local_48;
    }
    local_48 = puVar9;
    thunk_FUN_1802464a0(local_58,puVar8 + 1);
  }
  local_48 = (ulonglong *)param_1;
  FUN_180044980(param_1);
  puVar7 = local_48;
  *(undefined8 *)((longlong)local_48 + 0x128) = *(undefined8 *)((longlong)local_48 + 0x130);
  FUN_18023d6e0(local_48);
  if (*(longlong *)((longlong)puVar7 + 0x130) != 0) {
    lVar11 = 0;
    uVar12 = 0;
    do {
      local_88 = (longlong)puVar7;
      local_80 = uVar12;
      FUN_1800f5218(local_78,&local_88);
      FUN_1800f530a((longlong)*ppuVar1 + lVar11,local_78);
      FUN_1800f5398(local_78);
      uVar12 = uVar12 + 1;
      lVar11 = lVar11 + 0x18;
    } while (uVar12 < *(ulonglong *)((longlong)puVar7 + 0x130));
  }
  return;
}

