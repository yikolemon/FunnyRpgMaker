/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00418f52 */

uint * __thiscall
FUN_00418f52(void *this,undefined4 param_1,undefined4 param_2,uint *param_3,uint param_4,
            uint *param_5,uint param_6)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint local_28;
  uint *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_28;
  local_18 = &LAB_0041a120;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  *(undefined8 *)((int)this + 0x10) = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  local_14 = 0;
  uVar1 = param_6 + param_4;
  uVar3 = 0xf;
  local_24 = this;
  puVar2 = &local_28;
  if (0xf < uVar1) {
    uVar3 = 0x16;
    if (0x16 < (uVar1 | 0xf)) {
      uVar3 = uVar1 | 0xf;
    }
    local_28 = 0x7fffffff;
    if (-1 < (int)uVar1) {
      local_28 = uVar3;
    }
    this = (void *)FUN_004027ed(local_28 + 1);
    *local_24 = (uint)this;
    uVar3 = local_28;
    puVar2 = (uint *)local_20;
  }
  local_20 = (undefined1 *)puVar2;
  local_24[4] = param_6 + param_4;
  local_24[5] = uVar3;
  FUN_004878c0(this,param_3,param_4);
  FUN_004878c0((uint *)(param_4 + (int)this),param_5,param_6);
  *(undefined1 *)((int)this + param_6 + param_4) = 0;
  ExceptionList = local_1c;
  return local_24;
}

