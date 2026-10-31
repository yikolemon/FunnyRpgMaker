/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1018e4d8 */

void FUN_1018e4d8(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  if (*(int *)(param_1 + 0x284) != 0) {
    piVar5 = *(int **)(param_1 + 0x28c);
    piVar2 = piVar5 + *(int *)(param_1 + 0x284);
    do {
      iVar1 = *piVar5;
      if (*(int *)(iVar1 + 0x10) == param_2) {
        *(undefined4 *)(iVar1 + 0x10) = param_3;
      }
      iVar1 = *(int *)(iVar1 + 0x54);
      if ((iVar1 != 0) &&
         ((((param_2 != 0 || (*(int *)(iVar1 + 0x1220) != 0)) || (*(float *)(iVar1 + 0x122c) != 0.0)
           ) || (NAN(*(float *)(iVar1 + 0x122c)))))) {
        if (*(int *)(iVar1 + 0x60) == param_2) {
          *(undefined4 *)(iVar1 + 0x60) = param_3;
        }
        if (*(int *)(iVar1 + 0x1220) == param_2) {
          iVar3 = FUN_100fbf7e();
          if (iVar1 == iVar3) {
            FUN_10112c4f(param_3,*(undefined4 *)(iVar1 + 0x122c),*(undefined4 *)(iVar1 + 0x1228));
          }
          else {
            FUN_100fe927(iVar1);
            FUN_10112c4f(param_3,*(undefined4 *)(iVar1 + 0x122c),*(undefined4 *)(iVar1 + 0x1228));
            FUN_100fe927(iVar3);
          }
        }
        iVar3 = *(int *)(iVar1 + 0x1f8c);
        if (iVar3 != 0) {
          iVar1 = *(int *)(iVar1 + 0x1f94);
          iVar4 = 0;
          do {
            if (*(int *)(iVar1 + iVar4) == param_2) {
              *(undefined4 *)(iVar1 + iVar4) = param_3;
            }
            iVar4 = iVar4 + 0xc;
          } while (iVar3 * 0xc != iVar4);
        }
      }
      piVar5 = piVar5 + 1;
    } while (piVar5 != piVar2);
  }
  return;
}

