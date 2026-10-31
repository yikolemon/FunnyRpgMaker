/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100017e6 */

void FUN_100017e6(void)

{
  int iVar1;
  undefined4 **ppuVar2;
  HMODULE pHVar3;
  int iVar4;
  int ***pppiVar5;
  undefined4 ***pppuVar6;
  bool bVar7;
  undefined1 auStack_d0 [8];
  undefined4 **local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  int local_b8;
  uint uStack_b4;
  int **local_a8;
  int *local_a4;
  int local_a0;
  int **local_9c;
  int **local_98;
  int **local_94;
  uint local_84;
  undefined4 *local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  int local_64;
  undefined4 local_60;
  undefined4 **local_5c;
  undefined1 local_58 [24];
  undefined1 local_40 [24];
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = auStack_d0;
  local_18 = 0xffffffff;
  local_1c = &LAB_10004f10;
  local_20 = ExceptionList;
  ExceptionList = &local_20;
  FUN_100c522a(&local_c8,0);
  local_80 = local_c8;
  uStack_7c = uStack_c4;
  uStack_78 = uStack_c0;
  uStack_74 = uStack_bc;
  local_b8 = 0;
  uStack_b4 = 7;
  local_c8 = (undefined4 **)((uint)local_c8 & 0xffff0000);
  local_18 = 0xffffffff;
  FUN_10001134();
  local_18 = 2;
  FUN_10001c62(local_40);
  local_18 = 3;
  FUN_10001e84("nw.dll",0);
  local_18 = 4;
  FUN_10001cfb(&local_98,local_40,local_58);
  local_18 = 5;
  FUN_10002303();
  local_64 = 0;
  local_60 = 0xffff;
  pppiVar5 = &local_98;
  if (7 < local_84) {
    pppiVar5 = (int ***)local_98;
  }
  local_5c = (undefined4 **)FUN_10228d20(pppiVar5,&local_c8,3,0xffffffff);
  FUN_100025ec(local_5c,&local_c8);
  ppuVar2 = local_5c;
  uStack_c4 = FUN_10002303();
  iVar1 = local_64;
  local_c8 = ppuVar2;
  if (local_64 == 0) {
    if ((undefined4 ***)ppuVar2 != (undefined4 ***)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_1000227a("exists",&local_c8,&local_98);
    }
    DAT_1039c728 = false;
  }
  else {
    FUN_10002303();
    DAT_1039c728 = iVar1 != 1;
  }
  local_18 = 0xffffffff;
  FUN_10001f04();
  FUN_10001f04();
  if (DAT_1039c728 == '\0') {
    local_18 = 3;
    FUN_10003728(&local_80);
    local_18 = 9;
    DAT_1039c728 = FUN_10014a4a(&local_c8);
    local_18 = 0xffffffff;
    FUN_10001134();
    if (DAT_1039c728 == '\0') {
      local_18 = 3;
      pHVar3 = GetModuleHandleW((LPCWSTR)0x0);
      FUN_100c5d8c(&local_c8,pHVar3);
      local_18 = 8;
      FUN_100c5eb6(&local_98,&local_c8);
      local_18 = 0xffffffff;
      FUN_10001134();
      local_9c = local_94;
      for (; local_98 != local_9c; local_98 = local_98 + 3) {
        if ((((*(char *)(local_98 + 2) == '\x01') && (*(char *)((int)local_98 + 9) == '\0')) &&
            (*(char *)((int)local_98 + 10) == '\0')) && (DAT_1039c729 == '\0')) {
          local_a4 = *local_98;
          local_a0 = (int)local_98[1] + (int)local_a4;
          local_18 = 6;
          local_a8 = local_98;
          FUN_10001f66("WOLF RPG EDITOR");
          iVar1 = local_a0;
          local_18 = 7;
          if (local_a0 - (int)local_a4 < local_b8) {
            bVar7 = false;
          }
          else {
            pppuVar6 = &local_c8;
            if (0xf < uStack_b4) {
              pppuVar6 = (undefined4 ***)local_c8;
            }
            iVar4 = FUN_10004e4d(local_a4,local_a0,pppuVar6,local_b8);
            bVar7 = iVar4 != iVar1;
          }
          local_18 = 0xffffffff;
          DAT_1039c729 = bVar7;
          FUN_10001fee();
          local_98 = local_a8;
          if (bVar7 != false) break;
        }
      }
      local_18 = 0xffffffff;
      FUN_10004eae();
    }
  }
  FUN_10001f04();
  FUN_10001f04();
  ExceptionList = local_20;
  return;
}

