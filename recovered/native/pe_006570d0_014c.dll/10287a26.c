/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10287a26 */

undefined4 FUN_10287a26(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  HANDLE hFile;
  BOOL BVar3;
  DWORD DVar4;
  undefined4 uVar5;
  undefined4 unaff_EDI;
  longlong lVar6;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_10;
  int local_c;
  uint local_8;
  
  __crt_seek_guard::__crt_seek_guard
            ((__crt_seek_guard *)&local_30,param_1,CONCAT44(unaff_EDI,param_3));
  if (((local_30 & local_2c) == 0xffffffff) || ((local_28 & local_24) == 0xffffffff)) {
    if (*(char *)(param_4 + 0x1c) == '\0') {
      uVar5 = 0x16;
      goto LAB_10287ba3;
    }
LAB_10287b9b:
    uVar5 = *(undefined4 *)(param_4 + 0x18);
  }
  else {
    local_c = local_1c;
    local_8 = local_20;
    if (local_1c < 0) {
LAB_10287b4a:
      lVar6 = FUN_1027938a(param_1,param_2,param_3,0);
      if (lVar6 == -1) {
        if (*(char *)(param_4 + 0x1c) != '\0') goto LAB_10287b9b;
      }
      else {
        hFile = (HANDLE)FUN_1027aa8f(param_1);
        BVar3 = SetEndOfFile(hFile);
        if (BVar3 == 0) {
          DVar4 = GetLastError();
          *(undefined1 *)(param_4 + 0x24) = 1;
          *(DWORD *)(param_4 + 0x20) = DVar4;
          uVar5 = 0xd;
          *(undefined1 *)(param_4 + 0x1c) = 1;
          *(undefined4 *)(param_4 + 0x18) = 0xd;
          goto LAB_10287ba3;
        }
      }
    }
    else if ((local_1c < 1) && (local_20 == 0)) {
      if ((local_1c < 1) && (local_1c < 0)) goto LAB_10287b4a;
    }
    else {
      iVar1 = FUN_10275d90(0x1000,1);
      if (iVar1 == 0) {
        uVar5 = 0xc;
        *(undefined1 *)(param_4 + 0x1c) = 1;
        *(undefined4 *)(param_4 + 0x18) = 0xc;
LAB_10287b37:
        FUN_10274120(iVar1);
        goto LAB_10287ba3;
      }
      local_10 = FUN_1028791e(param_1,0x8000);
      do {
        if (local_1c < 0) goto LAB_10287ace;
        if ((local_1c < 1) && (local_20 < 0x1000)) goto LAB_10287ace;
        do {
          local_20 = 0x1000;
LAB_10287ace:
          uVar2 = FUN_1027ea8a(param_1,iVar1,local_20,param_4);
          if (uVar2 == 0xffffffff) {
            if ((*(char *)(param_4 + 0x24) != '\0') && (*(int *)(param_4 + 0x20) == 5)) {
              *(undefined1 *)(param_4 + 0x1c) = 1;
              *(undefined4 *)(param_4 + 0x18) = 0xd;
            }
            if (*(char *)(param_4 + 0x1c) == '\0') {
              uVar5 = 0;
            }
            else {
              uVar5 = *(undefined4 *)(param_4 + 0x18);
            }
            goto LAB_10287b37;
          }
          local_20 = local_8 - uVar2;
          local_1c = (local_c - ((int)uVar2 >> 0x1f)) - (uint)(local_8 < uVar2);
          local_c = local_1c;
          local_8 = local_20;
        } while (0 < local_1c);
      } while ((-1 < local_1c) && (local_20 != 0));
      FUN_1028791e(param_1,local_10);
      FUN_10274120(iVar1);
    }
    uVar5 = 0;
  }
LAB_10287ba3:
  FUN_1027938a(local_18,local_30,local_2c,0);
  return uVar5;
}

