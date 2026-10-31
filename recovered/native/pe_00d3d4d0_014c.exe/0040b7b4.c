/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0040b7b4 */

undefined8 __thiscall FUN_0040b7b4(void *this,uint param_1,uint *param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  void *pvVar4;
  ulonglong uVar5;
  undefined4 in_stack_ffffffd0;
  uint *local_20;
  uint *local_1c;
  undefined1 local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_20;
  uVar2 = *(uint *)((int)this + 0x10);
  if (uVar2 < param_1) {
    FUN_004088c6();
  }
  else if (*(uint *)((int)this + 0x14) - uVar2 < param_3) {
    puVar1 = FUN_0040b8dc(this,param_3,CONCAT31((int3)((uint)in_stack_ffffffd0 >> 8),local_18),
                          param_1,param_2,param_3);
    uVar2 = DAT_0050e8c0;
    if (DAT_0050e8c0 == (local_14 ^ (uint)&local_20)) {
LAB_0040b8c1:
      return CONCAT44(uVar2,puVar1);
    }
  }
  else {
    *(uint *)((int)this + 0x10) = uVar2 + param_3;
    pvVar4 = this;
    if (7 < *(uint *)((int)this + 0x14)) {
      pvVar4 = *(void **)this;
    }
    puVar1 = (uint *)((int)pvVar4 + param_1 * 2);
    local_1c = (uint *)((int)param_2 + param_3 * 2);
    uVar3 = param_3;
    if (param_2 <= (uint *)((int)pvVar4 + uVar2 * 2) && puVar1 < local_1c) {
      uVar3 = 0;
      if (param_2 <= puVar1 && (int)puVar1 - (int)param_2 != 0) {
        uVar3 = (int)puVar1 - (int)param_2 >> 1;
      }
    }
    local_20 = this;
    FUN_004878c0((uint *)(param_3 * 2 + (int)puVar1),puVar1,(uVar2 - param_1) * 2 + 2);
    FUN_004878c0(puVar1,param_2,uVar3 * 2);
    uVar5 = FUN_004878c0((uint *)(uVar3 * 2 + (int)puVar1),(uint *)((int)local_1c + uVar3 * 2),
                         (param_3 - uVar3) * 2);
    uVar2 = (uint)(uVar5 >> 0x20);
    puVar1 = local_20;
    if (DAT_0050e8c0 == (local_14 ^ (uint)&local_20)) goto LAB_0040b8c1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_14 ^ (uint)&local_20);
}

