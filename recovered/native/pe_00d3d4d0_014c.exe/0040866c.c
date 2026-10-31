/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0040866c */

undefined8 __thiscall FUN_0040866c(void *this,uint param_1,uint param_2,undefined2 param_3)

{
  uint *puVar1;
  uint uVar2;
  void *pvVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined4 in_stack_ffffffd8;
  undefined1 local_18 [4];
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)local_18;
  uVar4 = *(uint *)((int)this + 0x10);
  if (uVar4 < param_1) {
    FUN_004088c6();
  }
  else if (*(uint *)((int)this + 0x14) - uVar4 < param_2) {
    this = FUN_00408748(this,param_2,CONCAT31((int3)((uint)in_stack_ffffffd8 >> 8),local_18[0]),
                        param_1,param_2,param_3);
    uVar4 = DAT_0050e8c0;
    if (DAT_0050e8c0 == (local_14 ^ (uint)local_18)) {
LAB_0040872d:
      return CONCAT44(uVar4,this);
    }
  }
  else {
    *(uint *)((int)this + 0x10) = uVar4 + param_2;
    pvVar3 = this;
    if (7 < *(uint *)((int)this + 0x14)) {
      pvVar3 = *(void **)this;
    }
    puVar1 = (uint *)((int)pvVar3 + param_1 * 2);
    uVar5 = FUN_004878c0((uint *)(param_2 * 2 + (int)puVar1),puVar1,(uVar4 - param_1) * 2 + 2);
    uVar4 = (uint)(uVar5 >> 0x20);
    if (param_2 != 0) {
      uVar2 = 0;
      do {
        *(undefined2 *)((int)puVar1 + uVar2 * 2) = param_3;
        uVar2 = uVar2 + 1;
      } while (param_2 != uVar2);
    }
    if (DAT_0050e8c0 == (local_14 ^ (uint)local_18)) goto LAB_0040872d;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_14 ^ (uint)local_18);
}

