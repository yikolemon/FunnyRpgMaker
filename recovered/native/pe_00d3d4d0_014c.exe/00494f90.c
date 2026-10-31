/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00494f90 */

void __cdecl FUN_00494f90(int param_1,uint *param_2,uint *param_3,uint *param_4)

{
  char cVar1;
  undefined3 extraout_var;
  int iVar2;
  uint *puVar3;
  void *local_14;
  undefined1 *puStack_10;
  uint local_c;
  undefined4 local_8;
  
  puStack_10 = &LAB_004858c0;
  local_14 = ExceptionList;
  local_c = DAT_0050e8c0 ^ 0x50d050;
  ExceptionList = &local_14;
  puVar3 = param_2;
  if (-1 < (int)*param_3) {
    puVar3 = (uint *)((int)param_2 + param_3[2] + 0xc);
  }
  local_8 = 0;
  cVar1 = FUN_00494da0(param_1,param_2,param_3,param_4);
  if (CONCAT31(extraout_var,cVar1) == 1) {
    iVar2 = ___AdjustPointer(*(int *)(param_1 + 0x18),(int *)(param_4 + 2));
    FUN_00494810(puVar3,(undefined *)param_4[6],iVar2);
  }
  else if (CONCAT31(extraout_var,cVar1) == 2) {
    iVar2 = ___AdjustPointer(*(int *)(param_1 + 0x18),(int *)(param_4 + 2));
    FUN_00494820(puVar3,(undefined *)param_4[6],iVar2,1);
  }
  ExceptionList = local_14;
  return;
}

