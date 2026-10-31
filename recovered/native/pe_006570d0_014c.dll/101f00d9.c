/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101f00d9 */

void __fastcall FUN_101f00d9(int param_1,int param_2,uint param_3,int *param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    param_3 = param_2 << 0x10 | param_3;
    piVar2 = *(int **)(param_1 + 0x24);
    piVar5 = piVar2 + *(int *)(param_1 + 0x28) * 4 + -4;
    do {
      piVar1 = piVar2 + (((int)piVar5 - (int)piVar2 >> 4) - ((int)piVar5 - (int)piVar2 >> 0x1f) &
                        0xfffffffeU) * 2;
      uVar4 = *piVar1 << 0x10 | piVar1[1];
      if (uVar4 == param_3) {
        *param_4 = piVar1[2];
        iVar3 = piVar1[3];
        goto LAB_101f013d;
      }
      if (uVar4 < param_3) {
        piVar2 = piVar1 + 4;
      }
      else {
        piVar5 = piVar1 + -4;
      }
    } while (piVar2 <= piVar5);
  }
  *param_4 = 0;
  iVar3 = 0;
LAB_101f013d:
  param_4[1] = iVar3;
  return;
}

