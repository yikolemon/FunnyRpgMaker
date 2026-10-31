/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800b23cb */

ulonglong FUN_1800b23cb(undefined8 *param_1,undefined8 *param_2)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  undefined8 local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  if (param_2[2] == 0) {
    uVar5 = 0;
  }
  else {
    if (7 < (ulonglong)param_2[3]) {
      param_2 = (undefined8 *)*param_2;
    }
    uVar4 = FUN_180239cc0(&local_48,param_2,0x80,0x2000000);
    uVar5 = (ulonglong)uVar4;
    if (uVar4 == 0) {
      FUN_180004aa4(param_1,0x104,0);
      bVar2 = 1;
      iVar3 = 0;
      do {
        while( true ) {
          iVar8 = iVar3;
          puVar6 = param_1;
          if (7 < (ulonglong)param_1[3]) {
            puVar6 = (undefined8 *)*param_1;
          }
          uVar4 = *(uint *)(param_1 + 2);
          uVar5 = FUN_180239d60(local_48,puVar6,uVar4,iVar8);
          if ((uint)uVar5 == 0) break;
          FUN_180004aa4(param_1,uVar5 & 0xffffffff,0);
          iVar3 = iVar8;
          if ((uint)uVar5 < uVar4) {
            bVar1 = true;
            goto code_r0x0001800b24c4;
          }
        }
        bVar1 = (bool)(bVar2 & uVar5 == 0x300000000);
        bVar2 = 0;
        iVar3 = 2;
      } while (bVar1);
      uVar5 = uVar5 >> 0x20;
      param_1[2] = 0;
      puVar6 = param_1;
      if (7 < (ulonglong)param_1[3]) {
        puVar6 = (undefined8 *)*param_1;
      }
      *(undefined2 *)puVar6 = 0;
      bVar1 = false;
    }
    else {
      bVar1 = false;
      iVar8 = 0;
    }
code_r0x0001800b24c4:
    FUN_180239d40(local_48);
    if (bVar1) {
      if (iVar8 == 0) {
        puVar6 = param_1;
        if (7 < (ulonglong)param_1[3]) {
          puVar6 = (undefined8 *)*param_1;
        }
        uVar9 = 0;
        uVar5 = 0;
        if (5 < (ulonglong)param_1[2]) {
          lVar7 = thunk_FUN_18023bb00(puVar6,L"\\\\?\\",4);
          if ((lVar7 == 4) && ((*(uint *)(puVar6 + 1) & 0xffffffdf) - 0x3a0041 < 0x1a)) {
            FUN_1800b31b6(param_1,0,4);
            uVar5 = 0;
          }
          else {
            uVar5 = uVar9;
            if (7 < (ulonglong)param_1[2]) {
              puVar6 = param_1;
              if (7 < (ulonglong)param_1[3]) {
                puVar6 = (undefined8 *)*param_1;
              }
              lVar7 = thunk_FUN_18023bb00(puVar6,L"\\\\?\\UNC\\",8);
              if (lVar7 == 8) {
                FUN_1800b31b6(param_1,2,6);
              }
            }
          }
        }
      }
      else {
        FUN_180044d90(param_1,0,L"\\\\?\\GLOBALROOT",0xe);
        uVar5 = 0;
      }
    }
  }
  return uVar5 & 0xffffffff;
}

