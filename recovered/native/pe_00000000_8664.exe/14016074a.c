/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14016074a */

int FUN_14016074a(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char *pcVar4;
  longlong lVar5;
  size_t sVar6;
  undefined1 *puVar7;
  size_t sVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [44];
  int local_6c;
  size_t local_68 [4];
  char *local_48 [4];
  ulonglong local_28;
  
  local_28 = DAT_140f17b40 ^ (ulonglong)auStack_98;
  local_6c = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x98);
  uVar3 = *(undefined8 *)(param_1 + 0xe8);
  local_48[2] = (char *)0x0;
  local_48[3] = (char *)0x0;
  local_48[0] = (char *)0x0;
  local_48[1] = (char *)0x0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  lVar5 = FUN_14016053d(uVar3,"SLANT");
  if ((((lVar5 != 0) && (*(int *)(lVar5 + 8) == 1)) && (*(byte **)(lVar5 + 0x10) != (byte *)0x0)) &&
     ((uVar9 = **(byte **)(lVar5 + 0x10) - 0x49, uVar9 < 0x27 &&
      ((0x4100000041U >> ((ulonglong)uVar9 & 0x3f) & 1) != 0)))) {
    *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) | 1;
    local_48[2] = "Italic";
    if ((**(byte **)(lVar5 + 0x10) & 0xdf) == 0x4f) {
      local_48[2] = "Oblique";
    }
  }
  lVar5 = FUN_14016053d(uVar3,"WEIGHT_NAME");
  if (((lVar5 != 0) && (*(int *)(lVar5 + 8) == 1)) &&
     ((*(byte **)(lVar5 + 0x10) != (byte *)0x0 && ((**(byte **)(lVar5 + 0x10) | 0x20) == 0x62)))) {
    *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) | 2;
    local_48[1] = "Bold";
  }
  lVar5 = FUN_14016053d(uVar3,"SETWIDTH_NAME");
  if (((((lVar5 != 0) && (*(int *)(lVar5 + 8) == 1)) &&
       (pcVar4 = *(char **)(lVar5 + 0x10), pcVar4 != (char *)0x0)) &&
      ((cVar1 = *pcVar4, cVar1 != '\0' && (cVar1 != 'N')))) && (cVar1 != 'n')) {
    local_48[3] = pcVar4;
  }
  lVar5 = FUN_14016053d(uVar3,"ADD_STYLE_NAME");
  if (((lVar5 != 0) && (*(int *)(lVar5 + 8) == 1)) &&
     ((pcVar4 = *(char **)(lVar5 + 0x10), pcVar4 != (char *)0x0 &&
      (((cVar1 = *pcVar4, cVar1 != '\0' && (cVar1 != 'N')) && (cVar1 != 'n')))))) {
    local_48[0] = pcVar4;
  }
  uVar10 = 0;
  lVar5 = 0;
  do {
    local_68[lVar5] = 0;
    if (local_48[lVar5] != (char *)0x0) {
      sVar6 = strlen(local_48[lVar5]);
      local_68[lVar5] = sVar6;
      uVar10 = uVar10 + sVar6 + 1;
    }
    lVar5 = lVar5 + 1;
  } while (lVar5 != 4);
  if (uVar10 == 0) {
    local_48[0] = "Regular";
    local_68[0] = 7;
    uVar10 = 8;
  }
  puVar7 = (undefined1 *)FUN_14012afda(uVar2,uVar10 & 0xffffffff,&local_6c);
  *(undefined1 **)(param_1 + 0x20) = puVar7;
  if (local_6c == 0) {
    lVar5 = 0;
    do {
      pcVar4 = local_48[lVar5];
      if (pcVar4 != (char *)0x0) {
        sVar6 = local_68[lVar5];
        if (puVar7 != *(undefined1 **)(param_1 + 0x20)) {
          *puVar7 = 0x20;
          puVar7 = puVar7 + 1;
        }
        FUN_1401c5180(puVar7,pcVar4,sVar6);
        if (((lVar5 == 3) || (lVar5 == 0)) && (sVar6 != 0)) {
          sVar8 = 0;
          do {
            if (puVar7[sVar8] == ' ') {
              puVar7[sVar8] = 0x2d;
            }
            sVar8 = sVar8 + 1;
          } while (sVar6 != sVar8);
        }
        puVar7 = puVar7 + sVar6;
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 != 4);
    *puVar7 = 0;
  }
  if (DAT_140f17b40 != (local_28 ^ (ulonglong)auStack_98)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_28 ^ (ulonglong)auStack_98);
  }
  return local_6c;
}

