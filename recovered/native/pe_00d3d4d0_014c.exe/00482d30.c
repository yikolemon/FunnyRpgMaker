/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00482d30 */

undefined8 __thiscall FUN_00482d30(void *this,uint *param_1,uint param_2,int param_3)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  int local_10;
  uint *local_8;
  
  if (*(int *)((int)this + 0x38) != 0) {
    local_8 = param_1;
    iVar4 = param_3;
    uVar6 = param_2;
    if ((-1 < param_3) && ((0 < param_3 || (param_2 != 0)))) {
      do {
        if ((uint *)**(undefined4 **)((int)this + 0x20) == (uint *)0x0) {
          uVar5 = 0;
        }
        else {
          uVar5 = **(uint **)((int)this + 0x30);
        }
        local_10 = (int)uVar5 >> 0x1f;
        if ((local_10 < 0) || ((-1 < (int)uVar5 && (uVar5 == 0)))) {
          pcVar2 = *(code **)(*(int *)this + 0xc);
          (*(code *)PTR_guard_check_icall_00508898)((char)*local_8);
          iVar3 = (*pcVar2)();
          if (iVar3 == -1) break;
          bVar7 = uVar6 != 0;
          uVar6 = uVar6 - 1;
          uVar5 = 1;
          iVar4 = iVar4 + -1 + (uint)bVar7;
        }
        else {
          if ((iVar4 <= local_10) && ((iVar4 < local_10 || (uVar6 < uVar5)))) {
            uVar5 = uVar6;
            local_10 = iVar4;
          }
          FUN_004878c0((uint *)**(undefined4 **)((int)this + 0x20),local_8,uVar5);
          bVar7 = uVar6 < uVar5;
          uVar6 = uVar6 - uVar5;
          iVar4 = (iVar4 - local_10) - (uint)bVar7;
          piVar1 = *(int **)((int)this + 0x30);
          *piVar1 = *piVar1 - uVar5;
          **(int **)((int)this + 0x20) = **(int **)((int)this + 0x20) + uVar5;
        }
        local_8 = (uint *)((int)local_8 + uVar5);
        if ((iVar4 < 1) && ((iVar4 < 0 || (uVar6 == 0)))) break;
      } while( true );
    }
    return CONCAT44((param_3 - iVar4) - (uint)(param_2 < uVar6),param_2 - uVar6);
  }
  if ((uint *)**(undefined4 **)((int)this + 0x20) == (uint *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = **(uint **)((int)this + 0x30);
  }
  local_10 = (int)uVar6 >> 0x1f;
  uVar5 = param_2;
  iVar4 = param_3;
  if ((-1 < param_3) && ((0 < param_3 || (param_2 != 0)))) {
    if ((-1 < local_10) && (((int)uVar6 < 0 || (uVar6 != 0)))) {
      if ((param_3 <= local_10) && ((param_3 < local_10 || (param_2 < uVar6)))) {
        local_10 = param_3;
        uVar6 = param_2;
      }
      FUN_004878c0((uint *)**(undefined4 **)((int)this + 0x20),param_1,uVar6);
      param_1 = (uint *)((int)param_1 + uVar6);
      uVar5 = param_2 - uVar6;
      piVar1 = *(int **)((int)this + 0x30);
      iVar4 = (param_3 - local_10) - (uint)(param_2 < uVar6);
      *piVar1 = *piVar1 - uVar6;
      **(int **)((int)this + 0x20) = **(int **)((int)this + 0x20) + uVar6;
      if ((iVar4 < 0) || ((iVar4 < 1 && (uVar5 == 0)))) goto LAB_00482ecf;
    }
    if (*(int *)((int)this + 0x4c) != 0) {
      uVar6 = FUN_00492048(param_1,1,uVar5,*(int *)((int)this + 0x4c));
      bVar7 = uVar5 < uVar6;
      uVar5 = uVar5 - uVar6;
      iVar4 = iVar4 - (uint)bVar7;
    }
  }
LAB_00482ecf:
  return CONCAT44((param_3 - iVar4) - (uint)(param_2 < uVar5),param_2 - uVar5);
}

