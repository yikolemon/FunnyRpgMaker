/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101431c6 */

int __fastcall
FUN_101431c6(uint param_1,int *param_2,char *param_3,char *param_4,int param_5,undefined4 *param_6)

{
  bool bVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  size_t sVar7;
  char *_Str;
  int iVar8;
  int iVar9;
  undefined4 in_XMM0_Da;
  
  iVar6 = DAT_1039d74c;
  pcVar5 = param_3;
  if ((param_1 >> 0x18 & 1) == 0) {
    iVar9 = 0;
    if (param_4 == (char *)0x0) {
      do {
        _Str = pcVar5;
        if (iVar9 <= param_5) {
          iVar6 = *param_2;
          if (iVar6 == param_2[1]) {
            if (iVar6 == 0) {
              iVar2 = 8;
            }
            else {
              iVar2 = iVar6 / 2 + iVar6;
            }
            iVar4 = iVar6 + 1;
            if (iVar6 + 1 < iVar2) {
              iVar4 = iVar2;
            }
            iVar2 = FUN_100fa1fa(iVar4 * 4);
            if (param_2[2] != 0) {
              FUN_1025b2d0(iVar2,param_2[2],*param_2 << 2);
              FUN_100fa2cb(param_2[2]);
            }
            param_2[2] = iVar2;
            param_2[1] = iVar4;
            iVar6 = *param_2;
          }
          else {
            iVar2 = param_2[2];
          }
          *(int *)(iVar2 + iVar6 * 4) = (int)_Str - (int)param_3;
          *param_2 = *param_2 + 1;
        }
        iVar6 = FUN_1025b9b0(_Str,10);
        iVar9 = iVar9 + 1;
        pcVar5 = (char *)(iVar6 + 1);
      } while (iVar6 != 0);
      sVar7 = _strlen(_Str);
      bVar1 = true;
      pcVar5 = _Str + sVar7;
      goto LAB_10143480;
    }
    bVar1 = false;
    if (param_4 <= param_3) goto LAB_10143480;
    iVar9 = 0;
    do {
      if (iVar9 <= param_5) {
        iVar6 = *param_2;
        if (iVar6 == param_2[1]) {
          if (iVar6 == 0) {
            iVar2 = 8;
          }
          else {
            iVar2 = iVar6 / 2 + iVar6;
          }
          iVar4 = iVar6 + 1;
          if (iVar6 + 1 < iVar2) {
            iVar4 = iVar2;
          }
          iVar2 = FUN_100fa1fa(iVar4 * 4);
          if (param_2[2] != 0) {
            FUN_1025b2d0(iVar2,param_2[2],*param_2 << 2);
            FUN_100fa2cb(param_2[2]);
          }
          param_2[2] = iVar2;
          param_2[1] = iVar4;
          iVar6 = *param_2;
        }
        else {
          iVar2 = param_2[2];
        }
        *(int *)(iVar2 + iVar6 * 4) = (int)pcVar5 - (int)param_3;
        *param_2 = *param_2 + 1;
      }
      pvVar3 = _memchr(pcVar5,10,(int)param_4 - (int)pcVar5);
      pcVar5 = (char *)((int)pvVar3 + 1);
      if (pvVar3 == (void *)0x0) {
        pcVar5 = param_4;
      }
      iVar9 = iVar9 + 1;
    } while (pcVar5 < param_4);
  }
  else {
    iVar9 = 0;
    bVar1 = false;
    if (param_4 <= param_3) goto LAB_10143480;
    iVar9 = 0;
    do {
      if (iVar9 <= param_5) {
        iVar2 = *param_2;
        if (iVar2 == param_2[1]) {
          if (iVar2 == 0) {
            iVar4 = 8;
          }
          else {
            iVar4 = iVar2 / 2 + iVar2;
          }
          iVar8 = iVar2 + 1;
          if (iVar2 + 1 < iVar4) {
            iVar8 = iVar4;
          }
          iVar4 = FUN_100fa1fa(iVar8 * 4);
          if (param_2[2] != 0) {
            FUN_1025b2d0(iVar4,param_2[2],*param_2 << 2);
            FUN_100fa2cb(param_2[2]);
          }
          param_2[2] = iVar4;
          param_2[1] = iVar8;
          iVar2 = *param_2;
        }
        else {
          iVar4 = param_2[2];
        }
        *(int *)(iVar4 + iVar2 * 4) = (int)pcVar5 - (int)param_3;
        *param_2 = *param_2 + 1;
      }
      pcVar5 = (char *)FUN_101932d6(*(undefined4 *)(iVar6 + 0x1220),*(undefined4 *)(iVar6 + 0x1228),
                                    pcVar5,param_4,in_XMM0_Da,2);
      pcVar5 = pcVar5 + (*pcVar5 == '\n');
      iVar9 = iVar9 + 1;
    } while (pcVar5 < param_4);
  }
  bVar1 = false;
LAB_10143480:
  if (param_6 != (undefined4 *)0x0) {
    *param_6 = pcVar5;
    param_4 = pcVar5;
  }
  if (iVar9 == 0) {
    iVar6 = *param_2;
    if (iVar6 == param_2[1]) {
      if (iVar6 == 0) {
        iVar9 = 8;
      }
      else {
        iVar9 = iVar6 / 2 + iVar6;
      }
      iVar2 = iVar6 + 1;
      if (iVar6 + 1 < iVar9) {
        iVar2 = iVar9;
      }
      iVar9 = FUN_100fa1fa(iVar2 * 4);
      if (param_2[2] != 0) {
        FUN_1025b2d0(iVar9,param_2[2],*param_2 << 2);
        FUN_100fa2cb(param_2[2]);
      }
      param_2[2] = iVar9;
      param_2[1] = iVar2;
      iVar6 = *param_2;
    }
    else {
      iVar9 = param_2[2];
    }
    *(undefined4 *)(iVar9 + iVar6 * 4) = 0;
    *param_2 = *param_2 + 1;
    iVar9 = 1;
  }
  if (((param_3 <= param_4 && (int)param_4 - (int)param_3 != 0) && (!bVar1 && param_4[-1] == '\n'))
     && (iVar6 = iVar9 + 1, bVar1 = iVar9 <= param_5, iVar9 = iVar6, bVar1)) {
    iVar6 = *param_2;
    if (iVar6 == param_2[1]) {
      if (iVar6 == 0) {
        iVar2 = 8;
      }
      else {
        iVar2 = iVar6 / 2 + iVar6;
      }
      iVar4 = iVar6 + 1;
      if (iVar6 + 1 < iVar2) {
        iVar4 = iVar2;
      }
      iVar2 = FUN_100fa1fa(iVar4 * 4);
      if (param_2[2] != 0) {
        FUN_1025b2d0(iVar2,param_2[2],*param_2 << 2);
        FUN_100fa2cb(param_2[2]);
      }
      param_2[2] = iVar2;
      param_2[1] = iVar4;
      iVar6 = *param_2;
    }
    else {
      iVar2 = param_2[2];
    }
    *(int *)(iVar2 + iVar6 * 4) = (int)param_4 - (int)param_3;
    *param_2 = *param_2 + 1;
  }
  return iVar9;
}

