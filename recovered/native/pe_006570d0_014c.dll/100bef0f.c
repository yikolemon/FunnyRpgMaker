/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100bef0f */

ulonglong FUN_100bef0f(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  bVar3 = (SBORROW4(0x4e94,uVar2) != SBORROW4(0x4e94 - uVar2,(uint)(0x914f0000 < uVar1))) ==
          (int)((0x4e94 - uVar2) - (uint)(0x914f0000 < uVar1)) < 0;
  if (bVar3) {
    uVar7 = __alldiv(uVar1,uVar2,1000000,0);
    lVar4 = (uVar7 & 0xffffffff) * 1000000;
    iVar6 = (int)(uVar7 >> 0x20) * 1000000 + (int)((ulonglong)lVar4 >> 0x20);
    uVar1 = (uint)((uint)lVar4 < uVar1);
    iVar5 = iVar6 - uVar2;
    iVar5 = (uint)((SBORROW4(iVar6,uVar2) != SBORROW4(iVar5,uVar1)) != (int)(iVar5 - uVar1) < 0) +
            (int)uVar7;
  }
  else {
    iVar5 = 86400000;
  }
  return (ulonglong)CONCAT14(!bVar3,iVar5);
}

