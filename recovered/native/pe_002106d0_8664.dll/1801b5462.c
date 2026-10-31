/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801b5462 */

void FUN_1801b5462(void)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined **ppuVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 local_b8 [15];
  undefined8 local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  cVar2 = FUN_18014c2cb("Combo");
  if (cVar2 != '\0') {
    FUN_180107e9e("imgui_demo.cpp",0x5b7,"Widgets/Combo");
    thunk_FUN_18013698f("ImGuiComboFlags_PopupAlignLeft",&DAT_18041f944,1);
    FUN_180119893(0,DAT_1802bb8e0);
    FUN_180124063("Only makes a difference if the popup is larger than the combo");
    cVar2 = thunk_FUN_18013698f("ImGuiComboFlags_NoArrowButton",&DAT_18041f944,0x20);
    if (cVar2 != '\0') {
      DAT_18041f944 = DAT_18041f944 & 0xffffffbf;
    }
    cVar2 = thunk_FUN_18013698f("ImGuiComboFlags_NoPreview",&DAT_18041f944,0x40);
    if (cVar2 != '\0') {
      DAT_18041f944 = DAT_18041f944 & 0xffffff5f;
    }
    cVar2 = thunk_FUN_18013698f("ImGuiComboFlags_WidthFitPreview",&DAT_18041f944,0x80);
    if (cVar2 != '\0') {
      DAT_18041f944 = DAT_18041f944 & 0xffffffbf;
    }
    cVar2 = thunk_FUN_18013698f("ImGuiComboFlags_HeightSmall",&DAT_18041f944,2);
    if (cVar2 != '\0') {
      DAT_18041f944 = DAT_18041f944 & 0xffffffe3;
    }
    cVar2 = thunk_FUN_18013698f("ImGuiComboFlags_HeightRegular",&DAT_18041f944,4);
    if (cVar2 != '\0') {
      DAT_18041f944 = DAT_18041f944 & 0xffffffe5;
    }
    cVar2 = thunk_FUN_18013698f("ImGuiComboFlags_HeightLargest",&DAT_18041f944,0x10);
    if (cVar2 != '\0') {
      DAT_18041f944 = DAT_18041f944 & 0xfffffff1;
    }
    ppuVar5 = &PTR_DAT_180328660;
    puVar6 = local_b8;
    for (lVar3 = 0xe; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar6 = *ppuVar5;
      ppuVar5 = ppuVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    uVar1 = local_b8[(int)DAT_18041f948];
    cVar2 = FUN_180138722("combo 1",uVar1);
    if (cVar2 != '\0') {
      uVar4 = 0;
      do {
        uVar7 = (ulonglong)DAT_18041f948;
        local_40 = 0;
        cVar2 = FUN_1801391f6(local_b8[uVar4],uVar4 == uVar7,0,&local_40);
        if (cVar2 != '\0') {
          DAT_18041f948 = (uint)uVar4;
        }
        if (uVar4 == uVar7) {
          FUN_18011732f();
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 != 0xe);
      FUN_180138f6c();
    }
    cVar2 = FUN_180138722("combo 2 (w/ filter)",uVar1,DAT_18041f944);
    if (cVar2 != '\0') {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2c) < DAT_18041fa68) {
        FUN_18023d500(&DAT_18041fa68);
        if (DAT_18041fa68 == -1) {
          FUN_1800ffb82(&DAT_18041f950,&DAT_1803861e4);
          FUN_18023d710(FUN_1801bebc4);
          _Init_thread_footer(&DAT_18041fa68);
        }
      }
      cVar2 = FUN_180116a76();
      if (cVar2 != '\0') {
        FUN_180117268(0);
        DAT_18041f950 = 0;
        FUN_1800ffc10(&DAT_18041f950);
      }
      uVar4 = 0;
      FUN_180119400(0x1227,0);
      FUN_1800ffd62(&DAT_18041f950,"##Filter",DAT_1802de9b4);
      do {
        uVar7 = (ulonglong)DAT_18041f948;
        uVar1 = local_b8[uVar4];
        cVar2 = FUN_1800fff6e(&DAT_18041f950,uVar1,0);
        if (cVar2 != '\0') {
          local_40 = 0;
          cVar2 = FUN_1801391f6(uVar1,uVar4 == uVar7,0,&local_40);
          if (cVar2 != '\0') {
            DAT_18041f948 = (uint)uVar4;
          }
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 != 0xe);
      FUN_180138f6c();
    }
    FUN_1801377c5();
    FUN_1801380f1("One-liner variants");
    FUN_180124063(
                 "The Combo() function is not greatly useful apart from cases were you want to embed all options in a single strings.\nFlags above don\'t apply to this section."
                 );
    FUN_180139992("combo 3 (one-liner)",&DAT_18041fa6c,&DAT_1803861bb,0xffffffff);
    FUN_18013995e("combo 4 (array)",&DAT_180404858,local_b8,0xe,0xffffffff);
    FUN_180139005("combo 5 (function)",&DAT_18041fa70,&LAB_18013998a,local_b8,0xe,0xffffffff);
    FUN_18014d7a9();
  }
  return;
}

