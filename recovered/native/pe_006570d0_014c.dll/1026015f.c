/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026015f */

undefined4 __fastcall FUN_1026015f(int param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  char *pcVar6;
  bool bVar7;
  undefined4 uStack_8;
  
  cVar3 = FUN_102600bf(*(undefined4 *)(param_1 + 8));
  if (cVar3 != '\0') {
    pcVar6 = *(char **)(param_1 + 0xc);
    if (pcVar6 != (char *)0x0) {
      iVar5 = *(int *)(param_1 + 0x450) + 1;
      *(int *)(param_1 + 0x450) = iVar5;
      iVar2 = param_1;
      do {
        if (iVar5 == 2) {
          return *(undefined4 *)(param_1 + 0x14);
        }
        *(undefined4 *)(param_1 + 0x34) = 0;
        *(undefined1 *)(param_1 + 0x18) = 0;
        cVar3 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        uStack_8._0_3_ = (undefined3)iVar2;
        uStack_8 = CONCAT13(cVar3,(undefined3)uStack_8);
        *(char **)(param_1 + 0xc) = pcVar6;
        *(char *)(param_1 + 0x2d) = cVar3;
        iVar2 = uStack_8;
        while ((cVar3 != '\0' && (-1 < *(int *)(param_1 + 0x14)))) {
          uStack_8._0_3_ = (undefined3)iVar2;
          bVar4 = FUN_1025ffe8(CONCAT31((undefined3)uStack_8,cVar3),*(undefined1 *)(param_1 + 0x18))
          ;
          *(byte *)(param_1 + 0x18) = bVar4;
          if (7 < bVar4) {
            iVar5 = *(int *)(param_1 + 8);
            *(undefined1 *)(iVar5 + 0x1c) = 1;
            *(undefined4 *)(iVar5 + 0x18) = 0x16;
            goto LAB_10260194;
          }
          uStack_8._3_1_ = (char)((uint)iVar2 >> 0x18);
          uStack_8 = iVar2;
          switch(bVar4) {
          case 0:
            iVar5 = *(int *)(param_1 + 8);
            *(undefined1 *)(param_1 + 0x38) = 0;
            if (*(char *)(iVar5 + 0x14) == '\0') {
              FUN_1025ec50();
            }
            cVar3 = *(char *)(param_1 + 0x2d);
            uStack_8 = CONCAT13(cVar3,(undefined3)uStack_8);
            iVar5 = ___acrt_locale_get_ctype_array_value
                              (**(undefined4 **)(iVar5 + 0xc),(int)cVar3,0x8000);
            piVar1 = (int *)(param_1 + 0x448);
            if (iVar5 != 0) {
              iVar5 = *piVar1;
              if (*(int *)(iVar5 + 8) == *(int *)(iVar5 + 4)) {
                if (*(char *)(iVar5 + 0xc) == '\0') {
                  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
                }
                else {
                  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
                }
              }
              else {
                *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
                *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
                **(char **)*piVar1 = cVar3;
                *(int *)*piVar1 = *(int *)*piVar1 + 1;
              }
              cVar3 = **(char **)(param_1 + 0xc);
              *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
              *(char *)(param_1 + 0x2d) = cVar3;
              if (cVar3 == '\0') {
                iVar5 = *(int *)(param_1 + 8);
                *(undefined1 *)(iVar5 + 0x1c) = 1;
                *(undefined4 *)(iVar5 + 0x18) = 0x16;
                FUN_10274034(0,0,0,0,0,*(undefined4 *)(param_1 + 8));
                iVar5 = *(int *)(param_1 + 8);
                *(undefined1 *)(iVar5 + 0x1c) = 1;
                *(undefined4 *)(iVar5 + 0x18) = 0x16;
                FUN_10274034(0,0,0,0,0,*(undefined4 *)(param_1 + 8));
                return 0xffffffff;
              }
            }
            iVar5 = *piVar1;
            if (*(int *)(iVar5 + 8) == *(int *)(iVar5 + 4)) {
              if (*(char *)(iVar5 + 0xc) == '\0') {
                *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
              }
              else {
                *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
              }
            }
            else {
              *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
              *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
              **(char **)*piVar1 = cVar3;
              *(int *)*piVar1 = *(int *)*piVar1 + 1;
            }
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
            if (uStack_8._3_1_ == ' ') {
              *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 2;
            }
            else if (uStack_8._3_1_ == '#') {
              *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 0x20;
            }
            else if (uStack_8._3_1_ == '+') {
              *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 1;
            }
            else if (uStack_8._3_1_ == '-') {
              *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 4;
            }
            else {
              bVar7 = uStack_8._3_1_ == '0';
              if (bVar7) {
                *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 8;
              }
            }
            break;
          case 3:
            if (uStack_8._3_1_ != '*') {
              iVar5 = param_1 + 0x20;
              goto LAB_10260360;
            }
            piVar1 = *(int **)(param_1 + 0x10);
            *(int **)(param_1 + 0x10) = piVar1 + 1;
            iVar5 = *piVar1;
            *(int *)(param_1 + 0x20) = iVar5;
            if (iVar5 < 0) {
              *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 4;
              *(int *)(param_1 + 0x20) = -iVar5;
            }
LAB_10260385:
            cVar3 = '\x01';
            goto LAB_102603c1;
          case 4:
            *(undefined4 *)(param_1 + 0x24) = 0;
            break;
          case 5:
            if (uStack_8._3_1_ == '*') {
              piVar1 = *(int **)(param_1 + 0x10);
              *(int **)(param_1 + 0x10) = piVar1 + 1;
              iVar5 = *piVar1;
              *(int *)(param_1 + 0x24) = iVar5;
              if (iVar5 < 0) {
                *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
              }
              goto LAB_10260385;
            }
            iVar5 = param_1 + 0x24;
LAB_10260360:
            cVar3 = FUN_1025f63f(iVar5);
            goto LAB_102603c1;
          case 6:
            cVar3 = FUN_10260433();
            goto LAB_102603c1;
          case 7:
            cVar3 = FUN_1026058c();
LAB_102603c1:
            if (cVar3 == '\0') {
              return 0xffffffff;
            }
            break;
          default:
            goto LAB_102601a7;
          }
          cVar3 = **(char **)(param_1 + 0xc);
          pcVar6 = *(char **)(param_1 + 0xc) + 1;
          *(char **)(param_1 + 0xc) = pcVar6;
          uStack_8 = CONCAT13(cVar3,(undefined3)uStack_8);
          *(char *)(param_1 + 0x2d) = cVar3;
          iVar2 = uStack_8;
        }
        *(int *)(param_1 + 0x450) = *(int *)(param_1 + 0x450) + 1;
        iVar5 = *(int *)(param_1 + 0x450);
      } while( true );
    }
    iVar5 = *(int *)(param_1 + 8);
    *(undefined1 *)(iVar5 + 0x1c) = 1;
    *(undefined4 *)(iVar5 + 0x18) = 0x16;
LAB_10260194:
    FUN_10274034(0,0,0,0,0,*(undefined4 *)(param_1 + 8));
  }
LAB_102601a7:
  return 0xffffffff;
}

