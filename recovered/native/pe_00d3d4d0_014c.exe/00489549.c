/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00489549 */

undefined4 __fastcall FUN_00489549(__uint64 *param_1)

{
  ushort uVar1;
  int *piVar2;
  __uint64 _Var3;
  bool bVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  __uint64 *p_Var8;
  undefined4 uVar9;
  ushort *puVar10;
  uint uVar11;
  
  bVar4 = FUN_0048935d(param_1 + 0x89,*(int **)(param_1 + 1));
  if (bVar4) {
    puVar10 = *(ushort **)((int)param_1 + 0xc);
    if (puVar10 != (ushort *)0x0) {
      iVar7 = (int)param_1[0x8a] + 1;
      *(int *)(param_1 + 0x8a) = iVar7;
      do {
        if (iVar7 == 2) {
          return *(undefined4 *)((int)param_1 + 0x14);
        }
        *(undefined4 *)((int)param_1 + 0x34) = 0;
        *(undefined1 *)(param_1 + 3) = 0;
        uVar1 = *puVar10;
        puVar10 = puVar10 + 1;
        *(ushort **)((int)param_1 + 0xc) = puVar10;
        *(ushort *)((int)param_1 + 0x2e) = uVar1;
        while ((uVar1 != 0 && (uVar11 = (uint)uVar1, -1 < *(int *)((int)param_1 + 0x14)))) {
          bVar5 = FUN_0048a378(uVar11,(byte)param_1[3]);
          *(byte *)(param_1 + 3) = bVar5;
          if (7 < bVar5) {
            _Var3 = param_1[1];
            *(undefined1 *)((int)_Var3 + 0x1c) = 1;
            *(undefined4 *)((int)_Var3 + 0x18) = 0x16;
            goto LAB_00489579;
          }
          switch(bVar5) {
          case 0:
            *(undefined1 *)(param_1 + 7) = 1;
            iVar7 = (int)param_1[0x89];
            if (*(int *)(iVar7 + 8) == *(int *)(iVar7 + 4)) {
              if (*(char *)(iVar7 + 0xc) == '\0') {
                iVar7 = -1;
              }
              else {
                iVar7 = *(int *)((int)param_1 + 0x14) + 1;
              }
              *(int *)((int)param_1 + 0x14) = iVar7;
            }
            else {
              *(int *)((int)param_1 + 0x14) = *(int *)((int)param_1 + 0x14) + 1;
              *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
              *(ushort *)**(undefined4 **)(param_1 + 0x89) = uVar1;
              piVar2 = *(int **)(param_1 + 0x89);
              *piVar2 = *piVar2 + 2;
            }
            break;
          case 1:
            *(undefined4 *)((int)param_1 + 0x24) = 0xffffffff;
            *(undefined4 *)(param_1 + 4) = 0;
            *(undefined1 *)((int)param_1 + 0x2c) = 0;
            *(undefined4 *)((int)param_1 + 0x1c) = 0;
            *(undefined4 *)(param_1 + 5) = 0;
            *(undefined1 *)(param_1 + 7) = 0;
            break;
          case 2:
            if (uVar11 == 0x20) {
              *(uint *)((int)param_1 + 0x1c) = *(uint *)((int)param_1 + 0x1c) | 2;
            }
            else if (uVar11 == 0x23) {
              *(uint *)((int)param_1 + 0x1c) = *(uint *)((int)param_1 + 0x1c) | 0x20;
            }
            else if (uVar11 == 0x2b) {
              *(uint *)((int)param_1 + 0x1c) = *(uint *)((int)param_1 + 0x1c) | 1;
            }
            else if (uVar11 == 0x2d) {
              *(uint *)((int)param_1 + 0x1c) = *(uint *)((int)param_1 + 0x1c) | 4;
            }
            else if (uVar11 == 0x30) {
              *(uint *)((int)param_1 + 0x1c) = *(uint *)((int)param_1 + 0x1c) | 8;
            }
            break;
          case 3:
            if (uVar1 != 0x2a) {
              p_Var8 = param_1 + 4;
              goto LAB_004896ac;
            }
            piVar2 = *(int **)(param_1 + 2);
            *(int **)(param_1 + 2) = piVar2 + 1;
            iVar7 = *piVar2;
            *(int *)(param_1 + 4) = iVar7;
            if (iVar7 < 0) {
              *(uint *)((int)param_1 + 0x1c) = *(uint *)((int)param_1 + 0x1c) | 4;
              *(int *)(param_1 + 4) = -iVar7;
            }
LAB_004896d1:
            cVar6 = '\x01';
            goto LAB_0048970f;
          case 4:
            *(undefined4 *)((int)param_1 + 0x24) = 0;
            break;
          case 5:
            if (uVar1 == 0x2a) {
              piVar2 = *(int **)(param_1 + 2);
              *(int **)(param_1 + 2) = piVar2 + 1;
              iVar7 = *piVar2;
              *(int *)((int)param_1 + 0x24) = iVar7;
              if (iVar7 < 0) {
                *(undefined4 *)((int)param_1 + 0x24) = 0xffffffff;
              }
              goto LAB_004896d1;
            }
            p_Var8 = (__uint64 *)((int)param_1 + 0x24);
LAB_004896ac:
            uVar9 = FUN_00489785(param_1,(uint *)p_Var8);
            cVar6 = (char)uVar9;
            goto LAB_0048970f;
          case 6:
            uVar11 = FUN_004897ff(param_1);
            cVar6 = (char)uVar11;
            goto LAB_0048970f;
          case 7:
            cVar6 = FUN_00489989(param_1);
LAB_0048970f:
            if (cVar6 == '\0') {
              return 0xffffffff;
            }
            break;
          default:
            goto LAB_0048958c;
          }
          uVar1 = **(ushort **)((int)param_1 + 0xc);
          puVar10 = *(ushort **)((int)param_1 + 0xc) + 1;
          *(ushort **)((int)param_1 + 0xc) = puVar10;
          *(ushort *)((int)param_1 + 0x2e) = uVar1;
        }
        *(int *)(param_1 + 0x8a) = (int)param_1[0x8a] + 1;
        iVar7 = (int)param_1[0x8a];
      } while( true );
    }
    _Var3 = param_1[1];
    *(undefined1 *)((int)_Var3 + 0x1c) = 1;
    *(undefined4 *)((int)_Var3 + 0x18) = 0x16;
LAB_00489579:
    FUN_00495e14((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,*(int **)(param_1 + 1));
  }
LAB_0048958c:
  return 0xffffffff;
}

