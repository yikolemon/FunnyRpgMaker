/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140105eb0 */

void FUN_140105eb0(int *param_1,undefined8 param_2)

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
          while (FUN_1400c86ba(&DAT_140f31838,*(undefined4 *)(lVar8 + 0x1c),(char)piVar7[1]),
                lVar8 != lVar2) {
            if ((*(int *)(lVar8 + 0x28) < 1) ||
               (cVar4 = FUN_1400c5fdd(*(undefined4 *)(lVar8 + 0x1c)), cVar4 == '\0')) {
              do {
                lVar3 = *(longlong *)(lVar8 + 0x20);
                if (lVar3 == 0) goto LAB_140105f73;
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
          FUN_14010658a(param_2);
        }
        else {
          FUN_1400c8506(&DAT_140f31838);
        }
      }
LAB_140105f73:
      piVar7 = piVar7 + 6;
    } while (piVar7 != piVar1);
  }
  return;
}

