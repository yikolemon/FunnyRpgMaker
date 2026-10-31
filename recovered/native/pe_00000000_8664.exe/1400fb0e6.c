/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400fb0e6 */

void FUN_1400fb0e6(void)

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
  cVar2 = FUN_1400c51fb("Combo");
  if (cVar2 != '\0') {
    FUN_1400811b6("imgui_demo.cpp",0x5b7,"Widgets/Combo");
    thunk_FUN_1400af8bf("ImGuiComboFlags_PopupAlignLeft",&DAT_140f31094,1);
    FUN_140092bab(0,DAT_1401c86a4);
    FUN_14009cf92("Only makes a difference if the popup is larger than the combo");
    cVar2 = thunk_FUN_1400af8bf("ImGuiComboFlags_NoArrowButton",&DAT_140f31094,0x20);
    if (cVar2 != '\0') {
      DAT_140f31094 = DAT_140f31094 & 0xffffffbf;
    }
    cVar2 = thunk_FUN_1400af8bf("ImGuiComboFlags_NoPreview",&DAT_140f31094,0x40);
    if (cVar2 != '\0') {
      DAT_140f31094 = DAT_140f31094 & 0xffffff5f;
    }
    cVar2 = thunk_FUN_1400af8bf("ImGuiComboFlags_WidthFitPreview",&DAT_140f31094,0x80);
    if (cVar2 != '\0') {
      DAT_140f31094 = DAT_140f31094 & 0xffffffbf;
    }
    cVar2 = thunk_FUN_1400af8bf("ImGuiComboFlags_HeightSmall",&DAT_140f31094,2);
    if (cVar2 != '\0') {
      DAT_140f31094 = DAT_140f31094 & 0xffffffe3;
    }
    cVar2 = thunk_FUN_1400af8bf("ImGuiComboFlags_HeightRegular",&DAT_140f31094,4);
    if (cVar2 != '\0') {
      DAT_140f31094 = DAT_140f31094 & 0xffffffe5;
    }
    cVar2 = thunk_FUN_1400af8bf("ImGuiComboFlags_HeightLargest",&DAT_140f31094,0x10);
    if (cVar2 != '\0') {
      DAT_140f31094 = DAT_140f31094 & 0xfffffff1;
    }
    ppuVar5 = &PTR_DAT_140e8c9f0;
    puVar6 = local_b8;
    for (lVar3 = 0xe; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar6 = *ppuVar5;
      ppuVar5 = ppuVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    uVar1 = local_b8[(int)DAT_140f31098];
    cVar2 = FUN_1400b1652("combo 1",uVar1);
    if (cVar2 != '\0') {
      uVar4 = 0;
      do {
        uVar7 = (ulonglong)DAT_140f31098;
        local_40 = 0;
        cVar2 = FUN_1400b2126(local_b8[uVar4],uVar4 == uVar7,0,&local_40);
        if (cVar2 != '\0') {
          DAT_140f31098 = (uint)uVar4;
        }
        if (uVar4 == uVar7) {
          FUN_140090647();
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 != 0xe);
      FUN_1400b1e9c();
    }
    cVar2 = FUN_1400b1652("combo 2 (w/ filter)",uVar1,DAT_140f31094);
    if (cVar2 != '\0') {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2c) < DAT_140f311b8) {
        FUN_140188840(&DAT_140f311b8);
        if (DAT_140f311b8 == -1) {
          FUN_140078e3e(&DAT_140f310a0,&DAT_140edcdbf);
          FUN_140188b50(FUN_140104848);
          _Init_thread_footer(&DAT_140f311b8);
        }
      }
      cVar2 = FUN_14008fd8e();
      if (cVar2 != '\0') {
        FUN_140090580(0);
        DAT_140f310a0 = 0;
        FUN_140078ecc(&DAT_140f310a0);
      }
      uVar4 = 0;
      FUN_140092718(0x1227,0);
      FUN_14007901e(&DAT_140f310a0,"##Filter",DAT_140211724);
      do {
        uVar7 = (ulonglong)DAT_140f31098;
        uVar1 = local_b8[uVar4];
        cVar2 = FUN_14007922a(&DAT_140f310a0,uVar1,0);
        if (cVar2 != '\0') {
          local_40 = 0;
          cVar2 = FUN_1400b2126(uVar1,uVar4 == uVar7,0,&local_40);
          if (cVar2 != '\0') {
            DAT_140f31098 = (uint)uVar4;
          }
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 != 0xe);
      FUN_1400b1e9c();
    }
    FUN_1400b06f5();
    FUN_1400b1021("One-liner variants");
    FUN_14009cf92(
                 "The Combo() function is not greatly useful apart from cases were you want to embed all options in a single strings.\nFlags above don\'t apply to this section."
                 );
    FUN_1400b28c2("combo 3 (one-liner)",&DAT_140f311bc,&DAT_140edcd96,0xffffffff);
    FUN_1400b288e("combo 4 (array)",&DAT_140f17ff8,local_b8,0xe,0xffffffff);
    FUN_1400b1f35("combo 5 (function)",&DAT_140f311c0,&LAB_1400b28ba,local_b8,0xe,0xffffffff);
    FUN_1400c66d9();
  }
  return;
}

