/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14004e151 */

undefined8 FUN_14004e151(longlong *param_1,ulonglong param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  *(int *)(param_1 + 8) = (int)param_2;
  FUN_14001ec4d(*param_1,param_2);
  lVar7 = FUN_140050ea0(param_1);
  if (lVar7 != 0) {
    lVar3 = *(longlong *)(*param_1 + 0x3e0);
    puVar4 = *(undefined8 **)param_1[7];
    uVar1 = *(uint *)(lVar3 + 0x620);
    (**(code **)(lVar7 + 8))(*puVar4,*(undefined4 *)((longlong)param_1 + 0x1c),(int)param_1[4],0,0);
    for (uVar8 = (ulonglong)*(uint *)(lVar3 + 0x8a8); uVar8 != 0; uVar8 = uVar8 - 1) {
      uVar2 = *(uint *)(*(longlong *)(lVar3 + 0x8a8 + uVar8 * 8) + 0x40);
      uVar5 = *(uint *)((longlong)param_1 + 0x1c);
      if (uVar1 == uVar2) {
        iVar6 = (int)param_1[4];
      }
      else {
        uVar5 = FUN_14001de7c(uVar5,uVar1,uVar2);
        iVar6 = FUN_14001de7c(*(uint *)(param_1 + 4),uVar1,uVar2);
      }
      (**(code **)(lVar7 + 8))(puVar4[uVar8],uVar5,iVar6,0,0);
    }
  }
  return 0;
}

