/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140021a31 */

undefined8 FUN_140021a31(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined8 uVar9;
  
  uVar9 = 6;
  if (param_1 != (uint *)0x0) {
    uVar5 = *param_1;
    uVar4 = param_1[3];
    uVar6 = FUN_14002193c(uVar5,uVar4);
    uVar1 = param_1[1];
    uVar2 = param_1[2];
    uVar7 = FUN_14002193c(uVar1,uVar2);
    uVar8 = (int)uVar6 - (int)uVar7;
    if (uVar8 != 0) {
      iVar3 = FUN_14001ecff(uVar1,uVar8);
      param_1[1] = -iVar3;
      iVar3 = FUN_14001ecff(uVar2,uVar8);
      param_1[2] = -iVar3;
      uVar4 = FUN_14001ecff(uVar4,uVar8);
      *param_1 = uVar4;
      uVar5 = FUN_14001ecff(uVar5,uVar8);
      param_1[3] = uVar5;
      uVar9 = 0;
    }
  }
  return uVar9;
}

