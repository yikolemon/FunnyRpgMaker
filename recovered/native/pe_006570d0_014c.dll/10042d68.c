/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10042d68 */

void FUN_10042d68(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *local_28;
  int *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_28;
  local_18 = &LAB_1005a4e0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  iVar1 = param_2[9];
  iVar2 = param_2[10];
  iVar3 = param_2[0xb];
  param_1[8] = param_2[8];
  param_1[9] = iVar1;
  param_1[10] = iVar2;
  param_1[0xb] = iVar3;
  iVar1 = *param_2;
  iVar2 = param_2[1];
  iVar3 = param_2[2];
  iVar4 = param_2[3];
  iVar5 = param_2[5];
  iVar6 = param_2[6];
  iVar7 = param_2[7];
  param_1[4] = param_2[4];
  param_1[5] = iVar5;
  param_1[6] = iVar6;
  param_1[7] = iVar7;
  *param_1 = iVar1;
  param_1[1] = iVar2;
  param_1[2] = iVar3;
  param_1[3] = iVar4;
  local_24 = param_1 + 0xe;
  param_1[0xf] = 0;
  param_1[0x11] = (int)&LAB_100190fe;
  local_28 = param_1 + 0x12;
  param_1[0xe] = (int)local_28;
  param_1[0x10] = 0xfa;
  local_14 = 0;
  FUN_1001909c(*param_1,param_1[1] + *param_1);
  FUN_1001909c(param_1[0xc],param_1[0xd] + param_1[0xc]);
  *param_1 = param_1[0xe];
  param_1[0xc] = param_1[0xe] + param_1[1];
  ExceptionList = local_1c;
  return;
}

