/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00447851 */

void __fastcall FUN_00447851(int param_1,int param_2,uint param_3,int *param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    uVar4 = param_2 << 0x10 | param_3;
    piVar2 = *(int **)(param_1 + 0x24);
    piVar6 = piVar2 + *(int *)(param_1 + 0x28) * 4 + -4;
    do {
      piVar1 = piVar2 + (((int)piVar6 - (int)piVar2 >> 4) - ((int)piVar6 - (int)piVar2 >> 0x1f) &
                        0xfffffffeU) * 2;
      uVar5 = *piVar1 << 0x10 | piVar1[1];
      if (uVar5 == uVar4) {
        *param_4 = piVar1[2];
        iVar3 = piVar1[3];
        goto LAB_004478b5;
      }
      if (uVar5 < uVar4) {
        piVar2 = piVar1 + 4;
      }
      else {
        piVar6 = piVar1 + -4;
      }
    } while (piVar2 <= piVar6);
  }
  *param_4 = 0;
  iVar3 = 0;
LAB_004478b5:
  param_4[1] = iVar3;
  return;
}

