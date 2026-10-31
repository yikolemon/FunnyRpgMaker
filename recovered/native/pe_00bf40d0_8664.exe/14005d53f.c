/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14005d53f */

int FUN_14005d53f(longlong param_1)

{
  char cVar1;
  char *pcVar2;
  ulonglong uVar3;
  longlong lVar4;
  size_t sVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined4 uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_98 [44];
  int local_6c;
  size_t local_68 [4];
  char *local_48 [4];
  ulonglong local_28;
  
  local_28 = DAT_14012ea80 ^ (ulonglong)auStack_98;
  local_6c = 0;
  lVar11 = *(longlong *)(param_1 + 0x98);
  local_48[2] = (char *)0x0;
  local_48[3] = (char *)0x0;
  local_48[0] = (char *)0x0;
  local_48[1] = (char *)0x0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  lVar4 = FUN_14005c21a(param_1,"SLANT");
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
  lVar4 = FUN_14005c21a(param_1,"WEIGHT_NAME");
  if (((lVar4 != 0) && (*(char *)(lVar4 + 8) != '\0')) &&
     ((**(byte **)(lVar4 + 0x10) | 0x20) == 0x62)) {
    *(undefined4 *)(param_1 + 0xc) = uVar9;
    local_48[1] = "Bold";
  }
  lVar4 = FUN_14005c21a(param_1,"SETWIDTH_NAME");
  if ((lVar4 != 0) && (*(char *)(lVar4 + 8) != '\0')) {
    cVar1 = **(char **)(lVar4 + 0x10);
    if ((cVar1 != '\0') && ((cVar1 != 'N' && (cVar1 != 'n')))) {
      local_48[3] = *(char **)(lVar4 + 0x10);
    }
  }
  lVar4 = FUN_14005c21a(param_1,"ADD_STYLE_NAME");
  if ((lVar4 != 0) && (*(char *)(lVar4 + 8) != '\0')) {
    cVar1 = **(char **)(lVar4 + 0x10);
    if ((cVar1 != '\0') && ((cVar1 != 'N' && (cVar1 != 'n')))) {
      local_48[0] = *(char **)(lVar4 + 0x10);
    }
  }
  lVar4 = 0;
  lVar10 = 0;
  do {
    local_68[lVar10] = 0;
    if (local_48[lVar10] != (char *)0x0) {
      sVar5 = strlen(local_48[lVar10]);
      local_68[lVar10] = sVar5;
      lVar4 = lVar4 + sVar5 + 1;
    }
    lVar10 = lVar10 + 1;
  } while (lVar10 != 4);
  if (lVar4 == 0) {
    local_48[0] = "Regular";
    local_68[0] = 7;
    lVar4 = 8;
  }
  puVar6 = (undefined8 *)FUN_14001e961(lVar11,(int)lVar4,&local_6c);
  *(undefined8 **)(param_1 + 0x20) = puVar6;
  if (local_6c == 0) {
    lVar11 = 0;
    do {
      pcVar2 = local_48[lVar11];
      if (pcVar2 != (char *)0x0) {
        uVar3 = local_68[lVar11];
        if (puVar6 != *(undefined8 **)(param_1 + 0x20)) {
          *(undefined1 *)puVar6 = 0x20;
          puVar6 = (undefined8 *)((longlong)puVar6 + 1);
        }
        FUN_1400b3550(puVar6,(undefined8 *)pcVar2,uVar3);
        if (((lVar11 == 3) || (lVar11 == 0)) && (uVar3 != 0)) {
          uVar7 = 0;
          do {
            if (*(char *)((longlong)puVar6 + uVar7) == ' ') {
              *(undefined1 *)((longlong)puVar6 + uVar7) = 0x2d;
            }
            uVar7 = uVar7 + 1;
          } while (uVar3 != uVar7);
        }
        puVar6 = (undefined8 *)((longlong)puVar6 + uVar3);
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 != 4);
    *(undefined1 *)puVar6 = 0;
  }
  if (DAT_14012ea80 == (local_28 ^ (ulonglong)auStack_98)) {
    return local_6c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_28 ^ (ulonglong)auStack_98);
}

