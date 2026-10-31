/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0044b760 */

undefined4 __cdecl FUN_0044b760(int *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  param_1[0xb] = param_2;
  FUN_0041ea03(*param_1,param_2);
  iVar5 = FUN_0044e0b7(param_1);
  if (iVar5 != 0) {
    iVar1 = *(int *)(*param_1 + 0x2c8);
    puVar2 = *(undefined4 **)param_1[10];
    uVar3 = *(uint *)(iVar1 + 0x59c);
    (**(code **)(iVar5 + 4))(*puVar2,param_1[4],param_1[5],0,0);
    for (iVar8 = *(int *)(iVar1 + 0x7e4); iVar8 != 0; iVar8 = iVar8 + -1) {
      uVar4 = *(uint *)(*(int *)(iVar1 + 0x7e4 + iVar8 * 4) + 0x40);
      uVar6 = param_1[4];
      if (uVar3 == uVar4) {
        iVar7 = param_1[5];
      }
      else {
        uVar6 = FUN_0041dcda(uVar6,uVar3,uVar4);
        iVar7 = FUN_0041dcda(param_1[5],uVar3,uVar4);
      }
      (**(code **)(iVar5 + 4))(puVar2[iVar8],uVar6,iVar7,0,0);
    }
  }
  return 0;
}

