/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100bf67a */

void FUN_100bf67a(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  HMODULE pHVar8;
  HANDLE hProcess;
  BOOL BVar9;
  undefined8 *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  undefined8 *local_94;
  undefined8 *local_90;
  uint local_88;
  uint *local_84;
  uint *local_80;
  uint *local_7c;
  int local_6c;
  undefined4 local_68;
  undefined4 local_64;
  uint local_60;
  uint *local_5c;
  uint *local_58;
  int *local_54;
  SIZE_T local_50;
  uint local_4c;
  int local_48;
  int local_44;
  uint *local_40;
  uint local_3c;
  SIZE_T local_38;
  int local_34;
  undefined8 *local_30;
  uint local_2c;
  undefined8 *local_28;
  uint *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_94;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c1df0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  pHVar8 = GetModuleHandleW((LPCWSTR)0x0);
  FUN_100c5d8c(&local_84,pHVar8);
  local_14 = 0;
  FUN_100c5eb6(&local_94,&local_84);
  local_14 = 0xffffffff;
  FUN_10001134();
  local_84 = (uint *)0x0;
  local_80 = (uint *)0x0;
  local_7c = (uint *)0x0;
  local_6c = 0;
  local_68 = 0;
  local_64 = 0;
  local_30 = local_90;
  for (; local_94 != local_30; local_94 = (undefined8 *)((int)local_94 + 0xc)) {
    if ((*(char *)(local_94 + 1) == '\x01') && (*(char *)((int)local_94 + 9) == '\x01')) {
      local_38 = *(undefined4 *)((int)local_94 + 4);
      local_14 = 3;
      local_28 = local_94;
      local_24 = (uint *)FUN_102332c0(local_38);
      local_58 = (uint *)0x0;
      local_54 = (int *)0x0;
      local_14 = 3;
      FUN_100bf476(local_24,local_50 & 0xff);
      local_14 = 5;
      local_50 = 0;
      local_24 = *(uint **)local_28;
      local_38 = *(SIZE_T *)((int)local_28 + 4);
      local_40 = local_58;
      hProcess = GetCurrentProcess();
      BVar9 = ReadProcessMemory(hProcess,local_24,local_40,local_38,&local_50);
      if ((BVar9 != 0) && (local_50 == *(uint *)((int)local_28 + 4))) {
        if (local_80 == local_7c) {
          FUN_10064e1a(local_80,local_28);
        }
        else {
          local_80[2] = *(uint *)(local_28 + 1);
          *(undefined8 *)local_80 = *local_28;
          local_80 = local_80 + 3;
        }
        FUN_1009af4c(&local_58);
      }
      piVar6 = local_54;
      local_14 = 0xffffffff;
      local_94 = local_28;
      if (local_54 != (int *)0x0) {
        LOCK();
        piVar1 = local_54 + 1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*local_54)();
          LOCK();
          piVar1 = piVar6 + 2;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          local_94 = local_28;
          if (*piVar1 == 0) {
            (**(code **)(*piVar6 + 4))();
            local_94 = local_28;
          }
        }
      }
    }
  }
  local_5c = local_80;
  if (local_84 != local_80) {
    local_60 = DAT_1039ca50;
    local_30 = (undefined8 *)(((int)local_80 - (int)local_84 >> 2) * -0x55555555);
    local_34 = local_6c;
    local_24 = local_84 + 1;
    puVar11 = local_84;
    do {
      uVar13 = *puVar11;
      local_38 = puVar11[1] + uVar13;
      uVar2 = DAT_1039ca50;
      uVar7 = local_60;
      if (uVar13 < local_38) {
LAB_100bf89c:
        puVar10 = (undefined8 *)0x0;
        puVar12 = local_24;
        do {
          uVar2 = puVar12[-1];
          local_40 = puVar11;
          if ((uVar2 <= uVar13) && (uVar13 + 0x34 <= uVar2 + *puVar12)) {
            iVar3 = *(int *)(local_6c + (int)puVar10 * 8);
            if (iVar3 != 0) {
              local_2c = iVar3 + (uVar13 - uVar2);
              local_28 = *(undefined8 **)(local_2c + 8);
              puVar10 = (undefined8 *)0x0;
              puVar12 = local_24;
              goto code_r0x100bf8fa;
            }
            break;
          }
          puVar10 = (undefined8 *)((int)puVar10 + 1);
          puVar12 = puVar12 + 3;
        } while (local_30 != puVar10);
        goto LAB_100bf8be;
      }
LAB_100bfac3:
      local_60 = uVar7;
      DAT_1039ca50 = uVar2;
      puVar11 = puVar11 + 3;
    } while (puVar11 != local_80);
  }
  local_14 = 0xffffffff;
  FUN_10042460();
  FUN_10004eae();
  FUN_10004eae();
  ExceptionList = local_1c;
  return;
  while( true ) {
    puVar10 = (undefined8 *)((int)puVar10 + 1);
    puVar12 = puVar12 + 3;
    if (local_30 == puVar10) break;
code_r0x100bf8fa:
    puVar4 = (undefined8 *)puVar12[-1];
    if ((puVar4 <= local_28) && ((int)local_28 + 0x34U <= *puVar12 + (int)puVar4)) {
      if (local_2c == (int)local_28 + (*(int *)(local_6c + (int)puVar10 * 8) - (int)puVar4)) {
        local_3c = *(uint *)(local_2c + 0xc);
        puVar10 = (undefined8 *)0x0;
        puVar12 = local_24;
        goto code_r0x100bf93b;
      }
      break;
    }
  }
  goto LAB_100bf8be;
  while( true ) {
    puVar10 = (undefined8 *)((int)puVar10 + 1);
    puVar12 = puVar12 + 3;
    if (local_30 == puVar10) break;
code_r0x100bf93b:
    uVar2 = puVar12[-1];
    if ((uVar2 <= local_3c) && (local_3c + 0x34 <= *puVar12 + uVar2)) {
      iVar3 = *(int *)(local_6c + (int)puVar10 * 8);
      if (iVar3 != 0) {
        local_48 = iVar3 + (local_3c - uVar2);
        local_4c = *(uint *)(local_48 + 0xc);
        puVar10 = (undefined8 *)0x0;
        puVar12 = local_24;
        goto code_r0x100bf985;
      }
      break;
    }
  }
  goto LAB_100bf8be;
  while( true ) {
    puVar10 = (undefined8 *)((int)puVar10 + 1);
    puVar12 = puVar12 + 3;
    if (local_30 == puVar10) break;
code_r0x100bf985:
    uVar2 = puVar12[-1];
    if ((uVar2 <= local_4c) && (local_4c + 0x34 <= *puVar12 + uVar2)) {
      if (local_48 == (local_4c - uVar2) + *(int *)(local_6c + (int)puVar10 * 8)) {
        uVar5 = *(uint *)(local_2c + 0x10);
        puVar10 = (undefined8 *)0x0;
        puVar12 = local_24;
        goto code_r0x100bf9c7;
      }
      break;
    }
  }
  goto LAB_100bf8be;
  while( true ) {
    puVar10 = (undefined8 *)((int)puVar10 + 1);
    puVar12 = puVar12 + 3;
    if (local_30 == puVar10) break;
code_r0x100bf9c7:
    uVar2 = puVar12[-1];
    if ((uVar2 <= uVar5) && (local_2c = uVar2, uVar5 + 0x34 <= *puVar12 + uVar2)) {
      iVar3 = *(int *)(local_6c + (int)puVar10 * 8);
      if (iVar3 != 0) {
        local_44 = iVar3 + (uVar5 - uVar2);
        local_2c = *(uint *)(local_44 + 0x10);
        local_88 = local_2c + 0x34;
        puVar10 = (undefined8 *)0x0;
        puVar12 = local_24;
        goto code_r0x100bfa22;
      }
      break;
    }
  }
  goto LAB_100bf8be;
  while( true ) {
    puVar10 = (undefined8 *)((int)puVar10 + 1);
    puVar12 = puVar12 + 3;
    if (local_30 == puVar10) break;
code_r0x100bfa22:
    uVar2 = puVar12[-1];
    if ((uVar2 <= local_2c) && (local_88 <= *puVar12 + uVar2)) {
      if ((((local_44 == (local_2c - uVar2) + *(int *)(local_6c + (int)puVar10 * 8)) &&
           ((((local_28 == *(undefined8 **)(local_48 + 8) && (local_3c == local_4c)) &&
             (local_28 == *(undefined8 **)(local_44 + 8))) &&
            ((local_3c == *(uint *)(local_44 + 0xc) && (uVar5 == *(uint *)(local_48 + 0x10))))))) &&
          (uVar13 != 0)) && (uVar2 = uVar13, uVar7 = uVar13, uVar5 == local_2c)) goto LAB_100bfac3;
      break;
    }
  }
LAB_100bf8be:
  uVar2 = DAT_1039ca50;
  uVar7 = local_60;
  if ((local_60 != 0) || (uVar13 = uVar13 + 4, local_38 <= uVar13)) goto LAB_100bfac3;
  goto LAB_100bf89c;
}

