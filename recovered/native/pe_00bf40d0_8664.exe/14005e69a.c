/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14005e69a */

int FUN_14005e69a(longlong param_1)

{
  char cVar1;
  char *pcVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  size_t sVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_98 [44];
  int local_6c;
  size_t local_68 [4];
  char *local_48 [4];
  ulonglong local_28;
  
  local_28 = DAT_14012ea80 ^ (ulonglong)auStack_98;
  local_6c = 0;
  lVar10 = *(longlong *)(param_1 + 0x98);
  lVar5 = *(longlong *)(param_1 + 0xe8);
  local_48[2] = (char *)0x0;
  local_48[3] = (char *)0x0;
  local_48[0] = (char *)0x0;
  local_48[1] = (char *)0x0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  lVar4 = FUN_14005e48d(lVar5,"SLANT");
  if ((((lVar4 != 0) && (*(int *)(lVar4 + 8) == 1)) && (*(byte **)(lVar4 + 0x10) != (byte *)0x0)) &&
     ((uVar9 = **(byte **)(lVar4 + 0x10) - 0x49, uVar9 < 0x27 &&
      ((0x4100000041U >> ((ulonglong)uVar9 & 0x3f) & 1) != 0)))) {
    *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) | 1;
    local_48[2] = "Italic";
    if ((**(byte **)(lVar4 + 0x10) & 0xdf) == 0x4f) {
      local_48[2] = "Oblique";
    }
  }
  lVar4 = FUN_14005e48d(lVar5,"WEIGHT_NAME");
  if (((lVar4 != 0) && (*(int *)(lVar4 + 8) == 1)) &&
     ((*(byte **)(lVar4 + 0x10) != (byte *)0x0 && ((**(byte **)(lVar4 + 0x10) | 0x20) == 0x62)))) {
    *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) | 2;
    local_48[1] = "Bold";
  }
  lVar4 = FUN_14005e48d(lVar5,"SETWIDTH_NAME");
  if (((((lVar4 != 0) && (*(int *)(lVar4 + 8) == 1)) &&
       (pcVar2 = *(char **)(lVar4 + 0x10), pcVar2 != (char *)0x0)) &&
      ((cVar1 = *pcVar2, cVar1 != '\0' && (cVar1 != 'N')))) && (cVar1 != 'n')) {
    local_48[3] = pcVar2;
  }
  lVar5 = FUN_14005e48d(lVar5,"ADD_STYLE_NAME");
  if (((lVar5 != 0) && (*(int *)(lVar5 + 8) == 1)) &&
     ((pcVar2 = *(char **)(lVar5 + 0x10), pcVar2 != (char *)0x0 &&
      (((cVar1 = *pcVar2, cVar1 != '\0' && (cVar1 != 'N')) && (cVar1 != 'n')))))) {
    local_48[0] = pcVar2;
  }
  lVar5 = 0;
  lVar4 = 0;
  do {
    local_68[lVar4] = 0;
    if (local_48[lVar4] != (char *)0x0) {
      sVar6 = strlen(local_48[lVar4]);
      local_68[lVar4] = sVar6;
      lVar5 = lVar5 + sVar6 + 1;
    }
    lVar4 = lVar4 + 1;
  } while (lVar4 != 4);
  if (lVar5 == 0) {
    local_48[0] = "Regular";
    local_68[0] = 7;
    lVar5 = 8;
  }
  puVar7 = (undefined8 *)FUN_14001e961(lVar10,(int)lVar5,&local_6c);
  *(undefined8 **)(param_1 + 0x20) = puVar7;
  if (local_6c == 0) {
    lVar10 = 0;
    do {
      pcVar2 = local_48[lVar10];
      if (pcVar2 != (char *)0x0) {
        uVar3 = local_68[lVar10];
        if (puVar7 != *(undefined8 **)(param_1 + 0x20)) {
          *(undefined1 *)puVar7 = 0x20;
          puVar7 = (undefined8 *)((longlong)puVar7 + 1);
        }
        FUN_1400b3550(puVar7,(undefined8 *)pcVar2,uVar3);
        if (((lVar10 == 3) || (lVar10 == 0)) && (uVar3 != 0)) {
          uVar8 = 0;
          do {
            if (*(char *)((longlong)puVar7 + uVar8) == ' ') {
              *(undefined1 *)((longlong)puVar7 + uVar8) = 0x2d;
            }
            uVar8 = uVar8 + 1;
          } while (uVar3 != uVar8);
        }
        puVar7 = (undefined8 *)((longlong)puVar7 + uVar3);
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 != 4);
    *(undefined1 *)puVar7 = 0;
  }
  if (DAT_14012ea80 != (local_28 ^ (ulonglong)auStack_98)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_28 ^ (ulonglong)auStack_98);
  }
  return local_6c;
}

