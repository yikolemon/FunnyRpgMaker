/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101179e3 */

undefined4 FUN_101179e3(uint param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  
  iVar2 = DAT_1039d74c;
  if ((param_1 & 0x10) == 0) {
    iVar1 = *(int *)(DAT_1039d74c + 0x14cc);
    iVar5 = *(int *)(DAT_1039d74c + 0x1e80);
    if (iVar5 == 0) {
      if ((*(char *)(DAT_1039d74c + 0xec) != '\0') && (*(char *)(iVar1 + 0xfe) == '\0')) {
        if ((*(byte *)(DAT_1039d74c + 0x1e88) & 1) == 0) {
          if (*(int *)(DAT_1039d74c + 0x1528) != 0) {
            if ((param_1 & 8) == 0) {
              return 0;
            }
            if (*(int *)(DAT_1039d74c + 0x154c) != iVar1) {
              return 0;
            }
LAB_10117bb0:
            iVar7 = DAT_1039d74c + 0x1e8c;
            iVar5 = FUN_10113192(iVar7);
            *(int *)(iVar2 + 0x1e80) = iVar5;
            FUN_10103c09(iVar5);
            cVar3 = FUN_10102cf2(iVar7,iVar5,*(undefined4 *)(iVar2 + 0x1e84));
            if ((cVar3 != '\0') && (*(char *)(iVar2 + 0xb18) == '\x01')) {
              FUN_101026ba(iVar5,iVar1);
              FUN_101034e2(iVar1,0);
            }
            iVar7 = 0;
            if (*(int *)(iVar2 + 0x1528) != iVar5) {
              return 0;
            }
            goto LAB_10117a4f;
          }
        }
        else if ((param_1 & 8) != 0) goto LAB_10117bb0;
      }
    }
    else {
      if (*(int *)(DAT_1039d74c + 0x1528) != iVar5) {
        return 0;
      }
      cVar3 = *(char *)(DAT_1039d74c + 0x153b);
      if (cVar3 == -1) {
        cVar3 = '\0';
      }
      iVar7 = (int)cVar3;
      if (*(char *)(DAT_1039d74c + 0xec + iVar7) == '\0') {
        return 0;
      }
      cVar3 = '\0';
      if (*(char *)(iVar1 + 0xfe) != '\0') {
        return 0;
      }
LAB_10117a4f:
      *(char *)(iVar2 + 0x1535) = cVar3;
      uVar4 = *(undefined4 *)(*(int *)(iVar1 + 0x140) + -4 + *(int *)(iVar1 + 0x138) * 4);
      cVar3 = FUN_1010378f(iVar7,0xbf800000);
      FUN_101036a0();
      if (cVar3 != '\0') goto LAB_10117aba;
    }
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    iVar5 = FUN_100fa6c3("#SourceExtern",0,0);
    iVar7 = -(*(byte *)(iVar2 + 0xec) ^ 1);
    FUN_10103c09(iVar5);
    FUN_101026ba(iVar5,0);
LAB_10117aba:
    if (*(char *)(iVar2 + 0x2250) == '\0') {
      FUN_10106638();
      if ((*(byte *)(iVar2 + 0x27b4) & 2) != 0) {
        pcVar6 = " (EXTERN)";
        if ((param_1 & 0x10) == 0) {
          pcVar6 = "";
        }
        FUN_100f99e6("[dragdrop] BeginDragDropSource() DragDropActive = true, source_id = 0x%08X%s\n"
                     ,iVar5,pcVar6);
      }
      *(int *)(iVar2 + 0x2268) = iVar5;
      *(undefined4 *)(iVar2 + 0x226c) = uVar4;
      *(undefined1 *)(iVar2 + 0x2250) = 1;
      *(uint *)(iVar2 + 0x2254) = param_1;
      *(int *)(iVar2 + 0x225c) = iVar7;
      if (iVar5 == *(int *)(iVar2 + 0x1528)) {
        *(undefined1 *)(iVar2 + 0x1536) = 1;
      }
    }
    *(undefined4 *)(iVar2 + 0x2258) = *(undefined4 *)(iVar2 + 4);
    *(undefined1 *)(iVar2 + 0x2251) = 1;
    if ((param_1 & 1) == 0) {
      if ((*(int *)(iVar2 + 0x22d0) == 0) || ((*(byte *)(iVar2 + 0x22c5) & 0x10) == 0)) {
        FUN_10115b98();
      }
      else {
        FUN_101179b2();
      }
    }
    uVar4 = 1;
    if ((param_1 & 0x12) == 0) {
      *(byte *)(iVar2 + 0x1e88) = *(byte *)(iVar2 + 0x1e88) & 0xfe;
    }
  }
  return uVar4;
}

