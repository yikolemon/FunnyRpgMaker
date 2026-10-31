/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14015f5ef */

int FUN_14015f5ef(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  char *pcVar3;
  longlong lVar4;
  size_t sVar5;
  undefined1 *puVar6;
  size_t sVar7;
  uint uVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [44];
  int local_6c;
  size_t local_68 [4];
  char *local_48 [4];
  ulonglong local_28;
  
  local_28 = DAT_140f17b40 ^ (ulonglong)auStack_98;
  local_6c = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x98);
  local_48[2] = (char *)0x0;
  local_48[3] = (char *)0x0;
  local_48[0] = (char *)0x0;
  local_48[1] = (char *)0x0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  lVar4 = FUN_14015e2ca(0,"SLANT");
  uVar9 = 2;
  if ((((lVar4 != 0) && (*(char *)(lVar4 + 8) != '\0')) &&
      (uVar8 = **(byte **)(lVar4 + 0x10) - 0x49, uVar8 < 0x27)) &&
     ((0x4100000041U >> ((ulonglong)uVar8 & 0x3f) & 1) != 0)) {
    *(undefined4 *)(param_1 + 0xc) = 1;
    local_48[2] = "Italic";
    if ((**(byte **)(lVar4 + 0x10) & 0xdf) == 0x4f) {
      local_48[2] = "Oblique";
    }
    uVar9 = 3;
  }
  lVar4 = FUN_14015e2ca(param_1,"WEIGHT_NAME");
  if (((lVar4 != 0) && (*(char *)(lVar4 + 8) != '\0')) &&
     ((**(byte **)(lVar4 + 0x10) | 0x20) == 0x62)) {
    *(undefined4 *)(param_1 + 0xc) = uVar9;
    local_48[1] = "Bold";
  }
  lVar4 = FUN_14015e2ca(param_1,"SETWIDTH_NAME");
  if ((lVar4 != 0) && (*(char *)(lVar4 + 8) != '\0')) {
    cVar1 = **(char **)(lVar4 + 0x10);
    if ((cVar1 != '\0') && ((cVar1 != 'N' && (cVar1 != 'n')))) {
      local_48[3] = *(char **)(lVar4 + 0x10);
    }
  }
  lVar4 = FUN_14015e2ca(param_1,"ADD_STYLE_NAME");
  if ((lVar4 != 0) && (*(char *)(lVar4 + 8) != '\0')) {
    cVar1 = **(char **)(lVar4 + 0x10);
    if ((cVar1 != '\0') && ((cVar1 != 'N' && (cVar1 != 'n')))) {
      local_48[0] = *(char **)(lVar4 + 0x10);
    }
  }
  uVar10 = 0;
  lVar4 = 0;
  do {
    local_68[lVar4] = 0;
    if (local_48[lVar4] != (char *)0x0) {
      sVar5 = strlen(local_48[lVar4]);
      local_68[lVar4] = sVar5;
      uVar10 = uVar10 + sVar5 + 1;
    }
    lVar4 = lVar4 + 1;
  } while (lVar4 != 4);
  if (uVar10 == 0) {
    local_48[0] = "Regular";
    local_68[0] = 7;
    uVar10 = 8;
  }
  puVar6 = (undefined1 *)FUN_14012afda(uVar2,uVar10 & 0xffffffff,&local_6c);
  *(undefined1 **)(param_1 + 0x20) = puVar6;
  if (local_6c == 0) {
    lVar4 = 0;
    do {
      pcVar3 = local_48[lVar4];
      if (pcVar3 != (char *)0x0) {
        sVar5 = local_68[lVar4];
        if (puVar6 != *(undefined1 **)(param_1 + 0x20)) {
          *puVar6 = 0x20;
          puVar6 = puVar6 + 1;
        }
        FUN_1401c5180(puVar6,pcVar3,sVar5);
        if (((lVar4 == 3) || (lVar4 == 0)) && (sVar5 != 0)) {
          sVar7 = 0;
          do {
            if (puVar6[sVar7] == ' ') {
              puVar6[sVar7] = 0x2d;
            }
            sVar7 = sVar7 + 1;
          } while (sVar5 != sVar7);
        }
        puVar6 = puVar6 + sVar5;
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 != 4);
    *puVar6 = 0;
  }
  if (DAT_140f17b40 == (local_28 ^ (ulonglong)auStack_98)) {
    return local_6c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_28 ^ (ulonglong)auStack_98);
}

