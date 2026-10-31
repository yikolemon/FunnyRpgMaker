/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00402372 */

int * __thiscall FUN_00402372(void *this,int param_1)

{
  int iVar1;
  int *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_24;
  local_14 = 0xffffffff;
  local_18 = &LAB_00406df0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  local_24 = this;
  iVar1 = FUN_0047f230(0x30);
  *(int *)iVar1 = iVar1;
  *(int *)(iVar1 + 4) = iVar1;
  *(int *)this = iVar1;
  local_14 = 0;
  FUN_00404c6e(local_24,iVar1,param_1);
  ExceptionList = local_1c;
  return local_24;
}

