/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041989c */

undefined4 * __thiscall FUN_0041989c(void *this,undefined4 param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_24;
  local_18 = &LAB_0041a1a0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = 0;
  local_14 = 0;
  local_24 = this;
  iVar2 = FUN_0047f230(0x10);
  local_24[1] = iVar2;
  uVar3 = 0;
  *(undefined4 *)(iVar2 + 8) = 0;
  *(undefined4 *)(iVar2 + 0xc) = 0;
  if (param_2[1] != 0) {
    LOCK();
    piVar1 = (int *)(param_2[1] + 4);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    uVar3 = param_2[1];
  }
  *(undefined4 *)(iVar2 + 8) = *param_2;
  *(undefined4 *)(iVar2 + 0xc) = uVar3;
  ExceptionList = local_1c;
  return local_24;
}

