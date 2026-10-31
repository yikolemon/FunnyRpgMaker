/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00480130 */

void __thiscall FUN_00480130(void *this,WCHAR param_1)

{
  int *piVar1;
  WCHAR *pWVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 local_3c;
  uint local_38;
  int local_34;
  int *local_30;
  WCHAR local_2c;
  undefined1 auStack_2a [2];
  undefined1 local_28 [32];
  uint local_8;
  
  local_8 = DAT_0050e8c0 ^ (uint)&stack0xfffffffc;
  local_38 = (uint)(ushort)param_1;
  if (param_1 == L'\xffff') {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_8 ^ (uint)&stack0xfffffffc);
  }
  uVar7 = **(uint **)((int)this + 0x20);
  if ((uVar7 != 0) && (piVar1 = *(int **)((int)this + 0x30), uVar7 < uVar7 + *piVar1 * 2)) {
    *piVar1 = *piVar1 + -1;
    pWVar2 = (WCHAR *)**(int **)((int)this + 0x20);
    **(int **)((int)this + 0x20) = (int)(pWVar2 + 1);
    *pWVar2 = param_1;
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_8 ^ (uint)&stack0xfffffffc);
  }
  if (*(int *)((int)this + 0x4c) != 0) {
    if (**(int **)((int)this + 0xc) == (int)this + 0x3c) {
      iVar5 = *(int *)((int)this + 0x54);
      iVar3 = *(int *)((int)this + 0x50);
      **(int **)((int)this + 0xc) = iVar3;
      **(int **)((int)this + 0x1c) = iVar3;
      **(int **)((int)this + 0x2c) = iVar5 - iVar3 >> 1;
    }
    local_30 = *(int **)((int)this + 0x38);
    if (local_30 == (int *)0x0) {
      FUN_0049116f(param_1,*(FILE **)((int)this + 0x4c));
                    /* WARNING: Subroutine does not return */
      FUN_0047f2c0(local_8 ^ (uint)&stack0xfffffffc);
    }
    _local_2c = CONCAT22(auStack_2a,param_1);
    pcVar4 = *(code **)(*local_30 + 0x1c);
    (*(code *)PTR_guard_check_icall_00508898)
              ((int)this + 0x40,&local_2c,auStack_2a,&local_3c,local_28,&local_8,&local_34);
    iVar5 = (*pcVar4)();
    if ((iVar5 == 0) || (iVar5 == 1)) {
      uVar7 = local_34 - (int)local_28;
      if ((uVar7 == 0) ||
         (uVar6 = FUN_00492048(local_28,1,uVar7,*(int *)((int)this + 0x4c)), uVar7 == uVar6)) {
        *(undefined1 *)((int)this + 0x3e) = 1;
      }
    }
    else if (iVar5 == 3) {
      FUN_0047ff20((WCHAR)_local_2c,*(FILE **)((int)this + 0x4c));
                    /* WARNING: Subroutine does not return */
      FUN_0047f2c0(local_8 ^ (uint)&stack0xfffffffc);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_8 ^ (uint)&stack0xfffffffc);
}

