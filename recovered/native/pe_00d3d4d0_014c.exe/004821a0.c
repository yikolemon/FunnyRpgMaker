/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004821a0 */

undefined8 __thiscall FUN_004821a0(void *this,uint *param_1,uint param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  int local_c;
  
  iVar3 = param_3;
  uVar5 = param_2;
  if ((-1 < param_3) && ((0 < param_3 || (param_2 != 0)))) {
    do {
      if ((uint *)**(undefined4 **)((int)this + 0x1c) == (uint *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = **(uint **)((int)this + 0x2c);
      }
      local_c = (int)uVar4 >> 0x1f;
      if ((local_c < 0) || ((-1 < (int)uVar4 && (uVar4 == 0)))) {
        pcVar1 = *(code **)(*(int *)this + 0x1c);
        (*(code *)PTR_guard_check_icall_00508898)();
        iVar2 = (*pcVar1)();
        if (iVar2 == -1) break;
        bVar6 = uVar5 != 0;
        uVar5 = uVar5 - 1;
        uVar4 = 1;
        iVar3 = iVar3 + -1 + (uint)bVar6;
        *(char *)param_1 = (char)iVar2;
      }
      else {
        if ((iVar3 <= local_c) && ((iVar3 < local_c || (uVar5 < uVar4)))) {
          uVar4 = uVar5;
          local_c = iVar3;
        }
        FUN_004878c0(param_1,(uint *)**(undefined4 **)((int)this + 0x1c),uVar4);
        bVar6 = uVar5 < uVar4;
        uVar5 = uVar5 - uVar4;
        iVar3 = (iVar3 - local_c) - (uint)bVar6;
        **(int **)((int)this + 0x2c) = **(int **)((int)this + 0x2c) - uVar4;
        **(int **)((int)this + 0x1c) = **(int **)((int)this + 0x1c) + uVar4;
      }
      param_1 = (uint *)((int)param_1 + uVar4);
      if ((iVar3 < 1) && ((iVar3 < 0 || (uVar5 == 0)))) break;
    } while( true );
  }
  return CONCAT44((param_3 - iVar3) - (uint)(param_2 < uVar5),param_2 - uVar5);
}

