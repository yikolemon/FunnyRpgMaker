/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10018f06 */

void __thiscall FUN_10018f06(uint *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  
  if (*param_1 != 0) {
    piVar1 = (int *)(param_1[4] + param_1[2] * 0x148);
    *(undefined8 *)(piVar1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
    iVar2 = param_2[9];
    iVar3 = param_2[10];
    iVar4 = param_2[0xb];
    piVar1[8] = param_2[8];
    piVar1[9] = iVar2;
    piVar1[10] = iVar3;
    piVar1[0xb] = iVar4;
    iVar2 = *param_2;
    iVar3 = param_2[1];
    iVar4 = param_2[2];
    iVar5 = param_2[3];
    iVar6 = param_2[5];
    iVar7 = param_2[6];
    iVar8 = param_2[7];
    piVar1[4] = param_2[4];
    piVar1[5] = iVar6;
    piVar1[6] = iVar7;
    piVar1[7] = iVar8;
    *piVar1 = iVar2;
    piVar1[1] = iVar3;
    piVar1[2] = iVar4;
    piVar1[3] = iVar5;
    FUN_10019010(param_2 + 0xe);
    *piVar1 = piVar1[0xe];
    piVar1[0xc] = piVar1[0xe] + piVar1[1];
    uVar9 = (param_1[2] + 1) % *param_1;
    param_1[2] = uVar9;
    if (uVar9 == param_1[1]) {
      uVar9 = uVar9 + 1;
      if (uVar9 == *param_1) {
        uVar9 = 0;
      }
      param_1[1] = uVar9;
      param_1[3] = param_1[3] + 1;
    }
  }
  return;
}

