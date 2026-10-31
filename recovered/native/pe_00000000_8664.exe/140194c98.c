/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140194c98 */

undefined4 FUN_140194c98(longlong param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  byte bVar4;
  char *pcVar5;
  longlong lVar6;
  
  lVar6 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 0x460) == 0) {
    *(undefined1 *)(lVar6 + 0x30) = 1;
    *(undefined4 *)(lVar6 + 0x2c) = 0x16;
  }
  else {
    pcVar5 = *(char **)(param_1 + 0x10);
    if (pcVar5 != (char *)0x0) {
      iVar3 = *(int *)(param_1 + 0x468) + 1;
      *(int *)(param_1 + 0x468) = iVar3;
      do {
        if (iVar3 == 2) {
          return *(undefined4 *)(param_1 + 0x20);
        }
        *(undefined4 *)(param_1 + 0x48) = 0;
        *(undefined1 *)(param_1 + 0x24) = 0;
        cVar2 = *pcVar5;
        while( true ) {
          pcVar5 = pcVar5 + 1;
          *(char **)(param_1 + 0x10) = pcVar5;
          *(char *)(param_1 + 0x39) = cVar2;
          if ((cVar2 == '\0') || (*(int *)(param_1 + 0x20) < 0)) break;
          bVar4 = 0;
          if ((byte)(cVar2 - 0x20U) < 0x5b) {
            bVar4 = (&DAT_140eb3331)[(ulonglong)((int)cVar2 - 0x20U & 0x7f) * 2];
          }
          bVar4 = (&DAT_140eb3330)
                  [(ulonglong)((uint)*(byte *)(param_1 + 0x24) + (uint)bVar4 * 8 & 0x7f) * 2];
          *(byte *)(param_1 + 0x24) = bVar4;
          if (7 < bVar4) {
LAB_140194fe9:
            lVar6 = *(longlong *)(param_1 + 8);
            *(undefined1 *)(lVar6 + 0x30) = 1;
            *(undefined4 *)(lVar6 + 0x2c) = 0x16;
            lVar6 = *(longlong *)(param_1 + 8);
            goto LAB_140194cf3;
          }
          if (bVar4 == 0) {
            lVar6 = *(longlong *)(param_1 + 8);
            *(undefined1 *)(param_1 + 0x4c) = 0;
            if (*(char *)(lVar6 + 0x28) == '\0') {
              FUN_140193950(lVar6);
            }
            cVar2 = *(char *)(param_1 + 0x39);
            if ((-2 < cVar2) &&
               ((*(ushort *)(**(longlong **)(lVar6 + 0x18) + (longlong)cVar2 * 2) & 0x8000) != 0)) {
              lVar6 = *(longlong *)(param_1 + 0x460);
              if (*(longlong *)(lVar6 + 0x10) == *(longlong *)(lVar6 + 8)) {
                if (*(char *)(lVar6 + 0x18) == '\0') {
                  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
                }
                else {
                  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
                }
              }
              else {
                *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
                *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 1;
                *(char *)**(undefined8 **)(param_1 + 0x460) = cVar2;
                **(longlong **)(param_1 + 0x460) = **(longlong **)(param_1 + 0x460) + 1;
              }
              cVar2 = **(char **)(param_1 + 0x10);
              *(char **)(param_1 + 0x10) = *(char **)(param_1 + 0x10) + 1;
              *(char *)(param_1 + 0x39) = cVar2;
              if (cVar2 == '\0') {
                lVar6 = *(longlong *)(param_1 + 8);
                *(undefined1 *)(lVar6 + 0x30) = 1;
                *(undefined4 *)(lVar6 + 0x2c) = 0x16;
                FUN_1401ae820(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
                goto LAB_140194fe9;
              }
            }
            lVar6 = *(longlong *)(param_1 + 0x460);
            if (*(longlong *)(lVar6 + 0x10) == *(longlong *)(lVar6 + 8)) {
              if (*(char *)(lVar6 + 0x18) == '\0') {
                *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
              }
              else {
                *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
              }
            }
            else {
              *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
              *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 1;
              *(char *)**(undefined8 **)(param_1 + 0x460) = cVar2;
              **(longlong **)(param_1 + 0x460) = **(longlong **)(param_1 + 0x460) + 1;
            }
          }
          else if (bVar4 == 1) {
            *(undefined8 *)(param_1 + 0x28) = 0;
            *(undefined1 *)(param_1 + 0x38) = 0;
            *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
            *(undefined4 *)(param_1 + 0x34) = 0;
            *(undefined1 *)(param_1 + 0x4c) = 0;
          }
          else if (bVar4 == 2) {
            if (cVar2 == ' ') {
              *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 2;
            }
            else if (cVar2 == '#') {
              *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x20;
            }
            else if (cVar2 == '+') {
              *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 1;
            }
            else if (cVar2 == '-') {
              *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 4;
            }
            else if (cVar2 == '0') {
              *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 8;
            }
          }
          else {
            if (bVar4 == 3) {
              if (cVar2 == '*') {
                piVar1 = *(int **)(param_1 + 0x18);
                *(int **)(param_1 + 0x18) = piVar1 + 2;
                iVar3 = *piVar1;
                *(int *)(param_1 + 0x2c) = iVar3;
                if (iVar3 < 0) {
                  *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 4;
                  *(int *)(param_1 + 0x2c) = -iVar3;
                }
LAB_140194e2f:
                cVar2 = '\x01';
              }
              else {
                lVar6 = param_1 + 0x2c;
LAB_140194dd9:
                cVar2 = FUN_140193e88(param_1,lVar6);
              }
            }
            else {
              if (bVar4 == 4) {
                *(undefined4 *)(param_1 + 0x30) = 0;
                goto LAB_140194f70;
              }
              if (bVar4 == 5) {
                if (cVar2 == '*') {
                  piVar1 = *(int **)(param_1 + 0x18);
                  *(int **)(param_1 + 0x18) = piVar1 + 2;
                  iVar3 = *piVar1;
                  *(int *)(param_1 + 0x30) = iVar3;
                  if (iVar3 < 0) {
                    *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
                  }
                  goto LAB_140194e2f;
                }
                lVar6 = param_1 + 0x30;
                goto LAB_140194dd9;
              }
              if (bVar4 == 6) {
                cVar2 = FUN_140195008(param_1);
              }
              else {
                if (bVar4 != 7) {
                  return 0xffffffff;
                }
                cVar2 = FUN_140195190(param_1);
              }
            }
            if (cVar2 == '\0') {
              return 0xffffffff;
            }
          }
LAB_140194f70:
          pcVar5 = *(char **)(param_1 + 0x10);
          cVar2 = *pcVar5;
        }
        *(int *)(param_1 + 0x468) = *(int *)(param_1 + 0x468) + 1;
        iVar3 = *(int *)(param_1 + 0x468);
      } while( true );
    }
    *(undefined1 *)(lVar6 + 0x30) = 1;
    *(undefined4 *)(lVar6 + 0x2c) = 0x16;
    lVar6 = *(longlong *)(param_1 + 8);
  }
LAB_140194cf3:
  FUN_1401ae820(0,0,0,0,0,lVar6);
  return 0xffffffff;
}

