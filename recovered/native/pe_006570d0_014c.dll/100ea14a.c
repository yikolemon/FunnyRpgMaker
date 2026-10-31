/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100ea14a */

undefined4 __fastcall FUN_100ea14a(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  
  uVar9 = FUN_1022c7e0();
  uVar3 = (uint)uVar9 - *(uint *)(param_1 + 0x2010);
  iVar8 = ((int)((ulonglong)uVar9 >> 0x20) - *(int *)(param_1 + 0x2014)) -
          (uint)((uint)uVar9 < *(uint *)(param_1 + 0x2010));
  uVar9 = __alldiv(uVar3,iVar8,10000,0);
  iVar5 = (int)((ulonglong)uVar9 >> 0x20);
  iVar1 = *(int *)(param_1 + 0x2008);
  iVar6 = iVar1 + 300 >> 0x1f;
  uVar4 = 3;
  uVar2 = (uint)(iVar1 + 300U < (uint)uVar9);
  iVar7 = iVar6 - iVar5;
  if (((SBORROW4(iVar6,iVar5) != SBORROW4(iVar7,uVar2)) == (int)(iVar7 - uVar2) < 0) &&
     (iVar7 = (int)(iVar1 + 0x96U) >> 0x1f, uVar4 = 2, uVar2 = (uint)(iVar1 + 0x96U < (uint)uVar9),
     iVar1 = iVar7 - iVar5,
     (SBORROW4(iVar7,iVar5) != SBORROW4(iVar1,uVar2)) == (int)(iVar1 - uVar2) < 0)) {
    uVar2 = (uint)(0x170a6f < uVar3);
    uVar4 = CONCAT31(0x170a,(SBORROW4(0,iVar8) != SBORROW4(-iVar8,uVar2)) !=
                            (int)(-iVar8 - uVar2) < 0);
  }
  return uVar4;
}

