/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10234030 */

undefined8 __thiscall FUN_10234030(int *param_1,short *param_2,uint param_3,int param_4)

{
  code *pcVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  int local_c;
  
  iVar5 = param_4;
  uVar6 = param_3;
  if ((-1 < param_4) && ((0 < param_4 || (param_3 != 0)))) {
    do {
      if (*(int *)param_1[7] == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(uint *)param_1[0xb];
      }
      local_c = (int)uVar3 >> 0x1f;
      if ((local_c < 0) || ((-1 < (int)uVar3 && (uVar3 == 0)))) {
        pcVar1 = *(code **)(*param_1 + 0x1c);
        (*(code *)PTR_guard_check_icall_1035d810)();
        sVar2 = (*pcVar1)();
        if (sVar2 == -1) break;
        bVar7 = uVar6 != 0;
        uVar6 = uVar6 - 1;
        iVar5 = iVar5 + -1 + (uint)bVar7;
        *param_2 = sVar2;
        iVar4 = 2;
      }
      else {
        if ((iVar5 <= local_c) && ((iVar5 < local_c || (uVar6 < uVar3)))) {
          uVar3 = uVar6;
          local_c = iVar5;
        }
        FUN_1025b2d0(param_2,*(int *)param_1[7],uVar3 * 2);
        bVar7 = uVar6 < uVar3;
        uVar6 = uVar6 - uVar3;
        iVar5 = (iVar5 - local_c) - (uint)bVar7;
        *(int *)param_1[0xb] = *(int *)param_1[0xb] - uVar3;
        iVar4 = uVar3 * 2;
        *(int *)param_1[7] = *(int *)param_1[7] + iVar4;
      }
      param_2 = (short *)((int)param_2 + iVar4);
      if ((iVar5 < 1) && ((iVar5 < 0 || (uVar6 == 0)))) break;
    } while( true );
  }
  return CONCAT44((param_4 - iVar5) - (uint)(param_3 < uVar6),param_3 - uVar6);
}

