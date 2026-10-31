/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14006de10 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14006de10(int param_1,code *param_2)

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
    goto LAB_14006e097;
  }
  DAT_140f2a67c = param_1;
  FUN_14006e526(local_b8);
  hWnd = (HWND)FUN_1400d2900(FUN_14006e587);
  if (hWnd != (HWND)0x0) {
    local_70 = (LPMSG)local_a8;
    local_a8 = (undefined1  [8])
               std::
               _Func_impl_no_alloc<`bool___cdecl_StartImGuiOverlayWindow(ImGuiBackendType,void_(__cdecl*)(void))'::`1'::<lambda_3>,void>
               ::vftable;
    pHStack_a0 = hWnd;
    FUN_14004567c(local_b8,local_b8[0],(LPMSG)local_a8);
    if (local_70 != (LPMSG)0x0) {
      (**(code **)(local_70->hwnd + 8))(local_70,local_70 != (LPMSG)local_a8);
    }
    lVar4 = FUN_140081200();
    *(undefined1 *)(lVar4 + 0x56) = 1;
    SetForegroundWindow(hWnd);
    if (DAT_140f2a67c == 2) {
      cVar1 = FUN_1400d403c(hWnd);
      if (cVar1 != '\0') {
        FUN_14006e5aa(local_a8,FUN_1400d41f9);
        FUN_14004567c(local_b8,local_b8[0],(LPMSG)local_a8);
        if (local_70 != (LPMSG)0x0) {
          (**(code **)(local_70->hwnd + 8))(local_70,local_70 != (LPMSG)local_a8);
        }
        cVar1 = FUN_1400d55dc(DAT_140f2b208,DAT_140f2b210);
        if (cVar1 != '\0') {
          FUN_14006e5aa(local_a8,FUN_1400d58b3);
          FUN_14004567c(local_b8,local_b8[0],(LPMSG)local_a8);
          if (local_70 != (LPMSG)0x0) {
            (**(code **)(local_70->hwnd + 8))(local_70,local_70 != (LPMSG)local_a8);
          }
          goto LAB_14006e029;
        }
      }
    }
    else if (DAT_140f2a67c == 1) {
      cVar1 = FUN_1400d2a0c(hWnd);
      if (cVar1 != '\0') {
        FUN_14006e5aa(local_a8,FUN_1400d2ae1);
        FUN_14004567c(local_b8,local_b8[0],(LPMSG)local_a8);
        if (local_70 != (LPMSG)0x0) {
          (**(code **)(local_70->hwnd + 8))(local_70,local_70 != (LPMSG)local_a8);
        }
        cVar1 = FUN_1400d3a0b(DAT_140f2b200);
        if (cVar1 != '\0') {
          FUN_14006e5aa(local_a8,FUN_1400d3cc1);
          FUN_14004567c(local_b8,local_b8[0],(LPMSG)local_a8);
          if (local_70 != (LPMSG)0x0) {
            (**(code **)(local_70->hwnd + 8))(local_70,local_70 != (LPMSG)local_a8);
          }
          goto LAB_14006e029;
        }
      }
    }
    else {
LAB_14006e029:
      cVar1 = FUN_1400d5e10(hWnd);
      if (cVar1 != '\0') {
        FUN_14006e5aa(local_a8,FUN_1400d5fcd);
        FUN_14004567c(local_b8,local_b8[0],(LPMSG)local_a8);
        if (local_70 != (LPMSG)0x0) {
          (**(code **)(local_70->hwnd + 8))(local_70,local_70 != (LPMSG)local_a8);
        }
        if (DAT_140f2a67c == 2) {
          _DAT_140f2b1e8 = (longlong *)0x0;
          _DAT_140f2b1f0 = DAT_140f2b208;
        }
        else if (DAT_140f2a67c == 1) {
          _DAT_140f2b1f0 = 0;
          _DAT_140f2b1e8 = DAT_140f2b200;
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
code_r0x00014006e106:
          while (BVar2 = PeekMessageW((LPMSG)local_a8,(HWND)0x0,0,0,1), BVar2 != 0) {
            TranslateMessage((LPMSG)local_a8);
            DispatchMessageW((LPMSG)local_a8);
            if ((UINT)pHStack_a0 == 0x10) goto code_r0x00014006e143;
            if ((UINT)pHStack_a0 == 0x12) goto LAB_14006e26d;
          }
          if (DAT_140f2a67c == 2) {
            FUN_1400d59ab();
          }
          else if (DAT_140f2a67c == 1) {
            thunk_FUN_1400d30d4();
          }
          FUN_1400d608a();
          FUN_140082604();
          (*param_2)();
          if (DAT_140f2a67c == 1) {
            iVar3 = (**(code **)(*DAT_140f2b200 + 0x148))();
            if (-1 < iVar3) {
              FUN_14008957a();
              uVar5 = FUN_140081226();
              FUN_1400d2b24(uVar5);
              (**(code **)(*DAT_140f2b200 + 0x150))();
            }
          }
          else {
            FUN_14008957a();
          }
          lVar4 = FUN_140081200();
          if ((*(byte *)(lVar4 + 1) & 4) != 0) {
            FUN_140097489();
            FUN_140097837(0);
          }
          if ((DAT_140f2a678 != '\0') || (pHVar6 = GetForegroundWindow(), hWnd == pHVar6)) {
            FUN_14006e637(1);
            DAT_140f2a678 = '\0';
          }
          FUN_14006e637(DAT_140f17970);
          if (DAT_140f2a67c == 2) {
            (**(code **)(*DAT_140f2b218 + 0x40))();
          }
          else if (DAT_140f2a67c == 1) {
            (**(code **)(*DAT_140f2b200 + 0x88))();
          }
        } while( true );
      }
    }
  }
  uVar7 = 0;
LAB_14006e08d:
  FUN_1400455b8(local_b8);
LAB_14006e097:
  return uVar7 & 0xffffffff;
code_r0x00014006e143:
  if (local_a8 == (undefined1  [8])hWnd) {
LAB_14006e26d:
    uVar7 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    goto LAB_14006e08d;
  }
  goto code_r0x00014006e106;
}

