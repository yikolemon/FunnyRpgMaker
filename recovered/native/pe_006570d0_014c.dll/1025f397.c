/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1025f397 */

undefined4 __fastcall FUN_1025f397(int param_1)

{
  int *piVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  char *pcVar5;
  
  cVar2 = FUN_1025f2f9(*(undefined4 *)(param_1 + 8));
  if (cVar2 != '\0') {
    pcVar5 = *(char **)(param_1 + 0xc);
    if (pcVar5 != (char *)0x0) {
      iVar4 = *(int *)(param_1 + 0x450) + 1;
      *(int *)(param_1 + 0x450) = iVar4;
      do {
        if (iVar4 == 2) {
          return *(undefined4 *)(param_1 + 0x14);
        }
        *(undefined4 *)(param_1 + 0x34) = 0;
        *(undefined1 *)(param_1 + 0x18) = 0;
        cVar2 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        *(char **)(param_1 + 0xc) = pcVar5;
        *(char *)(param_1 + 0x2d) = cVar2;
        while ((cVar2 != '\0' && (-1 < *(int *)(param_1 + 0x14)))) {
          bVar3 = FUN_1025ffe8(cVar2,*(undefined1 *)(param_1 + 0x18));
          *(byte *)(param_1 + 0x18) = bVar3;
          if (7 < bVar3) {
            iVar4 = *(int *)(param_1 + 8);
            *(undefined1 *)(iVar4 + 0x1c) = 1;
            *(undefined4 *)(iVar4 + 0x18) = 0x16;
            goto LAB_1025f3cd;
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
            if (iVar4 != 0) {
              FUN_1025f258(cVar2,param_1 + 0x14,*(undefined4 *)(param_1 + 8));
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
            FUN_1025f258(cVar2,param_1 + 0x14,*(undefined4 *)(param_1 + 8));
            break;
          case 1:
            *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
            *(undefined4 *)(param_1 + 0x20) = 0;
            *(undefined1 *)(param_1 + 0x2c) = 0;
            *(undefined4 *)(param_1 + 0x1c) = 0;
            *(undefined4 *)(param_1 + 0x28) = 0;
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
            if (cVar2 != '*') {
              iVar4 = param_1 + 0x20;
              goto LAB_1025f52d;
            }
            piVar1 = *(int **)(param_1 + 0x10);
            *(int **)(param_1 + 0x10) = piVar1 + 1;
            iVar4 = *piVar1;
            *(int *)(param_1 + 0x20) = iVar4;
            if (iVar4 < 0) {
              *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 4;
              *(int *)(param_1 + 0x20) = -iVar4;
            }
LAB_1025f552:
            cVar2 = '\x01';
            goto LAB_1025f58e;
          case 4:
            *(undefined4 *)(param_1 + 0x24) = 0;
            break;
          case 5:
            if (cVar2 == '*') {
              piVar1 = *(int **)(param_1 + 0x10);
              *(int **)(param_1 + 0x10) = piVar1 + 1;
              iVar4 = *piVar1;
              *(int *)(param_1 + 0x24) = iVar4;
              if (iVar4 < 0) {
                *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
              }
              goto LAB_1025f552;
            }
            iVar4 = param_1 + 0x24;
LAB_1025f52d:
            cVar2 = FUN_1025f63f(iVar4);
            goto LAB_1025f58e;
          case 6:
            cVar2 = FUN_1025f6b7();
            goto LAB_1025f58e;
          case 7:
            cVar2 = FUN_1025f810();
LAB_1025f58e:
            if (cVar2 == '\0') {
              return 0xffffffff;
            }
            break;
          default:
            goto LAB_1025f3e0;
          }
          cVar2 = **(char **)(param_1 + 0xc);
          pcVar5 = *(char **)(param_1 + 0xc) + 1;
          *(char **)(param_1 + 0xc) = pcVar5;
          *(char *)(param_1 + 0x2d) = cVar2;
        }
        *(int *)(param_1 + 0x450) = *(int *)(param_1 + 0x450) + 1;
        iVar4 = *(int *)(param_1 + 0x450);
      } while( true );
    }
    iVar4 = *(int *)(param_1 + 8);
    *(undefined1 *)(iVar4 + 0x1c) = 1;
    *(undefined4 *)(iVar4 + 0x18) = 0x16;
LAB_1025f3cd:
    FUN_10274034(0,0,0,0,0,*(undefined4 *)(param_1 + 8));
  }
LAB_1025f3e0:
  return 0xffffffff;
}

