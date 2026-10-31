/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101137c8 */

undefined8 *
FUN_101137c8(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  uVar1 = DAT_1039d74c;
  iVar2 = FUN_100f9590(DAT_1039d74c,param_5);
  fVar3 = *(float *)(iVar2 + 0xc);
  uVar5 = 0;
  iVar2 = FUN_100f9590(uVar1,param_4,fVar3,0,0,0);
  fVar6 = *(float *)(iVar2 + 0xc);
  uVar7 = 0;
  uVar8 = 0;
  uVar9 = 0;
  iVar2 = FUN_100f9590(uVar1,param_3);
  fVar4 = *(float *)(iVar2 + 0xc);
  iVar2 = FUN_100f9590(uVar1,param_2,fVar4,fVar3,0,uVar5,fVar6,uVar7,uVar8,uVar9);
  *param_1 = CONCAT44(fVar3 - fVar6,fVar4 - *(float *)(iVar2 + 0xc));
  return param_1;
}

