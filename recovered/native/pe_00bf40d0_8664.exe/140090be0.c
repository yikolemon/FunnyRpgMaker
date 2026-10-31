/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140090be0 */

undefined4 FUN_140090be0(ulonglong *param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  byte bVar5;
  ulonglong *puVar6;
  longlong *plVar7;
  
  plVar7 = (longlong *)param_1[1];
  if (param_1[0x8c] == 0) {
    *(undefined1 *)(plVar7 + 6) = 1;
    *(undefined4 *)((longlong)plVar7 + 0x2c) = 0x16;
  }
  else {
    if (param_1[2] != 0) {
      iVar3 = (int)param_1[0x8d] + 1;
      *(int *)(param_1 + 0x8d) = iVar3;
      do {
        if (iVar3 == 2) {
          return (int)param_1[4];
        }
        *(undefined4 *)(param_1 + 9) = 0;
        *(undefined1 *)((longlong)param_1 + 0x24) = 0;
        while( true ) {
          cVar2 = *(char *)param_1[2];
          param_1[2] = (ulonglong)((char *)param_1[2] + 1);
          *(char *)((longlong)param_1 + 0x39) = cVar2;
          if ((cVar2 == '\0') || ((int)param_1[4] < 0)) break;
          bVar5 = 0;
          if ((byte)(cVar2 - 0x20U) < 0x5b) {
            bVar5 = (&DAT_14010c1c1)[(ulonglong)((int)cVar2 - 0x20U & 0x7f) * 2];
          }
          bVar5 = (&DAT_14010c1c0)
                  [(ulonglong)((uint)bVar5 * 9 + (uint)*(byte *)((longlong)param_1 + 0x24) & 0x7f) *
                   2];
          *(byte *)((longlong)param_1 + 0x24) = bVar5;
          if (7 < bVar5) goto LAB_140090f2a;
          if (bVar5 == 0) {
            plVar7 = (longlong *)param_1[1];
            *(undefined1 *)((longlong)param_1 + 0x4c) = 0;
            if ((char)plVar7[5] == '\0') {
              FUN_14008f0b0(plVar7);
            }
            cVar2 = *(char *)((longlong)param_1 + 0x39);
            if ((-2 < cVar2) &&
               ((*(ushort *)(*(longlong *)plVar7[3] + (longlong)cVar2 * 2) & 0x8000) != 0)) {
              uVar4 = param_1[0x8c];
              if (*(longlong *)(uVar4 + 0x10) == *(longlong *)(uVar4 + 8)) {
                if (*(char *)(uVar4 + 0x18) == '\0') {
                  *(undefined4 *)(param_1 + 4) = 0xffffffff;
                }
                else {
                  *(int *)(param_1 + 4) = (int)param_1[4] + 1;
                }
              }
              else {
                *(int *)(param_1 + 4) = (int)param_1[4] + 1;
                *(longlong *)(uVar4 + 0x10) = *(longlong *)(uVar4 + 0x10) + 1;
                **(char **)param_1[0x8c] = cVar2;
                *(longlong *)param_1[0x8c] = *(longlong *)param_1[0x8c] + 1;
              }
              cVar2 = *(char *)param_1[2];
              param_1[2] = (ulonglong)((char *)param_1[2] + 1);
              *(char *)((longlong)param_1 + 0x39) = cVar2;
              if (cVar2 == '\0') {
                uVar4 = param_1[1];
                *(undefined1 *)(uVar4 + 0x30) = 1;
                *(undefined4 *)(uVar4 + 0x2c) = 0x16;
                FUN_1400a1080((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,
                              (longlong *)param_1[1]);
                goto LAB_140090f2a;
              }
            }
            uVar4 = param_1[0x8c];
            if (*(longlong *)(uVar4 + 0x10) == *(longlong *)(uVar4 + 8)) {
              if (*(char *)(uVar4 + 0x18) == '\0') {
                *(undefined4 *)(param_1 + 4) = 0xffffffff;
              }
              else {
                *(int *)(param_1 + 4) = (int)param_1[4] + 1;
              }
            }
            else {
              *(int *)(param_1 + 4) = (int)param_1[4] + 1;
              *(longlong *)(uVar4 + 0x10) = *(longlong *)(uVar4 + 0x10) + 1;
              **(char **)param_1[0x8c] = cVar2;
              *(longlong *)param_1[0x8c] = *(longlong *)param_1[0x8c] + 1;
            }
          }
          else if (bVar5 == 1) {
            param_1[5] = 0;
            *(undefined1 *)(param_1 + 7) = 0;
            *(undefined4 *)(param_1 + 6) = 0xffffffff;
            *(undefined4 *)((longlong)param_1 + 0x34) = 0;
            *(undefined1 *)((longlong)param_1 + 0x4c) = 0;
          }
          else if (bVar5 == 2) {
            if (cVar2 == ' ') {
              *(uint *)(param_1 + 5) = (uint)param_1[5] | 2;
            }
            else if (cVar2 == '#') {
              *(uint *)(param_1 + 5) = (uint)param_1[5] | 0x20;
            }
            else if (cVar2 == '+') {
              *(uint *)(param_1 + 5) = (uint)param_1[5] | 1;
            }
            else if (cVar2 == '-') {
              *(uint *)(param_1 + 5) = (uint)param_1[5] | 4;
            }
            else if (cVar2 == '0') {
              *(uint *)(param_1 + 5) = (uint)param_1[5] | 8;
            }
          }
          else if (bVar5 == 3) {
            if (cVar2 == '*') {
              piVar1 = (int *)param_1[3];
              param_1[3] = (ulonglong)(piVar1 + 2);
              iVar3 = *piVar1;
              *(int *)((longlong)param_1 + 0x2c) = iVar3;
              if (iVar3 < 0) {
                *(uint *)(param_1 + 5) = (uint)param_1[5] | 4;
                *(int *)((longlong)param_1 + 0x2c) = -iVar3;
              }
LAB_140090d6e:
              cVar2 = '\x01';
            }
            else {
              puVar6 = (ulonglong *)((longlong)param_1 + 0x2c);
LAB_140090d19:
              cVar2 = FUN_140090f48((longlong)param_1,(uint *)puVar6);
            }
LAB_140090d70:
            if (cVar2 == '\0') {
              return 0xffffffff;
            }
          }
          else {
            if (bVar5 != 4) {
              if (bVar5 == 5) {
                if (cVar2 == '*') {
                  piVar1 = (int *)param_1[3];
                  param_1[3] = (ulonglong)(piVar1 + 2);
                  iVar3 = *piVar1;
                  *(int *)(param_1 + 6) = iVar3;
                  if (iVar3 < 0) {
                    *(undefined4 *)(param_1 + 6) = 0xffffffff;
                  }
                  goto LAB_140090d6e;
                }
                puVar6 = param_1 + 6;
                goto LAB_140090d19;
              }
              if (bVar5 == 6) {
                uVar4 = FUN_140090fd8(param_1);
                cVar2 = (char)uVar4;
              }
              else {
                if (bVar5 != 7) {
                  return 0xffffffff;
                }
                cVar2 = FUN_140091160(param_1);
              }
              goto LAB_140090d70;
            }
            *(undefined4 *)(param_1 + 6) = 0;
          }
        }
        if ((*(char *)((longlong)param_1 + 0x24) != '\0') &&
           (*(char *)((longlong)param_1 + 0x24) != '\a')) {
LAB_140090f2a:
          uVar4 = param_1[1];
          *(undefined1 *)(uVar4 + 0x30) = 1;
          *(undefined4 *)(uVar4 + 0x2c) = 0x16;
          plVar7 = (longlong *)param_1[1];
          goto LAB_140090c38;
        }
        *(int *)(param_1 + 0x8d) = (int)param_1[0x8d] + 1;
        iVar3 = (int)param_1[0x8d];
      } while( true );
    }
    *(undefined1 *)(plVar7 + 6) = 1;
    *(undefined4 *)((longlong)plVar7 + 0x2c) = 0x16;
    plVar7 = (longlong *)param_1[1];
  }
LAB_140090c38:
  FUN_1400a1080((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,plVar7);
  return 0xffffffff;
}

