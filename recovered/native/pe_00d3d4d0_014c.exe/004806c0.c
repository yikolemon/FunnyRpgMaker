/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004806c0 */

undefined8 __thiscall FUN_004806c0(void *this,uint *param_1,uint param_2,int param_3)

{
  code *pcVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  int local_c;
  
  iVar5 = param_3;
  uVar6 = param_2;
  if ((-1 < param_3) && ((0 < param_3 || (param_2 != 0)))) {
    do {
      if ((uint *)**(undefined4 **)((int)this + 0x1c) == (uint *)0x0) {
        uVar3 = 0;
      }
      else {
        uVar3 = **(uint **)((int)this + 0x2c);
      }
      local_c = (int)uVar3 >> 0x1f;
      if ((local_c < 0) || ((-1 < (int)uVar3 && (uVar3 == 0)))) {
        pcVar1 = *(code **)(*(int *)this + 0x1c);
        (*(code *)PTR_guard_check_icall_00508898)();
        sVar2 = (*pcVar1)();
        if (sVar2 == -1) break;
        bVar7 = uVar6 != 0;
        uVar6 = uVar6 - 1;
        iVar5 = iVar5 + -1 + (uint)bVar7;
        *(short *)param_1 = sVar2;
        iVar4 = 2;
      }
      else {
        if ((iVar5 <= local_c) && ((iVar5 < local_c || (uVar6 < uVar3)))) {
          uVar3 = uVar6;
          local_c = iVar5;
        }
        FUN_004878c0(param_1,(uint *)**(undefined4 **)((int)this + 0x1c),uVar3 * 2);
        bVar7 = uVar6 < uVar3;
        uVar6 = uVar6 - uVar3;
        iVar5 = (iVar5 - local_c) - (uint)bVar7;
        **(int **)((int)this + 0x2c) = **(int **)((int)this + 0x2c) - uVar3;
        iVar4 = uVar3 * 2;
        **(int **)((int)this + 0x1c) = **(int **)((int)this + 0x1c) + iVar4;
      }
      param_1 = (uint *)((int)param_1 + iVar4);
      if ((iVar5 < 1) && ((iVar5 < 0 || (uVar6 == 0)))) break;
    } while( true );
  }
  return CONCAT44((param_3 - iVar5) - (uint)(param_2 < uVar6),param_2 - uVar6);
}

