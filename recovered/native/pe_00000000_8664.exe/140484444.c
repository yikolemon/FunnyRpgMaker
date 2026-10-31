/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140484444 */

undefined4 FUN_140484444(longlong param_1)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  byte bVar5;
  char *pcVar6;
  longlong lVar7;
  
  lVar7 = *(longlong *)(param_1 + 8);
  if (*(_iobuf **)(param_1 + 0x460) == (_iobuf *)0x0) {
    *(undefined1 *)(lVar7 + 0x30) = 1;
    *(undefined4 *)(lVar7 + 0x2c) = 0x16;
  }
  else {
    bVar2 = __acrt_stdio_char_traits<char>::validate_stream_is_ansi_if_required
                      (*(_iobuf **)(param_1 + 0x460));
    if (!bVar2) {
      return 0xffffffff;
    }
    pcVar6 = *(char **)(param_1 + 0x10);
    if (pcVar6 != (char *)0x0) {
      iVar4 = *(int *)(param_1 + 0x468) + 1;
      *(int *)(param_1 + 0x468) = iVar4;
      do {
        if (iVar4 == 2) {
          return *(undefined4 *)(param_1 + 0x20);
        }
        *(undefined4 *)(param_1 + 0x48) = 0;
        *(undefined1 *)(param_1 + 0x24) = 0;
        cVar3 = *pcVar6;
        while( true ) {
          pcVar6 = pcVar6 + 1;
          *(char **)(param_1 + 0x10) = pcVar6;
          *(char *)(param_1 + 0x39) = cVar3;
          if ((cVar3 == '\0') || (*(int *)(param_1 + 0x20) < 0)) break;
          bVar5 = 0;
          if ((byte)(cVar3 - 0x20U) < 0x5b) {
            bVar5 = (&DAT_1405604d1)[(ulonglong)((int)cVar3 - 0x20U & 0x7f) * 2];
          }
          bVar5 = (&DAT_1405604d0)
                  [(ulonglong)((uint)*(byte *)(param_1 + 0x24) + (uint)bVar5 * 8 & 0x7f) * 2];
          *(byte *)(param_1 + 0x24) = bVar5;
          if (7 < bVar5) {
LAB_140484794:
            lVar7 = *(longlong *)(param_1 + 8);
            *(undefined1 *)(lVar7 + 0x30) = 1;
            *(undefined4 *)(lVar7 + 0x2c) = 0x16;
            lVar7 = *(longlong *)(param_1 + 8);
            goto LAB_1404847ac;
          }
          if (bVar5 == 0) {
            lVar7 = *(longlong *)(param_1 + 8);
            *(undefined1 *)(param_1 + 0x4c) = 0;
            if (*(char *)(lVar7 + 0x28) == '\0') {
              FUN_140484290(lVar7);
            }
            cVar3 = *(char *)(param_1 + 0x39);
            if ((-2 < cVar3) &&
               ((*(ushort *)(**(longlong **)(lVar7 + 0x18) + (longlong)cVar3 * 2) & 0x8000) != 0)) {
              if ((((*(uint *)(*(longlong *)(param_1 + 0x460) + 0x14) >> 0xc & 1) == 0) ||
                  (*(longlong *)(*(longlong *)(param_1 + 0x460) + 8) != 0)) &&
                 (iVar4 = FUN_140496e00((longlong)cVar3 & 0xffffffff,
                                        *(undefined8 *)(param_1 + 0x460),
                                        *(undefined8 *)(param_1 + 8)), iVar4 == -1)) {
                *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
              }
              else {
                *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
              }
              cVar3 = **(char **)(param_1 + 0x10);
              *(char **)(param_1 + 0x10) = *(char **)(param_1 + 0x10) + 1;
              *(char *)(param_1 + 0x39) = cVar3;
              if (cVar3 == '\0') {
                lVar7 = *(longlong *)(param_1 + 8);
                *(undefined1 *)(lVar7 + 0x30) = 1;
                *(undefined4 *)(lVar7 + 0x2c) = 0x16;
                FUN_1404a2100(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
                goto LAB_140484794;
              }
            }
            if ((((*(uint *)(*(longlong *)(param_1 + 0x460) + 0x14) >> 0xc & 1) == 0) ||
                (*(longlong *)(*(longlong *)(param_1 + 0x460) + 8) != 0)) &&
               (iVar4 = FUN_140496e00((int)cVar3,*(undefined8 *)(param_1 + 0x460),
                                      *(undefined8 *)(param_1 + 8)), iVar4 == -1)) {
              *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
            }
            else {
              *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
            }
          }
          else if (bVar5 == 1) {
            *(undefined8 *)(param_1 + 0x28) = 0;
            *(undefined1 *)(param_1 + 0x38) = 0;
            *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
            *(undefined4 *)(param_1 + 0x34) = 0;
            *(undefined1 *)(param_1 + 0x4c) = 0;
          }
          else if (bVar5 == 2) {
            if (cVar3 == ' ') {
              *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 2;
            }
            else if (cVar3 == '#') {
              *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x20;
            }
            else if (cVar3 == '+') {
              *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 1;
            }
            else if (cVar3 == '-') {
              *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 4;
            }
            else if (cVar3 == '0') {
              *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 8;
            }
          }
          else {
            if (bVar5 == 3) {
              if (cVar3 == '*') {
                piVar1 = *(int **)(param_1 + 0x18);
                *(int **)(param_1 + 0x18) = piVar1 + 2;
                iVar4 = *piVar1;
                *(int *)(param_1 + 0x2c) = iVar4;
                if (iVar4 < 0) {
                  *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 4;
                  *(int *)(param_1 + 0x2c) = -iVar4;
                }
LAB_1404845d5:
                cVar3 = '\x01';
              }
              else {
                lVar7 = param_1 + 0x2c;
LAB_14048457f:
                cVar3 = FUN_1404847c8(param_1,lVar7);
              }
            }
            else {
              if (bVar5 == 4) {
                *(undefined4 *)(param_1 + 0x30) = 0;
                goto LAB_140484731;
              }
              if (bVar5 == 5) {
                if (cVar3 == '*') {
                  piVar1 = *(int **)(param_1 + 0x18);
                  *(int **)(param_1 + 0x18) = piVar1 + 2;
                  iVar4 = *piVar1;
                  *(int *)(param_1 + 0x30) = iVar4;
                  if (iVar4 < 0) {
                    *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
                  }
                  goto LAB_1404845d5;
                }
                lVar7 = param_1 + 0x30;
                goto LAB_14048457f;
              }
              if (bVar5 == 6) {
                cVar3 = FUN_140484858(param_1);
              }
              else {
                if (bVar5 != 7) {
                  return 0xffffffff;
                }
                cVar3 = FUN_1404849e0(param_1);
              }
            }
            if (cVar3 == '\0') {
              return 0xffffffff;
            }
          }
LAB_140484731:
          pcVar6 = *(char **)(param_1 + 0x10);
          cVar3 = *pcVar6;
        }
        *(int *)(param_1 + 0x468) = *(int *)(param_1 + 0x468) + 1;
        iVar4 = *(int *)(param_1 + 0x468);
      } while( true );
    }
    lVar7 = *(longlong *)(param_1 + 8);
    *(undefined1 *)(lVar7 + 0x30) = 1;
    *(undefined4 *)(lVar7 + 0x2c) = 0x16;
    lVar7 = *(longlong *)(param_1 + 8);
  }
LAB_1404847ac:
  FUN_1404a2100(0,0,0,0,0,lVar7);
  return 0xffffffff;
}

