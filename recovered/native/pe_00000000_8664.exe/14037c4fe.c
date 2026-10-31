/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14037c4fe */

void FUN_14037c4fe(longlong param_1)

{
  longlong lVar1;
  short sVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  bool bVar11;
  
  iVar7 = *(int *)(param_1 + 0x6c);
  if (0 < iVar7) {
    lVar10 = 0x5e;
    lVar4 = 0;
    uVar3 = 0;
    uVar6 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + 0x18);
      sVar2 = *(short *)(lVar1 + lVar10);
      if (sVar2 == -1) {
LAB_14037c546:
        sVar2 = -1;
      }
      else if (*(char *)(lVar1 + 8 + lVar10) == '\0') {
        *(undefined2 *)(lVar1 + lVar10) = 0xffff;
        iVar7 = *(int *)(param_1 + 0x6c);
        goto LAB_14037c546;
      }
      uVar9 = 1L << ((byte)sVar2 & 0x3f);
      if (sVar2 == -1) {
        uVar9 = 0;
      }
      uVar6 = uVar6 | uVar9;
      uVar3 = uVar3 + (sVar2 != -1);
      lVar4 = lVar4 + 1;
      lVar10 = lVar10 + 0x74;
    } while (lVar4 < iVar7);
    if (uVar3 < 2) {
      bVar11 = false;
    }
    else {
      bVar11 = (*(byte *)(param_1 + 7) & 4) == 0;
    }
    if (!(bool)(uVar3 == 0 | (bVar11 ^ 1U) & 1L << ((byte)uVar3 & 0x3f) == uVar6 + 1)) {
      uVar6 = 0;
      uVar8 = 0;
      do {
        uVar9 = 0xffffffff;
        if (0 < (longlong)*(int *)(param_1 + 0x6c)) {
          lVar4 = 0x5e;
          uVar5 = 0;
          do {
            if ((uVar6 >> (uVar5 & 0x3f) & 1) == 0) {
              sVar2 = *(short *)(*(longlong *)(param_1 + 0x18) + lVar4);
              if ((sVar2 != -1) &&
                 (((int)uVar9 == -1 ||
                  (sVar2 < *(short *)(*(longlong *)(param_1 + 0x18) + 0x5e +
                                     (longlong)(int)uVar9 * 0x74))))) {
                uVar9 = uVar5 & 0xffffffff;
              }
            }
            uVar5 = uVar5 + 1;
            lVar4 = lVar4 + 0x74;
          } while ((longlong)*(int *)(param_1 + 0x6c) != uVar5);
        }
        *(short *)(*(longlong *)(param_1 + 0x18) + 0x5e + (longlong)(int)uVar9 * 0x74) =
             (short)uVar8;
        if (bVar11) {
          iVar7 = *(int *)(param_1 + 0x6c);
          uVar3 = 1;
          if (0 < iVar7) {
            lVar4 = 0x5e;
            uVar6 = 0;
            do {
              if (uVar9 != uVar6) {
                *(undefined2 *)(*(longlong *)(param_1 + 0x18) + lVar4) = 0xffff;
                iVar7 = *(int *)(param_1 + 0x6c);
              }
              uVar6 = uVar6 + 1;
              lVar4 = lVar4 + 0x74;
            } while ((longlong)uVar6 < (longlong)iVar7);
          }
          break;
        }
        uVar8 = uVar8 + 1;
        uVar6 = uVar6 | 1L << (uVar9 & 0x3f);
      } while (uVar8 != uVar3);
      goto LAB_14037c6d0;
    }
    if (uVar3 != 0) goto LAB_14037c6d0;
  }
  uVar3 = 0;
  if (((*(byte *)(param_1 + 7) & 8) == 0) && (0 < (longlong)*(int *)(param_1 + 0x6c))) {
    lVar4 = *(longlong *)(param_1 + 0x18);
    lVar10 = 0;
    do {
      if ((*(char *)(lVar4 + 0x66 + lVar10) == '\x01') && ((*(byte *)(lVar4 + 1 + lVar10) & 2) == 0)
         ) {
        *(undefined2 *)(lVar4 + 0x5e + lVar10) = 0;
        *(byte *)(lVar4 + 0x71 + lVar10) =
             *(byte *)(lVar4 + 0x71 + lVar10) & 0xfc | *(byte *)(lVar4 + 0x72 + lVar10) & 3;
        uVar3 = 1;
        goto LAB_14037c6d0;
      }
      lVar10 = lVar10 + 0x74;
    } while ((longlong)*(int *)(param_1 + 0x6c) * 0x74 - lVar10 != 0);
    uVar3 = 0;
  }
LAB_14037c6d0:
  *(short *)(param_1 + 0x200) = (short)uVar3;
  return;
}

