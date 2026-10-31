/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10272cd0 */

void FUN_10272cd0(int param_1,int param_2,int *param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  void *local_14;
  undefined1 *puStack_10;
  uint local_c;
  undefined4 local_8;
  
  puStack_10 = &LAB_102592b0;
  local_14 = ExceptionList;
  local_c = DAT_10388d00 ^ 0x10382e20;
  ExceptionList = &local_14;
  iVar3 = param_2;
  if (-1 < *param_3) {
    iVar3 = param_2 + 0xc + param_3[2];
  }
  local_8 = 0;
  iVar1 = FUN_10272ae0(param_1,param_2,param_3,param_4);
  if (iVar1 == 1) {
    uVar2 = ___AdjustPointer(*(undefined4 *)(param_1 + 0x18),param_4 + 8);
    FUN_102357c0(iVar3,*(undefined4 *)(param_4 + 0x18),uVar2);
  }
  else if (iVar1 == 2) {
    uVar2 = ___AdjustPointer(*(undefined4 *)(param_1 + 0x18),param_4 + 8);
    FUN_102357d0(iVar3,*(undefined4 *)(param_4 + 0x18),uVar2,1);
  }
  ExceptionList = local_14;
  return;
}

