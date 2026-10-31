/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00482b30 */

undefined8 __thiscall FUN_00482b30(void *this,uint *param_1,uint param_2,int param_3)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  size_t sVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  undefined4 *local_10;
  uint *local_c;
  int local_8;
  
  if ((param_3 < 1) && ((param_3 < 0 || (param_2 == 0)))) {
    return 0;
  }
  if (*(int *)((int)this + 0x38) == 0) {
    uVar7 = param_2;
    if (((uint *)**(undefined4 **)((int)this + 0x1c) != (uint *)0x0) &&
       (uVar6 = **(uint **)((int)this + 0x2c), uVar6 != 0)) {
      if (uVar6 < param_2) {
        uVar7 = uVar6;
      }
      FUN_004878c0(param_1,(uint *)**(undefined4 **)((int)this + 0x1c),uVar7);
      param_1 = (uint *)((int)param_1 + uVar7);
      **(int **)((int)this + 0x2c) = **(int **)((int)this + 0x2c) - uVar7;
      **(int **)((int)this + 0x1c) = **(int **)((int)this + 0x1c) + uVar7;
      uVar7 = param_2 - uVar7;
    }
    local_10 = (undefined4 *)((int)this + 0x2c);
    if (*(int *)((int)this + 0x4c) != 0) {
      if (**(int **)((int)this + 0xc) == (int)this + 0x3c) {
        iVar4 = *(int *)((int)this + 0x54);
        iVar3 = *(int *)((int)this + 0x50);
        **(int **)((int)this + 0xc) = iVar3;
        **(int **)((int)this + 0x1c) = iVar3;
        *(int *)*local_10 = iVar4 - iVar3;
      }
      while (0xfff < uVar7) {
        sVar5 = _fread(param_1,1,0xfff,*(FILE **)((int)this + 0x4c));
        uVar7 = uVar7 - sVar5;
        param_1 = (uint *)((int)param_1 + sVar5);
        if (sVar5 != 0xfff) {
          return CONCAT44(param_3 - (uint)(param_2 < uVar7),param_2 - uVar7);
        }
      }
      if (uVar7 != 0) {
        sVar5 = _fread(param_1,1,uVar7,*(FILE **)((int)this + 0x4c));
        uVar7 = uVar7 - sVar5;
      }
    }
    return CONCAT44(param_3 - (uint)(param_2 < uVar7),param_2 - uVar7);
  }
  local_8 = param_3;
  local_c = param_1;
  uVar7 = param_2;
  while( true ) {
    do {
      if ((uint *)**(undefined4 **)((int)this + 0x1c) == (uint *)0x0) {
        uVar6 = 0;
      }
      else {
        uVar6 = **(uint **)((int)this + 0x2c);
      }
      local_10 = (undefined4 *)((int)uVar6 >> 0x1f);
      if (((int)local_10 < 0) || ((-1 < (int)uVar6 && (uVar6 == 0)))) {
        pcVar2 = *(code **)(*(int *)this + 0x1c);
        (*(code *)PTR_guard_check_icall_00508898)();
        iVar4 = (*pcVar2)();
        if (iVar4 == -1) goto LAB_00482c28;
        bVar8 = uVar7 != 0;
        uVar7 = uVar7 - 1;
        uVar6 = 1;
        *(char *)local_c = (char)iVar4;
        local_8 = local_8 + -1 + (uint)bVar8;
      }
      else {
        if ((local_8 <= (int)local_10) && ((local_8 < (int)local_10 || (uVar7 < uVar6)))) {
          uVar6 = uVar7;
          local_10 = (undefined4 *)local_8;
        }
        FUN_004878c0(local_c,(uint *)**(undefined4 **)((int)this + 0x1c),uVar6);
        bVar8 = uVar7 < uVar6;
        uVar7 = uVar7 - uVar6;
        local_8 = (local_8 - (int)local_10) - (uint)bVar8;
        piVar1 = *(int **)((int)this + 0x2c);
        *piVar1 = *piVar1 - uVar6;
        **(int **)((int)this + 0x1c) = **(int **)((int)this + 0x1c) + uVar6;
      }
      local_c = (uint *)((int)local_c + uVar6);
    } while (0 < local_8);
    if (local_8 < 0) break;
    if (uVar7 == 0) {
      return CONCAT44(param_3 - local_8,param_2);
    }
  }
LAB_00482c28:
  return CONCAT44((param_3 - local_8) - (uint)(param_2 < uVar7),param_2 - uVar7);
}

