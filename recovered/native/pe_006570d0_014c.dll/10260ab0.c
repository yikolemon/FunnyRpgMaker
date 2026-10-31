/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10260ab0 */

undefined4 __fastcall FUN_10260ab0(int param_1)

{
  short sVar1;
  int *piVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  short *psVar6;
  
  cVar3 = FUN_102600bf(*(undefined4 *)(param_1 + 8));
  if (cVar3 != '\0') {
    psVar6 = *(short **)(param_1 + 0xc);
    if (psVar6 != (short *)0x0) {
      iVar5 = *(int *)(param_1 + 0x450) + 1;
      *(int *)(param_1 + 0x450) = iVar5;
      do {
        if (iVar5 == 2) {
          return *(undefined4 *)(param_1 + 0x14);
        }
        *(undefined4 *)(param_1 + 0x34) = 0;
        *(undefined1 *)(param_1 + 0x18) = 0;
        sVar1 = *psVar6;
        psVar6 = psVar6 + 1;
        *(short **)(param_1 + 0xc) = psVar6;
        *(short *)(param_1 + 0x2e) = sVar1;
        while ((sVar1 != 0 && (-1 < *(int *)(param_1 + 0x14)))) {
          bVar4 = FUN_1026185a(sVar1,*(undefined1 *)(param_1 + 0x18));
          *(byte *)(param_1 + 0x18) = bVar4;
          if (7 < bVar4) {
            iVar5 = *(int *)(param_1 + 8);
            *(undefined1 *)(iVar5 + 0x1c) = 1;
            *(undefined4 *)(iVar5 + 0x18) = 0x16;
            goto LAB_10260ae0;
          }
          switch(bVar4) {
          case 0:
            *(undefined1 *)(param_1 + 0x38) = 1;
            iVar5 = *(int *)(param_1 + 0x448);
            if (*(int *)(iVar5 + 8) == *(int *)(iVar5 + 4)) {
              if (*(char *)(iVar5 + 0xc) == '\0') {
                iVar5 = -1;
              }
              else {
                iVar5 = *(int *)(param_1 + 0x14) + 1;
              }
              *(int *)(param_1 + 0x14) = iVar5;
            }
            else {
              *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
              *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
              *(short *)**(undefined4 **)(param_1 + 0x448) = sVar1;
              piVar2 = *(int **)(param_1 + 0x448);
              *piVar2 = *piVar2 + 2;
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
            if (sVar1 == 0x20) {
              *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 2;
            }
            else if (sVar1 == 0x23) {
              *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 0x20;
            }
            else if (sVar1 == 0x2b) {
              *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 1;
            }
            else if (sVar1 == 0x2d) {
              *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 4;
            }
            else if (sVar1 == 0x30) {
              *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 8;
            }
            break;
          case 3:
            if (sVar1 != 0x2a) {
              iVar5 = param_1 + 0x20;
              goto LAB_10260c13;
            }
            piVar2 = *(int **)(param_1 + 0x10);
            *(int **)(param_1 + 0x10) = piVar2 + 1;
            iVar5 = *piVar2;
            *(int *)(param_1 + 0x20) = iVar5;
            if (iVar5 < 0) {
              *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 4;
              *(int *)(param_1 + 0x20) = -iVar5;
            }
LAB_10260c38:
            cVar3 = '\x01';
            goto LAB_10260c76;
          case 4:
            *(undefined4 *)(param_1 + 0x24) = 0;
            break;
          case 5:
            if (sVar1 == 0x2a) {
              piVar2 = *(int **)(param_1 + 0x10);
              *(int **)(param_1 + 0x10) = piVar2 + 1;
              iVar5 = *piVar2;
              *(int *)(param_1 + 0x24) = iVar5;
              if (iVar5 < 0) {
                *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
              }
              goto LAB_10260c38;
            }
            iVar5 = param_1 + 0x24;
LAB_10260c13:
            cVar3 = FUN_10260cec(iVar5);
            goto LAB_10260c76;
          case 6:
            cVar3 = FUN_10260d66();
            goto LAB_10260c76;
          case 7:
            cVar3 = FUN_10260ef0();
LAB_10260c76:
            if (cVar3 == '\0') {
              return 0xffffffff;
            }
            break;
          default:
            goto LAB_10260af3;
          }
          sVar1 = **(short **)(param_1 + 0xc);
          psVar6 = *(short **)(param_1 + 0xc) + 1;
          *(short **)(param_1 + 0xc) = psVar6;
          *(short *)(param_1 + 0x2e) = sVar1;
        }
        *(int *)(param_1 + 0x450) = *(int *)(param_1 + 0x450) + 1;
        iVar5 = *(int *)(param_1 + 0x450);
      } while( true );
    }
    iVar5 = *(int *)(param_1 + 8);
    *(undefined1 *)(iVar5 + 0x1c) = 1;
    *(undefined4 *)(iVar5 + 0x18) = 0x16;
LAB_10260ae0:
    FUN_10274034(0,0,0,0,0,*(undefined4 *)(param_1 + 8));
  }
LAB_10260af3:
  return 0xffffffff;
}

