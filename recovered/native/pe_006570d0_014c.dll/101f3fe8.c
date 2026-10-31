/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101f3fe8 */

undefined4 FUN_101f3fe8(int *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  param_1[0xb] = param_2;
  FUN_101c2486(*param_1,param_2);
  iVar4 = FUN_101f693f();
  if (iVar4 != 0) {
    iVar1 = *(int *)(*param_1 + 0x2c8);
    puVar2 = *(undefined4 **)param_1[10];
    iVar3 = *(int *)(iVar1 + 0x59c);
    (**(code **)(iVar4 + 4))(*puVar2,param_1[4],param_1[5],0,0);
    for (iVar7 = *(int *)(iVar1 + 0x7e4); iVar7 != 0; iVar7 = iVar7 + -1) {
      iVar6 = *(int *)(*(int *)(iVar1 + 0x7e4 + iVar7 * 4) + 0x40);
      iVar5 = param_1[4];
      if (iVar3 == iVar6) {
        iVar6 = param_1[5];
      }
      else {
        iVar5 = FUN_101c16ea(iVar5,iVar3,iVar6);
        iVar6 = FUN_101c16ea(param_1[5],iVar3,iVar6);
      }
      (**(code **)(iVar4 + 4))(puVar2[iVar7],iVar5,iVar6,0,0);
    }
  }
  return 0;
}

