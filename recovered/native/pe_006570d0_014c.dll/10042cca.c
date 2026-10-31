/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10042cca */

int * FUN_10042cca(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)(param_3 + 0xc) = *(undefined8 *)(param_1 + 0xc);
    iVar1 = param_1[9];
    iVar2 = param_1[10];
    iVar3 = param_1[0xb];
    param_3[8] = param_1[8];
    param_3[9] = iVar1;
    param_3[10] = iVar2;
    param_3[0xb] = iVar3;
    iVar1 = *param_1;
    iVar2 = param_1[1];
    iVar3 = param_1[2];
    iVar4 = param_1[3];
    iVar5 = param_1[5];
    iVar6 = param_1[6];
    iVar7 = param_1[7];
    param_3[4] = param_1[4];
    param_3[5] = iVar5;
    param_3[6] = iVar6;
    param_3[7] = iVar7;
    *param_3 = iVar1;
    param_3[1] = iVar2;
    param_3[2] = iVar3;
    param_3[3] = iVar4;
    param_3[0xf] = 0;
    FUN_1001909c(param_1[0xe],param_1[0xf] + param_1[0xe]);
    *param_3 = param_3[0xe];
    param_3[0xc] = param_3[0xe] + param_3[1];
    param_3 = param_3 + 0x52;
    param_1 = param_1 + 0x52;
  }
  return param_3;
}

