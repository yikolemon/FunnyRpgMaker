/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102624f5 */

undefined4 __fastcall FUN_102624f5(int param_1)

{
  int *piVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  
  cVar2 = FUN_102600bf(*(undefined4 *)(param_1 + 8));
  if (cVar2 != '\0') {
    if (*(int *)(param_1 + 0xc) != 0) {
      iVar4 = *(int *)(param_1 + 0x450) + 1;
      *(int *)(param_1 + 0x450) = iVar4;
      do {
        if (iVar4 == 2) {
          return *(undefined4 *)(param_1 + 0x14);
        }
        *(undefined4 *)(param_1 + 0x34) = 0;
        *(undefined1 *)(param_1 + 0x18) = 0;
        cVar2 = **(char **)(param_1 + 0xc);
        *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
        *(char *)(param_1 + 0x2d) = cVar2;
        while ((cVar2 != '\0' && (-1 < *(int *)(param_1 + 0x14)))) {
          bVar3 = FUN_102627dd(cVar2,*(undefined1 *)(param_1 + 0x18));
          *(byte *)(param_1 + 0x18) = bVar3;
          if (7 < bVar3) {
            iVar4 = *(int *)(param_1 + 8);
            *(undefined1 *)(iVar4 + 0x1c) = 1;
            *(undefined4 *)(iVar4 + 0x18) = 0x16;
            uVar5 = *(undefined4 *)(param_1 + 8);
            goto LAB_102627b1;
          }
          switch(bVar3) {
          case 0:
            iVar4 = *(int *)(param_1 + 8);
            *(undefined1 *)(param_1 + 0x38) = 0;
            if (*(char *)(iVar4 + 0x14) == '\0') {
              FUN_1025ec50();
            }
            cVar2 = *(char *)(param_1 + 0x2d);
            iVar4 = ___acrt_locale_get_ctype_array_value
                              (**(undefined4 **)(iVar4 + 0xc),(int)cVar2,0x8000);
            piVar1 = (int *)(param_1 + 0x448);
            if (iVar4 != 0) {
              iVar4 = *piVar1;
              if (*(int *)(iVar4 + 8) == *(int *)(iVar4 + 4)) {
                if (*(char *)(iVar4 + 0xc) == '\0') {
                  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
                }
                else {
                  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
                }
              }
              else {
                *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
                *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
                **(char **)*piVar1 = cVar2;
                *(int *)*piVar1 = *(int *)*piVar1 + 1;
              }
              cVar2 = **(char **)(param_1 + 0xc);
              *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
              *(char *)(param_1 + 0x2d) = cVar2;
              if (cVar2 == '\0') {
                iVar4 = *(int *)(param_1 + 8);
                *(undefined1 *)(iVar4 + 0x1c) = 1;
                *(undefined4 *)(iVar4 + 0x18) = 0x16;
                FUN_10274034(0,0,0,0,0,*(undefined4 *)(param_1 + 8));
                iVar4 = *(int *)(param_1 + 8);
                *(undefined1 *)(iVar4 + 0x1c) = 1;
                *(undefined4 *)(iVar4 + 0x18) = 0x16;
                FUN_10274034(0,0,0,0,0,*(undefined4 *)(param_1 + 8));
                return 0xffffffff;
              }
            }
            iVar4 = *piVar1;
            if (*(int *)(iVar4 + 8) == *(int *)(iVar4 + 4)) {
              if (*(char *)(iVar4 + 0xc) == '\0') {
                *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
              }
              else {
                *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
              }
            }
            else {
              *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
              *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
              **(char **)*piVar1 = cVar2;
              *(int *)*piVar1 = *(int *)*piVar1 + 1;
            }
            break;
          case 1:
            *(undefined4 *)(param_1 + 0x20) = 0;
            *(undefined4 *)(param_1 + 0x1c) = 0;
            *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
            *(undefined4 *)(param_1 + 0x28) = 0;
            *(undefined1 *)(param_1 + 0x2c) = 0;
            *(undefined1 *)(param_1 + 0x38) = 0;
            break;
          case 2:
            if (cVar2 == ' ') {
              *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 2;
            }
            else if (cVar2 == '#') {
              *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 0x20;
            }
            else if (cVar2 == '+') {
              *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 1;
            }
            else if (cVar2 == '-') {
              *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 4;
            }
            else if (cVar2 == '0') {
              *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 8;
            }
            break;
          case 3:
            if (cVar2 == '*') {
              piVar1 = *(int **)(param_1 + 0x10);
              *(int **)(param_1 + 0x10) = piVar1 + 1;
              iVar4 = *piVar1;
              *(int *)(param_1 + 0x20) = iVar4;
              if (iVar4 < 0) {
                *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 4;
                *(int *)(param_1 + 0x20) = -iVar4;
              }
              goto LAB_102626c4;
            }
            iVar4 = param_1 + 0x20;
LAB_1026269f:
            cVar2 = FUN_1025f63f(iVar4);
            goto LAB_10262700;
          case 4:
            *(undefined4 *)(param_1 + 0x24) = 0;
            break;
          case 5:
            if (cVar2 != '*') {
              iVar4 = param_1 + 0x24;
              goto LAB_1026269f;
            }
            piVar1 = *(int **)(param_1 + 0x10);
            *(int **)(param_1 + 0x10) = piVar1 + 1;
            iVar4 = *piVar1;
            *(int *)(param_1 + 0x24) = iVar4;
            if (iVar4 < 0) {
              *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
            }
LAB_102626c4:
            cVar2 = '\x01';
            goto LAB_10262700;
          case 6:
            cVar2 = FUN_10260433();
            goto LAB_10262700;
          case 7:
            cVar2 = FUN_1026058c();
LAB_10262700:
            if (cVar2 == '\0') {
              return 0xffffffff;
            }
            break;
          default:
            goto LAB_10262777;
          }
          cVar2 = **(char **)(param_1 + 0xc);
          *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
          *(char *)(param_1 + 0x2d) = cVar2;
        }
        if ((*(char *)(param_1 + 0x18) != '\0') && (*(char *)(param_1 + 0x18) != '\a')) break;
        *(int *)(param_1 + 0x450) = *(int *)(param_1 + 0x450) + 1;
        iVar4 = *(int *)(param_1 + 0x450);
      } while( true );
    }
    iVar4 = *(int *)(param_1 + 8);
    *(undefined1 *)(iVar4 + 0x1c) = 1;
    *(undefined4 *)(iVar4 + 0x18) = 0x16;
    uVar5 = *(undefined4 *)(param_1 + 8);
LAB_102627b1:
    FUN_10274034(0,0,0,0,0,uVar5);
  }
LAB_10262777:
  return 0xffffffff;
}

