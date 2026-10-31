/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101b702a */

void __fastcall FUN_101b702a(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  
  if (*param_1 != 0) {
    piVar8 = (int *)param_1[2];
    piVar1 = piVar8 + *param_1 * 6;
    do {
      if (*piVar8 == 2) {
        iVar7 = piVar8[2];
        if (iVar7 != 0) {
          iVar2 = piVar8[4];
          while (FUN_1014b226(*(undefined4 *)(iVar7 + 0x1c),(char)piVar8[1]), iVar7 != iVar2) {
            if ((*(int *)(iVar7 + 0x24) < 1) ||
               (cVar4 = FUN_10148c72(*(undefined4 *)(iVar7 + 0x1c)), cVar4 == '\0')) {
              do {
                iVar3 = *(int *)(iVar7 + 0x20);
                if (iVar3 == 0) goto LAB_101b70c5;
                iVar5 = *(int *)(iVar7 + 0x30) + 1;
                iVar7 = iVar3;
              } while (*(int *)(iVar3 + 0x24) <= iVar5);
              piVar6 = (int *)(iVar5 * 4 + *(int *)(iVar3 + 0x2c));
            }
            else {
              piVar6 = *(int **)(iVar7 + 0x2c);
            }
            iVar7 = *piVar6;
            if (iVar7 == 0) break;
          }
        }
      }
      else if (*piVar8 == 1) {
        if ((char)piVar8[1] == '\x01') {
          FUN_101b7664();
        }
        else {
          FUN_1014b0b0(param_2);
        }
      }
LAB_101b70c5:
      piVar8 = piVar8 + 6;
    } while (piVar8 != piVar1);
  }
  return;
}

