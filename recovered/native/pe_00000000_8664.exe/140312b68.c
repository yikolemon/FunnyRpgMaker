/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140312b68 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_140312b68(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_38;
  undefined8 local_28;
  ulonglong local_20;
  
  lVar2 = DAT_14062a630;
  local_20 = ram0x000140613b10 ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)(DAT_14062a630 + 0x1608);
  if (*(char *)(DAT_14062a630 + 0xb2) == '\x01') {
    if (*(char *)(DAT_14062a630 + 0x2aa0) == '\x01') {
      if ((*(byte *)(DAT_14062a630 + 0x2acc) & 1) == 0) {
        *(int *)(DAT_14062a630 + 11000) = *(int *)(DAT_14062a630 + 11000) + 1;
      }
      else {
        FUN_14030f4ba((longlong)L"{}Patch file not found: {}" + 0x35,
                      *(undefined1 *)(DAT_14062a630 + 0xb1),1,*(undefined1 *)(DAT_14062a630 + 0xb3))
        ;
      }
    }
    if ((*(byte *)(lVar2 + 0x2acc) & 1) == 0) {
      *(int *)(lVar2 + 11000) = *(int *)(lVar2 + 11000) + 1;
    }
    else {
      if (lVar1 == 0) {
        puVar6 = &DAT_14057da3c;
      }
      else {
        puVar6 = *(undefined **)(lVar1 + 8);
      }
      FUN_14030f4ba("8X -> to 0x%08X\n",puVar6,param_1);
    }
  }
  *(undefined1 *)(lVar2 + 0x2aa0) = 0;
  if (*(char *)(lVar2 + 0xb3) == '\x01') {
    if (*(char *)(lVar2 + 1) == '\x01') {
      cVar3 = FUN_14032ac03();
      if (cVar3 != '\0') {
        iVar4 = *(int *)(lVar2 + 0x2aa4);
        if (iVar4 < 0x14) {
          if (lVar1 == 0) {
            FUN_140344575("u000D or \\r",&DAT_14057da3c,param_1);
          }
          else {
            FUN_140344575("u000D or \\r",*(undefined8 *)(lVar1 + 8),param_1);
            if ((*(char *)(lVar1 + 0x112) != '\x01') || (*(char *)(lVar1 + 0x10a) == '\x01')) {
              uVar5 = FUN_1403146f8();
              local_28 = CONCAT44((float)((ulonglong)*(undefined8 *)(lVar1 + 0x68) >> 0x20) +
                                  (float)((ulonglong)*(undefined8 *)(lVar1 + 0x60) >> 0x20),
                                  (float)*(undefined8 *)(lVar1 + 0x68) +
                                  (float)*(undefined8 *)(lVar1 + 0x60));
              local_38 = 0;
              local_48 = 0;
              local_40 = 0x3f800000;
              FUN_1403a40da(uVar5,lVar1 + 0x60,&local_28,0xff0000ff);
            }
          }
          iVar4 = *(int *)(lVar2 + 0x2aa4);
        }
        if (iVar4 == 0x14) {
          FUN_140344575(
                       "overed(_AllowWhenBlockedByPopup) = %d\nIsItemHovered(_AllowWhenBlockedByActiveItem) = %d\nIsItemHovered(_AllowWhenOverlappedByItem) = %d\nIsItemHovered(_AllowWhenOverlappedByWindow) = %d\nIsItemHovered(_AllowWhenDisabled) = %d\nIsItemHovered(_RectOnly) = %d\nIsItemActive() = %d\nIsItemEdited() = %d\nIsItemActivated() = %d\nIsItemDeactivated() = %d\nIsItemDeactivatedAfterEdit() = %d\nIsItemVisible() = %d\nIsItemClicked() = %d\nIsItemToggledOpen() = %d\nGetItemRectMin() = (%.1f, %.1f)\nGetItemRectMax() = (%.1f, %.1f)\nGetItemRectSize() = (%.1f, %.1f)"
                       );
        }
        thunk_FUN_140320dd0();
      }
    }
    *(int *)(lVar2 + 0x2aa4) = *(int *)(lVar2 + 0x2aa4) + 1;
  }
  if (*(code **)(lVar2 + 0x2a88) != (code *)0x0) {
    (**(code **)(lVar2 + 0x2a88))(lVar2,*(undefined8 *)(lVar2 + 0x2a90),param_1);
  }
  if (ram0x000140613b10 == (local_20 ^ (ulonglong)auStack_68)) {
    return *(undefined1 *)(lVar2 + 0xb1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_20 ^ (ulonglong)auStack_68);
}

