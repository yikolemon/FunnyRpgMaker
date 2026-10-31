/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180187ca0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_180187ca0(int param_1,code *param_2)

{
  char cVar1;
  BOOL BVar2;
  int iVar3;
  HWND hWnd;
  longlong lVar4;
  undefined8 uVar5;
  HWND pHVar6;
  ulonglong uVar7;
  undefined8 local_b8 [2];
  undefined1 local_a8 [8];
  HWND pHStack_a0;
  WPARAM local_98;
  LPARAM LStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  LPMSG local_70;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  if (param_1 == 0) {
    uVar7 = 0;
    goto LAB_180187f27;
  }
  DAT_18041989c = param_1;
  FUN_1801883b6(local_b8);
  hWnd = (HWND)FUN_18019fbf4(FUN_180188417);
  if (hWnd != (HWND)0x0) {
    local_70 = (LPMSG)local_a8;
    local_a8 = (undefined1  [8])
               std::
               _Func_impl_no_alloc<`bool___cdecl_StartImGuiOverlayWindow(ImGuiBackendType,void_(__cdecl*)(void))'::`1'::<lambda_3>,void>
               ::vftable;
    pHStack_a0 = hWnd;
    FUN_18006c814(local_b8,local_b8[0],(LPMSG)local_a8);
    if (local_70 != (LPMSG)0x0) {
      (**(code **)(local_70->hwnd + 8))(local_70,local_70 != (LPMSG)local_a8);
    }
    lVar4 = FUN_180107ee8();
    *(undefined1 *)(lVar4 + 0x56) = 1;
    SetForegroundWindow(hWnd);
    if (DAT_18041989c == 2) {
      cVar1 = FUN_1801c7888(hWnd);
      if (cVar1 != '\0') {
        FUN_18018843a(local_a8,FUN_1801c7a45);
        FUN_18006c814(local_b8,local_b8[0],(LPMSG)local_a8);
        if (local_70 != (LPMSG)0x0) {
          (**(code **)(local_70->hwnd + 8))(local_70,local_70 != (LPMSG)local_a8);
        }
        cVar1 = FUN_1801c8fcc(DAT_180420d28,DAT_180420d30);
        if (cVar1 != '\0') {
          FUN_18018843a(local_a8,FUN_1801c92a3);
          FUN_18006c814(local_b8,local_b8[0],(LPMSG)local_a8);
          if (local_70 != (LPMSG)0x0) {
            (**(code **)(local_70->hwnd + 8))(local_70,local_70 != (LPMSG)local_a8);
          }
          goto LAB_180187eb9;
        }
      }
    }
    else if (DAT_18041989c == 1) {
      cVar1 = FUN_1801c61e8(hWnd);
      if (cVar1 != '\0') {
        FUN_18018843a(local_a8,FUN_1801c62bd);
        FUN_18006c814(local_b8,local_b8[0],(LPMSG)local_a8);
        if (local_70 != (LPMSG)0x0) {
          (**(code **)(local_70->hwnd + 8))(local_70,local_70 != (LPMSG)local_a8);
        }
        cVar1 = FUN_1801c7258(DAT_180420d20);
        if (cVar1 != '\0') {
          FUN_18018843a(local_a8,FUN_1801c750e);
          FUN_18006c814(local_b8,local_b8[0],(LPMSG)local_a8);
          if (local_70 != (LPMSG)0x0) {
            (**(code **)(local_70->hwnd + 8))(local_70,local_70 != (LPMSG)local_a8);
          }
          goto LAB_180187eb9;
        }
      }
    }
    else {
LAB_180187eb9:
      cVar1 = FUN_18019fd00(hWnd);
      if (cVar1 != '\0') {
        FUN_18018843a(local_a8,FUN_18019febd);
        FUN_18006c814(local_b8,local_b8[0],(LPMSG)local_a8);
        if (local_70 != (LPMSG)0x0) {
          (**(code **)(local_70->hwnd + 8))(local_70,local_70 != (LPMSG)local_a8);
        }
        if (DAT_18041989c == 2) {
          _DAT_18041f140 = (longlong *)0x0;
          _DAT_18041f148 = DAT_180420d28;
        }
        else if (DAT_18041989c == 1) {
          _DAT_18041f148 = 0;
          _DAT_18041f140 = DAT_180420d20;
        }
        ShowWindow(hWnd,5);
        do {
          local_88._0_4_ = 0;
          local_88._4_4_ = 0;
          uStack_80._0_4_ = 0;
          uStack_80._4_4_ = 0;
          local_98 = 0;
          LStack_90 = 0;
          local_a8 = (undefined1  [8])0x0;
          pHStack_a0 = (HWND)0x0;
code_r0x000180187f96:
          while (BVar2 = PeekMessageW((LPMSG)local_a8,(HWND)0x0,0,0,1), BVar2 != 0) {
            TranslateMessage((LPMSG)local_a8);
            DispatchMessageW((LPMSG)local_a8);
            if ((UINT)pHStack_a0 == 0x10) goto code_r0x000180187fd3;
            if ((UINT)pHStack_a0 == 0x12) goto LAB_1801880fd;
          }
          if (DAT_18041989c == 2) {
            FUN_1801c939b();
          }
          else if (DAT_18041989c == 1) {
            thunk_FUN_1801c68b0();
          }
          FUN_18019ff7a();
          FUN_1801092ec();
          (*param_2)();
          if (DAT_18041989c == 1) {
            iVar3 = (**(code **)(*DAT_180420d20 + 0x148))();
            if (-1 < iVar3) {
              FUN_180110262();
              uVar5 = FUN_180107f0e();
              FUN_1801c6300(uVar5);
              (**(code **)(*DAT_180420d20 + 0x150))();
            }
          }
          else {
            FUN_180110262();
          }
          lVar4 = FUN_180107ee8();
          if ((*(byte *)(lVar4 + 1) & 4) != 0) {
            FUN_18011e1cd();
            FUN_18011e57b(0);
          }
          if ((DAT_180419898 != '\0') || (pHVar6 = GetForegroundWindow(), hWnd == pHVar6)) {
            FUN_1801884c7(1);
            DAT_180419898 = '\0';
          }
          FUN_1801884c7(DAT_180404370);
          if (DAT_18041989c == 2) {
            (**(code **)(*DAT_180420d38 + 0x40))();
          }
          else if (DAT_18041989c == 1) {
            (**(code **)(*DAT_180420d20 + 0x88))();
          }
        } while( true );
      }
    }
  }
  uVar7 = 0;
LAB_180187f1d:
  FUN_18006b556(local_b8);
LAB_180187f27:
  return uVar7 & 0xffffffff;
code_r0x000180187fd3:
  if (local_a8 == (undefined1  [8])hWnd) {
LAB_1801880fd:
    uVar7 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    goto LAB_180187f1d;
  }
  goto code_r0x000180187f96;
}

