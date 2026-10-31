/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004825e0 */

void __thiscall FUN_004825e0(void *this,int param_1)

{
  byte *pbVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  undefined4 local_38;
  int local_34;
  int *local_30;
  byte local_2c;
  undefined1 auStack_2b [3];
  undefined1 local_28 [32];
  uint local_8;
  
  local_8 = DAT_0050e8c0 ^ (uint)&stack0xfffffffc;
  if (param_1 == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_8 ^ (uint)&stack0xfffffffc);
  }
  uVar7 = **(uint **)((int)this + 0x20);
  bVar6 = (byte)param_1;
  if (uVar7 != 0) {
    iVar4 = **(int **)((int)this + 0x30);
    if (uVar7 < iVar4 + uVar7) {
      **(int **)((int)this + 0x30) = iVar4 + -1;
      pbVar1 = (byte *)**(int **)((int)this + 0x20);
      **(int **)((int)this + 0x20) = (int)(pbVar1 + 1);
      *pbVar1 = bVar6;
                    /* WARNING: Subroutine does not return */
      FUN_0047f2c0(local_8 ^ (uint)&stack0xfffffffc);
    }
  }
  if (*(int *)((int)this + 0x4c) != 0) {
    if (**(int **)((int)this + 0xc) == (int)this + 0x3c) {
      iVar4 = *(int *)((int)this + 0x54);
      iVar2 = *(int *)((int)this + 0x50);
      **(int **)((int)this + 0xc) = iVar2;
      **(int **)((int)this + 0x1c) = iVar2;
      **(int **)((int)this + 0x2c) = iVar4 - iVar2;
    }
    local_30 = *(int **)((int)this + 0x38);
    if (local_30 == (int *)0x0) {
      FUN_00490fda(bVar6,*(FILE **)((int)this + 0x4c));
                    /* WARNING: Subroutine does not return */
      FUN_0047f2c0(local_8 ^ (uint)&stack0xfffffffc);
    }
    _local_2c = CONCAT31(auStack_2b,bVar6);
    pcVar3 = *(code **)(*local_30 + 0x1c);
    (*(code *)PTR_guard_check_icall_00508898)
              ((int)this + 0x40,&local_2c,auStack_2b,&local_38,local_28,&local_8,&local_34);
    iVar4 = (*pcVar3)();
    if ((iVar4 == 0) || (iVar4 == 1)) {
      uVar7 = local_34 - (int)local_28;
      if ((uVar7 == 0) ||
         (uVar5 = FUN_00492048(local_28,1,uVar7,*(int *)((int)this + 0x4c)), uVar7 == uVar5)) {
        *(undefined1 *)((int)this + 0x3d) = 1;
                    /* WARNING: Subroutine does not return */
        FUN_0047f2c0(local_8 ^ (uint)&stack0xfffffffc);
      }
    }
    else if (iVar4 == 3) {
      FUN_00481ec0((byte)_local_2c,*(FILE **)((int)this + 0x4c));
                    /* WARNING: Subroutine does not return */
      FUN_0047f2c0(local_8 ^ (uint)&stack0xfffffffc);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_8 ^ (uint)&stack0xfffffffc);
}

