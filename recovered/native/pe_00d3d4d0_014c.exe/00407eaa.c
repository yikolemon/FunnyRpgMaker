/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00407eaa */

undefined8 __thiscall FUN_00407eaa(void *this,uint *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  
  uVar4 = param_2;
  uVar5 = param_3;
  if ((int)(uint)(param_2 == 0) <= (int)param_3) {
    do {
      if (((uint *)**(undefined4 **)((int)this + 0x20) == (uint *)0x0) ||
         (uVar1 = **(uint **)((int)this + 0x30), (int)uVar1 < 1)) {
        sVar2 = (**(code **)(*(int *)this + 0xc))((short)*param_1);
        if (sVar2 == -1) break;
        param_1 = (uint *)((int)param_1 + 2);
        bVar7 = uVar4 != 0;
        uVar4 = uVar4 - 1;
        uVar5 = (uVar5 - 1) + (uint)bVar7;
      }
      else {
        uVar3 = uVar5;
        uVar6 = uVar4;
        if ((uVar4 < uVar1) <= uVar5) {
          uVar3 = 0;
          uVar6 = uVar1;
        }
        FUN_004878c0((uint *)**(undefined4 **)((int)this + 0x20),param_1,uVar6 * 2);
        param_1 = (uint *)((int)param_1 + uVar6 * 2);
        bVar7 = uVar4 < uVar6;
        uVar4 = uVar4 - uVar6;
        uVar5 = (uVar5 - uVar3) - (uint)bVar7;
        **(int **)((int)this + 0x30) = **(int **)((int)this + 0x30) - uVar6;
        **(int **)((int)this + 0x20) = **(int **)((int)this + 0x20) + uVar6 * 2;
      }
    } while ((SBORROW4(0,uVar5) != SBORROW4(-uVar5,(uint)(uVar4 != 0))) !=
             (int)(-uVar5 - (uint)(uVar4 != 0)) < 0);
  }
  return CONCAT44((param_3 - uVar5) - (uint)(param_2 < uVar4),param_2 - uVar4);
}

