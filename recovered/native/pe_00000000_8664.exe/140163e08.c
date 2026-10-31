/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140163e08 */

int FUN_140163e08(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *_Str1;
  longlong lVar6;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  uint local_94;
  longlong local_90;
  undefined4 local_88 [2];
  undefined4 local_80;
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_b8;
  uVar1 = *param_1;
  puVar2 = (undefined1 *)param_1[2];
  local_94 = 0;
  if (puVar2 == (undefined1 *)0x0) {
    iVar5 = 6;
  }
  else {
    _Str1 = (char *)FUN_14016463e(param_1,&local_90);
    iVar5 = 2;
    if (((_Str1 != (char *)0x0) && (local_90 == 0x10)) &&
       (iVar3 = strncmp(_Str1,"StartFontMetrics",0x10), iVar3 == 0)) {
      lVar6 = FUN_14016463e(param_1,&local_90);
      iVar5 = 0xa0;
      if (lVar6 != 0) {
        do {
          iVar4 = FUN_140164696(lVar6,local_90);
          iVar3 = iVar5;
          if (iVar4 < 0x1e) {
            if (iVar4 < 0x14) {
              if (iVar4 == 0) {
                local_88[0] = 2;
                iVar4 = FUN_140164782(param_1,local_88,1);
                if (iVar4 != 1) break;
                *(undefined4 *)(puVar2 + 0x14) = local_80;
              }
              else if (iVar4 == 0xe) {
                local_88[0] = 2;
                iVar4 = FUN_140164782(param_1,local_88,1);
                if (iVar4 != 1) break;
                *(undefined4 *)(puVar2 + 0x18) = local_80;
              }
            }
            else if (iVar4 == 0x1a) {
              local_88[0] = 2;
              local_78 = 2;
              local_68 = 2;
              local_58 = 2;
              iVar4 = FUN_140164782(param_1,local_88,4);
              if (iVar4 != 4) break;
              *(undefined4 *)(puVar2 + 4) = local_80;
              *(undefined4 *)(puVar2 + 8) = local_70;
              *(undefined4 *)(puVar2 + 0xc) = local_60;
              *(undefined4 *)(puVar2 + 0x10) = local_50;
            }
            else if (iVar4 == 0x14) {
LAB_1401640be:
              iVar5 = 0;
              goto LAB_140164089;
            }
          }
          else if (iVar4 < 0x2d) {
            if (iVar4 == 0x1e) {
              local_88[0] = 4;
              iVar4 = FUN_140164782(param_1,local_88,1);
              if (iVar4 != 1) break;
              *puVar2 = (undefined1)local_80;
            }
            else if (iVar4 == 0x28) {
              iVar4 = FUN_140164719(param_1,&local_94);
              if (iVar4 != 0) break;
              if ((local_94 & 0xfffffffd) != 0) {
                iVar5 = 7;
                break;
              }
            }
          }
          else if (iVar4 == 0x2d) {
            local_98 = 0;
            iVar3 = FUN_140164719(param_1,&local_98);
            if (iVar3 != 0) break;
            iVar5 = FUN_1401648ed(param_1,local_98);
            iVar3 = 0;
            if (iVar5 != 0) goto LAB_140164089;
          }
          else if (iVar4 == 0x31) {
            iVar5 = FUN_14016497e(param_1);
            if (iVar5 == 0) goto LAB_1401640be;
            break;
          }
          iVar5 = iVar3;
          lVar6 = FUN_14016463e(param_1,&local_90);
        } while (lVar6 != 0);
      }
      FUN_140128b39(uVar1,*(undefined8 *)(puVar2 + 0x20));
      *(undefined8 *)(puVar2 + 0x20) = 0;
      *(undefined4 *)(puVar2 + 0x28) = 0;
      FUN_140128b39(uVar1,*(undefined8 *)(puVar2 + 0x30));
      *(undefined8 *)(puVar2 + 0x30) = 0;
      *(undefined4 *)(puVar2 + 0x38) = 0;
      *puVar2 = 0;
    }
  }
LAB_140164089:
  if (DAT_140f17b40 != (local_48 ^ (ulonglong)auStack_b8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_48 ^ (ulonglong)auStack_b8);
  }
  return iVar5;
}

