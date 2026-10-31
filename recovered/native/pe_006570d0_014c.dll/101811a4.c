/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101811a4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_101811a4(int param_1,code *param_2)

{
  char cVar1;
  int iVar2;
  BOOL BVar3;
  HWND pHVar4;
  undefined4 uVar5;
  int *unaff_FS_OFFSET;
  undefined1 auStack_70 [12];
  HWND local_64;
  tagMSG local_60;
  tagMSG *local_3c;
  undefined4 local_34;
  tagMSG *local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = auStack_70;
  local_18 = 0xffffffff;
  local_1c = &LAB_10185fc0;
  local_20 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_20;
  if (param_1 == 0) {
    uVar5 = 0;
    goto code_r0x10181648;
  }
  DAT_1039dc14 = param_1;
  FUN_101817b4();
  local_18 = 0;
  local_64 = (HWND)FUN_101985cc(&LAB_10181831);
  uVar5 = 0;
  if (local_64 != (HWND)0x0) {
    local_3c = &local_60;
    local_60.hwnd =
         (HWND)std::
               _Func_impl_no_alloc<`bool___cdecl_StartImGuiOverlayWindow(ImGuiBackendType,void_(__cdecl*)(void))'::`1'::<lambda_3>,void>
               ::vftable;
    local_18 = 2;
    local_60.message = (UINT)local_64;
    local_2c = local_3c;
    FUN_1006c8f2(local_34,&local_60);
    local_18 = 0xffffffff;
    if (local_3c != (tagMSG *)0x0) {
      (*(code *)local_3c->hwnd[4].unused)(local_3c != &local_60);
    }
    local_18 = 0;
    iVar2 = FUN_1010330d();
    *(undefined1 *)(iVar2 + 0x42) = 1;
    SetForegroundWindow(local_64);
    if (DAT_1039dc14 == 2) {
      cVar1 = FUN_101be2b8(local_64);
      if (cVar1 != '\0') {
        FUN_1018184c(FUN_101be41d);
        local_18 = 5;
        FUN_1006c8f2(local_34,&local_60);
        local_18 = 0xffffffff;
        if (local_3c != (tagMSG *)0x0) {
          (*(code *)local_3c->hwnd[4].unused)(local_3c != &local_60);
        }
        local_18 = 0;
        cVar1 = FUN_101bf60d(DAT_103a4d24,DAT_103a4d28);
        if (cVar1 != '\0') {
          FUN_1018184c(FUN_101bf842);
          local_18 = 6;
          FUN_1006c8f2(local_34,&local_60);
          local_18 = 0xffffffff;
          if (local_3c != (tagMSG *)0x0) {
            (*(code *)local_3c->hwnd[4].unused)(local_3c != &local_60);
          }
          goto code_r0x1018142e;
        }
      }
    }
    else if (DAT_1039dc14 == 1) {
      cVar1 = FUN_101bd00c(local_64);
      if (cVar1 != '\0') {
        FUN_1018184c(FUN_101bd096);
        local_18 = 3;
        FUN_1006c8f2(local_34,&local_60);
        local_18 = 0xffffffff;
        if (local_3c != (tagMSG *)0x0) {
          (*(code *)local_3c->hwnd[4].unused)(local_3c != &local_60);
        }
        local_18 = 0;
        cVar1 = FUN_101bdda8(DAT_103a4d20);
        if (cVar1 != '\0') {
          FUN_1018184c(FUN_101bdfae);
          local_18 = 4;
          FUN_1006c8f2(local_34,&local_60);
          local_18 = 0xffffffff;
          if (local_3c != (tagMSG *)0x0) {
            (*(code *)local_3c->hwnd[4].unused)(local_3c != &local_60);
          }
          goto code_r0x1018142e;
        }
      }
    }
    else {
code_r0x1018142e:
      local_18 = 0;
      cVar1 = FUN_101986a8(local_64);
      if (cVar1 != '\0') {
        FUN_1018184c(FUN_10198834);
        local_18 = 7;
        FUN_1006c8f2(local_34,&local_60);
        local_18 = 0xffffffff;
        if (local_3c != (tagMSG *)0x0) {
          (*(code *)local_3c->hwnd[4].unused)(local_3c != &local_60);
        }
        if (DAT_1039dc14 == 2) {
          _DAT_103a3388 = (int *)0x0;
          _DAT_103a338c = DAT_103a4d24;
        }
        else if (DAT_1039dc14 == 1) {
          _DAT_103a338c = 0;
          _DAT_103a3388 = DAT_103a4d20;
        }
        local_18 = 0;
        ShowWindow(local_64,5);
        do {
          local_60.time = 0;
          local_60.pt.x = 0;
          local_60.pt.y = 0;
          local_60.hwnd = (HWND)0x0;
          local_60.message = 0;
          local_60.wParam = 0;
          local_60.lParam = 0;
LAB_101814dc:
          while (BVar3 = PeekMessageW(&local_60,_DAT_102b7080,_UNK_102b7084,_UNK_102b7088,
                                      _UNK_102b708c), BVar3 != 0) {
            TranslateMessage(&local_60);
            DispatchMessageW(&local_60);
            if ((HWND)local_60.message == (HWND)0x10) goto code_r0x10181523;
            if ((HWND)local_60.message == (HWND)0x12) goto LAB_10181635;
          }
          if (DAT_1039dc14 == 2) {
            FUN_101bf949();
          }
          else if (DAT_1039dc14 == 1) {
            thunk_FUN_101bd5e3();
          }
          FUN_101988c5();
          FUN_1010462d();
          (*param_2)();
          if (DAT_1039dc14 == 1) {
            iVar2 = (**(code **)(*DAT_103a4d20 + 0xa4))(DAT_103a4d20);
            if (-1 < iVar2) {
              FUN_1010b5f6();
              uVar5 = FUN_10103334();
              FUN_101bd0cc(uVar5);
              (**(code **)(*DAT_103a4d20 + 0xa8))(DAT_103a4d20);
            }
          }
          else {
            FUN_1010b5f6();
          }
          iVar2 = FUN_1010330d();
          if ((*(byte *)(iVar2 + 1) & 4) != 0) {
            FUN_1011915d();
            FUN_101194f2(0,0);
          }
          if ((DAT_1039dc10 != '\0') || (pHVar4 = GetForegroundWindow(), local_64 == pHVar4)) {
            FUN_101818ec();
            DAT_1039dc10 = '\0';
          }
          FUN_101818ec();
          if (DAT_1039dc14 == 2) {
            (**(code **)(*DAT_103a4d2c + 0x20))(DAT_103a4d2c,1,0);
          }
          else if (DAT_1039dc14 == 1) {
            (**(code **)(*DAT_103a4d20 + 0x44))(DAT_103a4d20,0,0,0,0);
          }
        } while( true );
      }
    }
    uVar5 = 0;
  }
code_r0x10181638:
  local_18 = 0xffffffff;
  FUN_1006b59e();
code_r0x10181648:
  *unaff_FS_OFFSET = local_20;
  return uVar5;
code_r0x10181523:
  if (local_60.hwnd == local_64) {
LAB_10181635:
    uVar5 = 1;
    goto code_r0x10181638;
  }
  goto LAB_101814dc;
}

