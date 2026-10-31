/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1003b9a2 */

void __thiscall FUN_1003b9a2(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 local_34 [20];
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_34;
  local_14 = 0xffffffff;
  local_18 = &LAB_10059f90;
  local_1c = ExceptionList;
  uVar1 = *(undefined4 *)(param_2 + 0x10);
  uVar2 = *(undefined4 *)(param_2 + 0x14);
  ExceptionList = &local_1c;
  FUN_1003a106(3,param_1 + 4,param_4);
  local_14 = 0;
  iVar3 = __alldiv(uVar1,uVar2,10000000,0);
  iVar4 = __alldiv(uVar1,uVar2,10000,0);
  FUN_100245fe(iVar4 + iVar3 * -1000,param_4);
  local_14 = 0xffffffff;
  FUN_1003a17a();
  ExceptionList = local_1c;
  return;
}

