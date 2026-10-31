/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14008f2e0 */

undefined4 FUN_14008f2e0(__uint64 *param_1)

{
  ushort uVar1;
  int *piVar2;
  __uint64 _Var3;
  char cVar4;
  int iVar5;
  ulonglong uVar6;
  byte bVar7;
  ushort *puVar8;
  __uint64 *p_Var9;
  longlong *plVar10;
  
  plVar10 = (longlong *)param_1[1];
  if (param_1[0x8c] == 0) {
    *(undefined1 *)(plVar10 + 6) = 1;
    *(undefined4 *)((longlong)plVar10 + 0x2c) = 0x16;
  }
  else {
    puVar8 = (ushort *)param_1[2];
    if (puVar8 != (ushort *)0x0) {
      iVar5 = (int)param_1[0x8d] + 1;
      *(int *)(param_1 + 0x8d) = iVar5;
      do {
        if (iVar5 == 2) {
          return (int)param_1[4];
        }
        *(undefined4 *)(param_1 + 9) = 0;
        *(undefined1 *)((longlong)param_1 + 0x24) = 0;
        uVar1 = *puVar8;
        while( true ) {
          puVar8 = puVar8 + 1;
          param_1[2] = (__uint64)puVar8;
          *(ushort *)((longlong)param_1 + 0x3a) = uVar1;
          if ((uVar1 == 0) || (iVar5 = (int)param_1[4], iVar5 < 0)) break;
          bVar7 = 0;
          if ((ushort)(uVar1 - 0x20) < 0x5b) {
            bVar7 = (&DAT_14010c0c1)[(ulonglong)(uVar1 - 0x20 & 0x7f) * 2];
          }
          bVar7 = (&DAT_14010c0c0)
                  [(ulonglong)((uint)*(byte *)((longlong)param_1 + 0x24) + (uint)bVar7 * 8 & 0x7f) *
                   2];
          *(byte *)((longlong)param_1 + 0x24) = bVar7;
          if (7 < bVar7) {
            _Var3 = param_1[1];
            *(undefined1 *)(_Var3 + 0x30) = 1;
            *(undefined4 *)(_Var3 + 0x2c) = 0x16;
            plVar10 = (longlong *)param_1[1];
            goto LAB_14008f33b;
          }
          if (bVar7 == 0) {
            *(undefined1 *)((longlong)param_1 + 0x4c) = 1;
            _Var3 = param_1[0x8c];
            if (*(longlong *)(_Var3 + 0x10) == *(longlong *)(_Var3 + 8)) {
              if (*(char *)(_Var3 + 0x18) == '\0') {
                *(undefined4 *)(param_1 + 4) = 0xffffffff;
              }
              else {
                *(int *)(param_1 + 4) = iVar5 + 1;
              }
            }
            else {
              *(int *)(param_1 + 4) = iVar5 + 1;
              *(longlong *)(_Var3 + 0x10) = *(longlong *)(_Var3 + 0x10) + 1;
              **(ushort **)param_1[0x8c] = uVar1;
              *(longlong *)param_1[0x8c] = *(longlong *)param_1[0x8c] + 2;
            }
          }
          else if (bVar7 == 1) {
            param_1[5] = 0;
            *(undefined1 *)(param_1 + 7) = 0;
            *(undefined4 *)(param_1 + 6) = 0xffffffff;
            *(undefined4 *)((longlong)param_1 + 0x34) = 0;
            *(undefined1 *)((longlong)param_1 + 0x4c) = 0;
          }
          else if (bVar7 == 2) {
            if (uVar1 == 0x20) {
              *(uint *)(param_1 + 5) = (uint)param_1[5] | 2;
            }
            else if (uVar1 == 0x23) {
              *(uint *)(param_1 + 5) = (uint)param_1[5] | 0x20;
            }
            else if (uVar1 == 0x2b) {
              *(uint *)(param_1 + 5) = (uint)param_1[5] | 1;
            }
            else if (uVar1 == 0x2d) {
              *(uint *)(param_1 + 5) = (uint)param_1[5] | 4;
            }
            else if (uVar1 == 0x30) {
              *(uint *)(param_1 + 5) = (uint)param_1[5] | 8;
            }
          }
          else {
            if (bVar7 == 3) {
              if (uVar1 == 0x2a) {
                piVar2 = (int *)param_1[3];
                param_1[3] = (__uint64)(piVar2 + 2);
                iVar5 = *piVar2;
                *(int *)((longlong)param_1 + 0x2c) = iVar5;
                if (iVar5 < 0) {
                  *(uint *)(param_1 + 5) = (uint)param_1[5] | 4;
                  *(int *)((longlong)param_1 + 0x2c) = -iVar5;
                }
LAB_14008f488:
                cVar4 = '\x01';
              }
              else {
                p_Var9 = (__uint64 *)((longlong)param_1 + 0x2c);
LAB_14008f431:
                cVar4 = FUN_14008f5a4((longlong)param_1,(uint *)p_Var9,(ulonglong)uVar1,iVar5);
              }
            }
            else {
              if (bVar7 == 4) {
                *(undefined4 *)(param_1 + 6) = 0;
                goto LAB_14008f537;
              }
              if (bVar7 == 5) {
                if (uVar1 == 0x2a) {
                  piVar2 = (int *)param_1[3];
                  param_1[3] = (__uint64)(piVar2 + 2);
                  iVar5 = *piVar2;
                  *(int *)(param_1 + 6) = iVar5;
                  if (iVar5 < 0) {
                    *(undefined4 *)(param_1 + 6) = 0xffffffff;
                  }
                  goto LAB_14008f488;
                }
                p_Var9 = param_1 + 6;
                goto LAB_14008f431;
              }
              if (bVar7 == 6) {
                uVar6 = FUN_14008f634(param_1);
                cVar4 = (char)uVar6;
              }
              else {
                if (bVar7 != 7) {
                  return 0xffffffff;
                }
                cVar4 = FUN_14008f7e4(param_1);
              }
            }
            if (cVar4 == '\0') {
              return 0xffffffff;
            }
          }
LAB_14008f537:
          puVar8 = (ushort *)param_1[2];
          uVar1 = *puVar8;
        }
        *(int *)(param_1 + 0x8d) = (int)param_1[0x8d] + 1;
        iVar5 = (int)param_1[0x8d];
      } while( true );
    }
    *(undefined1 *)(plVar10 + 6) = 1;
    *(undefined4 *)((longlong)plVar10 + 0x2c) = 0x16;
    plVar10 = (longlong *)param_1[1];
  }
LAB_14008f33b:
  FUN_1400a1080((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,plVar10);
  return 0xffffffff;
}

