/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14005f4ce */

undefined8 FUN_14005f4ce(undefined8 *param_1,int param_2)

{
  undefined8 ***pppuVar1;
  undefined8 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined8 ***pppuVar5;
  undefined8 uVar6;
  undefined8 ***pppuVar7;
  undefined8 **local_58 [2];
  ulonglong local_48;
  ulonglong local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  uVar6 = *param_1;
  while ((0x3e < *(int *)(param_1 + 0xe) + 1U ||
         ((0x4800800000000001U >> ((ulonglong)(*(int *)(param_1 + 0xe) + 1U) & 0x3f) & 1) == 0))) {
    FUN_14005ddac(param_1);
  }
  uVar2 = *param_1;
  FUN_14005e026(param_1,param_2,param_2 == 0x3a);
  FUN_14005e026(param_1,0x5d,param_2 == 0x3a);
  if (param_2 == 0x3a) {
    uVar4 = FUN_14005e836(param_1[0xb],uVar6,uVar2,*(uint *)(param_1 + 0xd) >> 8 & 1);
    if ((short)uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_14005deae(param_1,1);
    }
    FUN_14005e95c(param_1 + 7,uVar4,0);
    uVar6 = 2;
  }
  else {
    FUN_14005f6b4(param_1[0xb],local_58,uVar6,uVar2);
    if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_14005deae(param_1,0);
    }
    if (local_48 >> 0x20 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_14005deae(param_1,9);
    }
    pppuVar5 = local_58;
    if (7 < local_40) {
      pppuVar5 = (undefined8 ***)local_58[0];
    }
    if (param_2 == 0x2e && local_48 == 1) {
      *(undefined2 *)(param_1 + 0xf) = *(undefined2 *)pppuVar5;
      uVar6 = 1;
    }
    else {
      pppuVar1 = (undefined8 ***)((longlong)pppuVar5 + local_48 * 2);
      pppuVar7 = pppuVar5;
      if ((*(byte *)((longlong)param_1 + 0x69) & 1) != 0) {
        for (; pppuVar7 != pppuVar1; pppuVar7 = (undefined8 ***)((longlong)pppuVar7 + 2)) {
          uVar3 = (**(code **)(**(longlong **)(param_1[0xb] + 8) + 0x40))
                            (*(longlong **)(param_1[0xb] + 8),*(undefined2 *)pppuVar7);
          *(undefined2 *)pppuVar7 = uVar3;
        }
      }
      if (param_2 == 0x3d) {
        uVar6 = 2;
        FUN_14005f70e(param_1 + 7,pppuVar5,pppuVar1);
      }
      else {
        uVar6 = 2;
        FUN_14005f916(param_1 + 7,pppuVar5,pppuVar1);
      }
    }
    FUN_140001e90(local_58);
  }
  return uVar6;
}

