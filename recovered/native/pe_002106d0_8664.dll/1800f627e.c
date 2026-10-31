/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f627e */

void FUN_1800f627e(longlong *param_1)

{
  longlong lVar1;
  DWORD DVar2;
  DWORD DVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong local_38 [2];
  
  local_38[1] = 0xfffffffffffffffe;
  lVar7 = *param_1;
  local_38[0] = lVar7;
  if (lVar7 != 0) {
    lVar1 = lVar7 + 8;
    plVar4 = (longlong *)FUN_1800f60e2(lVar1);
    if (param_1 == plVar4) {
      if (param_1[1] == 0) {
        lVar7 = 0;
      }
      else {
        *(undefined8 *)(param_1[1] + 0x10) = 0;
        lVar7 = param_1[1];
      }
      FUN_1800f61a6(lVar1,lVar7);
    }
    else {
      lVar5 = param_1[2];
      if (lVar5 == 0) {
        puVar6 = (undefined8 *)FUN_1800188ac(lVar7 + 0x10);
        lVar7 = local_38[0];
        if (param_1 == (longlong *)*puVar6) {
          DVar2 = *(DWORD *)(local_38[0] + 0x18);
          DVar3 = GetCurrentThreadId();
          if (DVar2 != DVar3) {
            FUN_1800f61a6(lVar7 + 8,plVar4);
            FUN_1800f61d7(lVar7 + 0x10,param_1,2);
            goto LAB_1800f6349;
          }
        }
        FUN_1800f61a6(lVar7 + 8,plVar4);
      }
      else {
        lVar7 = param_1[1];
        if (lVar7 != 0) {
          *(longlong *)(lVar7 + 0x10) = lVar5;
          lVar5 = param_1[2];
        }
        *(longlong *)(lVar5 + 8) = lVar7;
        FUN_1800f61a6(lVar1,plVar4);
      }
    }
  }
LAB_1800f6349:
  FUN_1800f56b4(local_38);
  return;
}

