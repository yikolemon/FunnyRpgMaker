/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0040bf36 */

uint * __thiscall FUN_0040bf36(void *this,uint param_1,uint *param_2,uint *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  uint *puVar3;
  undefined4 *local_5c;
  undefined4 *local_58;
  undefined4 local_54;
  undefined4 *local_50;
  void *local_4c;
  undefined4 *local_48;
  char local_44;
  undefined2 local_43;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  code *pcStack_34;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined2 local_20;
  undefined1 local_1e;
  undefined4 local_1c;
  uint local_18;
  
  local_18 = DAT_0050e8c0 ^ (uint)&stack0xfffffffc;
  iVar2 = *(int *)this;
  *(uint **)this = param_2;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) - ((int)param_2 - iVar2 >> 1);
  puVar1 = (undefined4 *)((int)this + 0x10);
  FUN_0040c038((char *)&local_40,(int)puVar1,param_1);
  if ((char)local_40 == '\r') {
    (*pcStack_34)(this,puVar1,uStack_38);
    puVar3 = *(uint **)this;
  }
  else {
    local_44 = (char)local_40;
    local_2c = 0;
    local_28 = 0xffffffff;
    local_24 = 0;
    local_20 = 0;
    local_43 = 0;
    local_1e = 1;
    local_1c = 0x20;
    local_50 = &local_2c;
    local_4c = this;
    local_48 = puVar1;
    puVar3 = FUN_00410794(param_2,param_3,(int *)&local_50);
    if ((puVar3 == param_3) || ((short)*puVar3 != 0x7d)) {
                    /* WARNING: Subroutine does not return */
      FUN_0040ba4e(0x504a88);
    }
    local_5c = puVar1;
    local_58 = &local_2c;
    FUN_004108f2(&local_54,(int *)&local_5c,local_40,uStack_3c,uStack_38,pcStack_34);
    *puVar1 = local_54;
  }
  if (DAT_0050e8c0 == (local_18 ^ (uint)&stack0xfffffffc)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_18 ^ (uint)&stack0xfffffffc);
}

