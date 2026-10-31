/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180200b15 */

undefined8 FUN_180200b15(longlong *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  *(undefined4 *)(param_1 + 8) = param_2;
  FUN_1801cc2f2(*param_1);
  lVar7 = FUN_180203864(param_1);
  if (lVar7 != 0) {
    lVar3 = *(longlong *)(*param_1 + 0x3e0);
    puVar4 = *(undefined8 **)param_1[7];
    iVar1 = *(int *)(lVar3 + 0x620);
    (**(code **)(lVar7 + 8))(*puVar4,*(undefined4 *)((longlong)param_1 + 0x1c),(int)param_1[4],0,0);
    for (uVar8 = (ulonglong)*(uint *)(lVar3 + 0x8a8); uVar8 != 0; uVar8 = uVar8 - 1) {
      iVar2 = *(int *)(*(longlong *)(lVar3 + 0x8a8 + uVar8 * 8) + 0x40);
      uVar5 = *(undefined4 *)((longlong)param_1 + 0x1c);
      if (iVar1 == iVar2) {
        uVar6 = (undefined4)param_1[4];
      }
      else {
        uVar5 = FUN_1801cb4a4(uVar5,iVar1,iVar2);
        uVar6 = FUN_1801cb4a4((int)param_1[4],iVar1,iVar2);
      }
      (**(code **)(lVar7 + 8))(puVar4[uVar8],uVar5,uVar6,0,0);
    }
  }
  return 0;
}

