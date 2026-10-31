/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801c01ac */

void FUN_1801c01ac(int *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  int *piVar7;
  longlong lVar8;
  
  if ((longlong)*param_1 != 0) {
    piVar7 = *(int **)(param_1 + 2);
    piVar1 = piVar7 + (longlong)*param_1 * 6;
    do {
      if (*piVar7 == 2) {
        lVar8 = *(longlong *)(piVar7 + 2);
        if (lVar8 != 0) {
          lVar2 = *(longlong *)(piVar7 + 4);
          while (FUN_18014f78a(&DAT_1804200e8,*(undefined4 *)(lVar8 + 0x1c),(char)piVar7[1]),
                lVar8 != lVar2) {
            if ((*(int *)(lVar8 + 0x28) < 1) ||
               (cVar4 = FUN_18014d0ad(*(undefined4 *)(lVar8 + 0x1c)), cVar4 == '\0')) {
              do {
                lVar3 = *(longlong *)(lVar8 + 0x20);
                if (lVar3 == 0) goto LAB_1801c026f;
                lVar5 = (longlong)*(int *)(lVar8 + 0x38) + 1;
                lVar8 = lVar3;
              } while (*(int *)(lVar3 + 0x28) <= (int)lVar5);
              plVar6 = (longlong *)(lVar5 * 8 + *(longlong *)(lVar3 + 0x30));
            }
            else {
              plVar6 = *(longlong **)(lVar8 + 0x30);
            }
            lVar8 = *plVar6;
            if (lVar8 == 0) break;
          }
        }
      }
      else if (*piVar7 == 1) {
        if ((char)piVar7[1] == '\x01') {
          FUN_1801c0886(param_2);
        }
        else {
          FUN_18014f5d6(&DAT_1804200e8);
        }
      }
LAB_1801c026f:
      piVar7 = piVar7 + 6;
    } while (piVar7 != piVar1);
  }
  return;
}

