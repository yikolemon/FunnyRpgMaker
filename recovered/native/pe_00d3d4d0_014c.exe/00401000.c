/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00401000 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 __cdecl FUN_00401000(int param_1,undefined4 *param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined4 *******pppppppuVar4;
  BOOL BVar5;
  DWORD DVar6;
  LPCWSTR ******pppppppWVar7;
  undefined4 uVar8;
  undefined4 in_stack_fffffed0;
  LPWSTR this;
  LPWSTR pWVar9;
  LPWSTR pWVar10;
  undefined **ppuVar11;
  uint local_114;
  undefined4 ******local_fc;
  LPCWSTR *****local_f8;
  _PROCESS_INFORMATION local_f0;
  int *local_dc;
  LPCWSTR *****local_d8 [5];
  uint local_c4;
  LPCWSTR *****local_c0 [4];
  int *local_b0;
  uint local_ac;
  undefined4 ******local_a8;
  undefined **local_a4;
  uint local_94;
  HANDLE local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  _STARTUPINFOW local_70;
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = &stack0xfffffed0;
  local_18 = 0xffffffff;
  local_1c = &LAB_00406d50;
  local_20 = ExceptionList;
  ExceptionList = &local_20;
  _setlocale(0,".UTF-8");
  if (param_1 == 2) {
    iVar2 = FUN_00494040((ushort *)param_2[1],(ushort *)L"hotkey");
    if (iVar2 == 0) {
      FUN_004189fd();
      ExceptionList = local_20;
      return 0;
    }
code_r0x0040107c:
    piVar3 = FUN_0040186c((int *)&PTR_PTR_0050e908,"USAGE: INJECT_DLL_PATH EXE_PATH");
    FUN_00401bbe(piVar3);
    ExceptionList = local_20;
    return 1;
  }
  if (param_1 < 3) goto code_r0x0040107c;
  FUN_00401cfc(&local_70,param_2 + 1);
  local_18 = 0;
  pppppppWVar7 = local_c0;
  FUN_00401be7((LPWSTR)pppppppWVar7,(LPCWSTR)&local_70,in_stack_fffffed0,pppppppWVar7);
  local_18 = 0xffffffff;
  FUN_00401d7c(&local_70.cb);
  local_18 = 1;
  FUN_00401cfc(&local_70,param_2 + 2);
  local_18 = 0xb;
  FUN_00401be7((LPWSTR)local_d8,(LPCWSTR)&local_70,in_stack_fffffed0,pppppppWVar7);
  local_18 = 0xffffffff;
  FUN_00401d7c(&local_70.cb);
  local_18 = 2;
  FUN_00402538();
  iVar2 = 0;
  if (7 < local_ac) {
    pppppppWVar7 = (LPCWSTR ******)local_c0[0];
  }
  pppppppuVar4 = (undefined4 *******)FUN_00481800((LPCWSTR)pppppppWVar7,&local_70.cb,3,0xffffffff);
  FUN_0040478a(&stack0xfffffed8,(int)pppppppuVar4,(int)&local_70);
  local_a4 = FUN_00402538();
  local_a8 = pppppppuVar4;
  if (iVar2 == 0) {
    if (pppppppuVar4 != (undefined4 *******)0x0) {
      FUN_004024af((uint *)"exists",&local_a8,(LPCWSTR)local_c0);
LAB_004016bf:
      FUN_004024af((uint *)"exists",&local_a8,(LPCWSTR)local_d8);
      uVar8 = FUN_00401d7c(&local_70.dwX);
      return uVar8;
    }
code_r0x004013ef:
    piVar3 = FUN_0040186c((int *)&PTR_PTR_0050e908,"INJECT_DLL_PATH not exist: ");
    piVar3 = FUN_00401dde(piVar3,(uint *)local_c0);
    FUN_00401bbe(piVar3);
  }
  else {
    FUN_00402538();
    if (iVar2 == 1) goto code_r0x004013ef;
    FUN_00402538();
    pWVar9 = (LPWSTR)0x0;
    pppppppWVar7 = local_d8;
    if (7 < local_c4) {
      pppppppWVar7 = (LPCWSTR ******)local_d8[0];
    }
    pppppppuVar4 = (undefined4 *******)FUN_00481800((LPCWSTR)pppppppWVar7,&local_70.cb,3,0xffffffff)
    ;
    this = (LPWSTR)&stack0xfffffed8;
    FUN_0040478a(this,(int)pppppppuVar4,(int)&local_70);
    local_a4 = FUN_00402538();
    local_a8 = pppppppuVar4;
    if (pWVar9 == (LPWSTR)0x0) {
      if (pppppppuVar4 != (undefined4 *******)0x0) goto LAB_004016bf;
    }
    else {
      pWVar10 = pWVar9;
      FUN_00402538();
      if (pWVar9 != (LPWSTR)0x1) {
        local_fc = &local_a8;
        local_f8 = (LPCWSTR *****)local_d8;
        FUN_00401e8c(local_f8,local_fc);
        local_18 = 3;
        bVar1 = FUN_00418651();
        if (!bVar1) {
          local_70.lpReserved2 = (LPBYTE)0x0;
          local_70.hStdInput = (HANDLE)0x0;
          local_70.hStdOutput = (HANDLE)0x0;
          local_70.hStdError = (HANDLE)0x0;
          local_70.dwYCountChars = 0;
          local_70.dwFillAttribute = 0;
          local_70.dwFlags = 0;
          local_70.wShowWindow = 0;
          local_70.cbReserved2 = 0;
          local_70.dwY = 0;
          local_70.dwXSize = 0;
          local_70.dwYSize = 0;
          local_70.dwXCountChars = 0;
          local_70.lpReserved = (LPWSTR)0x0;
          local_70.lpDesktop = (LPWSTR)0x0;
          local_70.lpTitle = (LPWSTR)0x0;
          local_70.dwX = 0;
          local_70.cb = 0x44;
          local_f0.hProcess = (HANDLE)0x0;
          local_f0.hThread = (HANDLE)0x0;
          local_f0.dwProcessId = 0;
          local_f0.dwThreadId = 0;
          FUN_00401f26(&stack0xfffffed8,(undefined1 (*) [32])L"register hotkey");
          local_18 = 9;
          pWVar9 = (LPWSTR)&stack0xfffffed8;
          if (7 < local_114) {
            pWVar9 = pWVar10;
          }
          BVar5 = CreateProcessW((LPCWSTR)*param_2,pWVar9,_DAT_004a8090,_UNK_004a8094,_UNK_004a8098,
                                 _UNK_004a809c,(LPVOID)0x0,(LPCWSTR)0x0,&local_70,&local_f0);
          if (BVar5 == 0) {
            piVar3 = FUN_00401fcd((int *)&PTR_PTR_0050e908,
                                  (undefined1 (*) [32])L"Failed to create process: ");
            piVar3 = FUN_00401fcd(piVar3,(undefined1 (*) [32])*param_2);
            local_dc = FUN_0040186c(piVar3," | ");
            DVar6 = GetLastError();
            FUN_0040716c(&local_90,DVar6);
            local_18 = 10;
            piVar3 = (int *)FUN_00401fae(local_dc,&local_90);
            FUN_00401bbe(piVar3);
            local_18 = 0xffffffff;
            FUN_0040226e(&local_90);
          }
          local_18 = 9;
          CloseHandle(local_f0.hThread);
          CloseHandle(local_f0.hProcess);
          local_18 = 0xffffffff;
          FUN_0040226e((undefined4 *)&stack0xfffffed8);
        }
        local_70.lpReserved2 = (LPBYTE)0x0;
        local_70.hStdInput = (HANDLE)0x0;
        local_70.hStdOutput = (HANDLE)0x0;
        local_70.hStdError = (HANDLE)0x0;
        local_70.dwYCountChars = 0;
        local_70.dwFillAttribute = 0;
        local_70.dwFlags = 0;
        local_70.wShowWindow = 0;
        local_70.cbReserved2 = 0;
        local_70.dwY = 0;
        local_70.dwXSize = 0;
        local_70.dwYSize = 0;
        local_70.dwXCountChars = 0;
        local_70.lpReserved = (LPWSTR)0x0;
        local_70.lpDesktop = (LPWSTR)0x0;
        local_70.lpTitle = (LPWSTR)0x0;
        local_70.dwX = 0;
        local_70.cb = 0x44;
        local_90 = (HANDLE)0x0;
        uStack_8c = 0;
        uStack_88 = 0;
        uStack_84 = 0;
        if (local_ac < 8) {
          local_c0[0] = (LPCWSTR *****)local_c0;
        }
        local_18 = 3;
        FUN_00404b0d(&stack0xfffffed8,(LPCWSTR)local_c0[0],local_b0);
        local_18 = 5;
        if (0xf < local_114) {
          this = pWVar10;
        }
        if (7 < local_94) {
          local_fc = local_a8;
        }
        if (7 < local_c4) {
          local_f8 = local_d8[0];
        }
        iVar2 = FUN_0041b50f(local_f8,0,0,0,0,0,0,local_fc,&local_70,&local_90,this,
                             CreateProcessW_exref);
        local_18 = 0xffffffff;
        FUN_0040230a((int *)&stack0xfffffed8);
        ppuVar11 = std::_Func_impl_no_alloc<`wmain'::`1'::<lambda_0>,void>::vftable;
        local_18 = 8;
        FUN_00402372(&local_f0,(int)&stack0xfffffed8);
        local_18 = 0xffffffff;
        if (&stack0x00000000 != (undefined1 *)0x128) {
          (*(code *)ppuVar11[4])(0);
        }
        local_18 = 6;
        if ((iVar2 == 0) || (uVar8 = 0, local_90 == (HANDLE)0x0)) {
          piVar3 = FUN_00401fcd((int *)&PTR_PTR_0050e908,
                                (undefined1 (*) [32])L"Unable to launch process: ");
          piVar3 = FUN_00401dde(piVar3,(uint *)local_d8);
          piVar3 = FUN_0040186c(piVar3," | ");
          piVar3 = FUN_00401dde(piVar3,(uint *)local_c0);
          piVar3 = FUN_0040186c(piVar3," | ");
          DVar6 = GetLastError();
          FUN_0040716c((undefined4 *)&stack0xfffffed8,DVar6);
          local_18 = 7;
          piVar3 = (int *)FUN_00401fae(piVar3,(undefined4 *)&stack0xfffffed8);
          FUN_00401bbe(piVar3);
          local_18 = 0xffffffff;
          FUN_0040226e((undefined4 *)&stack0xfffffed8);
          local_18 = 6;
          TerminateProcess(local_90,0);
          uVar8 = 0x65;
        }
        local_18 = 0xffffffff;
        FUN_00402400((int *)&local_f0);
        FUN_00401d7c(&local_a8);
        goto code_r0x00401450;
      }
    }
    piVar3 = FUN_0040186c((int *)&PTR_PTR_0050e908,"EXE_PATH not exist: ");
    piVar3 = FUN_00401dde(piVar3,(uint *)local_d8);
    FUN_00401bbe(piVar3);
  }
  uVar8 = 1;
code_r0x00401450:
  local_18 = 0xffffffff;
  FUN_00401d7c(local_d8);
  FUN_00401d7c(local_c0);
  ExceptionList = local_20;
  return uVar8;
}

