/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407eac09 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1407eac09(ulonglong param_1,uint param_2)

{
  ushort uVar1;
  uint uVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  uint *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  
  puVar8 = (uint *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0x4c);
  uVar10 = param_1 & 0xffffffff;
  *(short *)((longlong)puVar8 + 0x46) = (short)param_2;
  uVar7 = (ulonglong)*(uint *)(param_1 + 0x48);
  uVar11 = *(uint *)(uVar7 + 4);
  puVar8[2] = uVar11;
  if ((*(char *)((ulonglong)uVar11 + 0x40) == '\0') && ((*(byte *)(uVar7 + 8) & 4) == 0)) {
    puVar8[-2] = 0x407eac4f;
    puVar8[-1] = 1;
    FUN_1407eae6c(uVar7,(ushort *)((longlong)puVar8 + 0x46U & 0xffffffff));
    uVar1 = *(ushort *)((longlong)puVar8 + 0x46U & 0xffffffff);
    puVar8[1] = (uint)uVar1;
    if ((uVar1 == *(ushort *)(uVar7 + 0x24)) && (*(char *)(uVar7 + 0x29) == '\x01')) {
      puVar8[-2] = 0x407eac6d;
      puVar8[-1] = 1;
      iVar5 = FUN_1407ed713(puVar8[2],uVar10);
      if (iVar5 != 0) goto LAB_1407ead9b;
    }
    puVar8[4] = param_2;
    *puVar8 = (int)param_1;
    uVar11 = *(uint *)(uVar7 + 0x18);
    puVar8[3] = uVar11;
    if (uVar11 != 0) {
      puVar8[5] = *(uint *)(uVar7 + 0x20);
      puVar8[3] = puVar8[3] << 2;
      uVar11 = *(uint *)((ulonglong)*puVar8 + 0x4c);
      uVar7 = 0;
      do {
        uVar6 = *(uint *)(*(uint *)((longlong)puVar8 + 0x14) + uVar7);
        uVar10 = (ulonglong)uVar6;
        uVar2 = *(uint *)(uVar10 + 0x74);
        if (uVar2 == 0) {
          uVar2 = *(uint *)((ulonglong)*(uint *)((longlong)puVar8 + 8) + 0x294);
        }
        uVar12 = (ulonglong)uVar2;
        if (*(int *)(uVar10 + 0x40) == 0) {
LAB_1407eacce:
          if (*(uint *)((longlong)puVar8 + 0x60) == 0) {
            *(undefined8 *)((longlong)puVar8 + 0x38) = 0;
            *(undefined8 *)((longlong)puVar8 + 0x28) = 0;
            *(undefined8 *)((longlong)puVar8 + 0x30) = 0;
            *(undefined8 *)((longlong)puVar8 + 0x18) = 0;
            *(undefined8 *)((longlong)puVar8 + 0x20) = 0;
            *(undefined4 *)((longlong)puVar8 + 0x40) = 0xffffffff;
            *(undefined8 *)((longlong)puVar8 + -8) = 0;
            *(ulonglong *)((longlong)puVar8 + -0x10) =
                 (ulonglong)((longlong)puVar8 + 0x14) & 0xffffffff;
            *(undefined8 *)((longlong)puVar8 + -0x18) = *(undefined8 *)((longlong)puVar8 + -4);
            *(ulonglong *)((longlong)puVar8 + -0x20) = (ulonglong)uVar11;
            *(undefined8 *)((longlong)puVar8 + -0x28) = *(undefined8 *)((longlong)puVar8 + -0x10);
            *(ulonglong *)((longlong)puVar8 + -0x30) = uVar10;
            *(undefined8 *)((longlong)puVar8 + -0x38) = *(undefined8 *)((longlong)puVar8 + -0x10);
            pcVar3 = *(code **)(uVar12 + 0x20);
            *(undefined8 *)((longlong)puVar8 + -0x40) = 0x1407ead2d;
            cVar4 = (*pcVar3)();
            puVar8 = (uint *)(ulonglong)((int)(undefined1 *)((longlong)puVar8 + -0x38) + 0x1c);
            if (cVar4 != '\0') {
              *(uint *)((longlong)puVar8 + 0x18) =
                   (uint)uVar7 & 0x3c |
                   *(uint *)((longlong)puVar8 + 0x18) & 3 |
                   (uint)*(ushort *)((longlong)puVar8 + 0x10) << 6;
              *(ulonglong *)((longlong)puVar8 + -8) =
                   (ulonglong)((longlong)puVar8 + 0x18) & 0xffffffff;
              *(ulonglong *)((longlong)puVar8 + -0x10) = uVar10;
              *(undefined8 *)((longlong)puVar8 + -0x18) = *(undefined8 *)((longlong)puVar8 + -8);
              *(undefined8 *)((longlong)puVar8 + -0x20) = *(undefined8 *)((longlong)puVar8 + -4);
              *(undefined8 *)((longlong)puVar8 + -0x28) = 0x1407eae13;
              iVar5 = FUN_1407e81fa();
              puVar8 = (uint *)(ulonglong)((int)(undefined1 *)((longlong)puVar8 + -0x20) + 0x10);
              goto LAB_1407ead9b;
            }
          }
          else {
            *(ulonglong *)((longlong)puVar8 + -8) = (ulonglong)*(uint *)((longlong)puVar8 + 0x60);
            *(undefined8 *)((longlong)puVar8 + -0x10) = 0;
            *(undefined8 *)((longlong)puVar8 + -0x18) = *(undefined8 *)((longlong)puVar8 + -4);
            *(ulonglong *)((longlong)puVar8 + -0x20) = (ulonglong)uVar11;
            *(undefined8 *)((longlong)puVar8 + -0x28) = *(undefined8 *)((longlong)puVar8 + -0x10);
            *(ulonglong *)((longlong)puVar8 + -0x30) = uVar10;
            *(undefined8 *)((longlong)puVar8 + -0x38) = *(undefined8 *)((longlong)puVar8 + -0x10);
            pcVar3 = *(code **)(uVar12 + 0x20);
            *(undefined8 *)((longlong)puVar8 + -0x40) = 0x1407eacea;
            cVar4 = (*pcVar3)();
            iVar5 = (int)(undefined1 *)((longlong)puVar8 + -0x38);
            puVar8 = (uint *)(ulonglong)(iVar5 + 0x1c);
            if (cVar4 != '\0') {
              uVar9 = (ulonglong)(iVar5 + 8);
              *(undefined4 *)(uVar9 + 0x10) =
                   *(undefined4 *)(ulonglong)*(uint *)((longlong)puVar8 + 0x60);
              *(undefined4 *)(uVar9 + 0xc) = *(undefined4 *)(uVar9 + 0x18);
              *(uint *)(uVar9 + 8) = uVar6;
              *(undefined4 *)(uVar9 + 4) = *(undefined4 *)(uVar9 + 0x14);
              *(undefined8 *)(uVar9 - 8) = 0x1407eaddf;
              FUN_1407eaa4a();
              puVar8 = (uint *)(ulonglong)(iVar5 + 0x1c);
              iVar5 = 0;
              goto LAB_1407ead9b;
            }
          }
        }
        else {
          *(undefined8 *)((longlong)puVar8 + -8) = 0x1407eacca;
          cVar4 = FUN_1407ed8fc(uVar10,*(undefined4 *)((longlong)puVar8 + 4));
          if (cVar4 != '\0') goto LAB_1407eacce;
        }
        uVar11 = uVar11 + *(int *)(uVar12 + 0x24);
        uVar6 = (uint)uVar7 + 4;
        uVar7 = (ulonglong)uVar6;
      } while (*(uint *)((longlong)puVar8 + 0xc) != uVar6);
    }
    iVar5 = 0;
    uVar7 = (ulonglong)*puVar8;
    if ((*(byte *)(uVar7 + 0x3f) & 8) == 0) {
      if (*(int *)(uVar7 + 0x30) == -1) {
        puVar8[-2] = 0x407ead60;
        puVar8[-1] = 1;
        FUN_1407ed648(uVar7);
      }
      uVar11 = puVar8[1];
      puVar8[-2] = 0x407ead6e;
      puVar8[-1] = 1;
      FUN_1407ea94d(uVar7,uVar11 + 1);
      *(undefined4 *)((ulonglong)*(uint *)(uVar7 + 8) + (ulonglong)uVar11 * 4) =
           *(undefined4 *)(uVar7 + 0xc);
      *(undefined2 *)((ulonglong)*(uint *)(uVar7 + 0x20) + (ulonglong)uVar11 * 2) = 0xfffe;
    }
  }
  else {
    iVar5 = 0;
    if ((*(int *)(uVar10 + 0x30) == -1) && ((*(byte *)(uVar10 + 0x3f) & 8) == 0)) {
      puVar8[-2] = 0x407ead9b;
      puVar8[-1] = 1;
      FUN_1407ed648(uVar10);
    }
  }
LAB_1407ead9b:
  if (_DAT_150b73aa7 != (*(uint *)((longlong)puVar8 + 0x48) ^ (uint)puVar8)) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)((longlong)puVar8 + -8) = &UNK_1407eae25;
    FUN_1408802b0(*(uint *)((longlong)puVar8 + 0x48) ^ (uint)puVar8);
  }
  return iVar5;
}

