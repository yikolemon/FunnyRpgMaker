/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180173007 */

void FUN_180173007(longlong *param_1,ulonglong *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  ulonglong uVar6;
  undefined8 ******ppppppuVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  char *local_78;
  undefined8 local_70;
  undefined8 *****local_68 [3];
  ulonglong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  do {
    uVar6 = *param_2;
    lVar8 = *param_1;
    uVar10 = (param_1[1] - lVar8 >> 3) * -0x3333333333333333;
    if (uVar10 <= uVar6) {
      return;
    }
    iVar1 = *(int *)(lVar8 + 4 + uVar6 * 0x28);
    if (uVar6 + 1 < uVar10) {
      iVar2 = *(int *)(lVar8 + 4 + (uVar6 + 1) * 0x28);
      bVar3 = iVar1 < iVar2;
      uVar11 = 0x80be8;
      if (iVar1 < iVar2) {
        uVar11 = 0x808e0;
      }
    }
    else {
      bVar3 = false;
      uVar11 = 0x80be8;
    }
    lVar8 = lVar8 + uVar6 * 0x28;
    FUN_18011810d();
    local_78 = "code: {:03d}, parameters: {}";
    local_70 = 0x1c;
    FUN_180173713(local_68,&local_78,lVar8,lVar8 + 8);
    cVar4 = FUN_18014cfb6("##DrawCodeTree",uVar11);
    cVar5 = FUN_18011aab1();
    if (cVar5 != '\0') {
      ppppppuVar7 = local_68;
      if (0xf < local_50) {
        ppppppuVar7 = (undefined8 ******)local_68[0];
      }
      FUN_18013309a(ppppppuVar7,0);
      thunk_FUN_18010f900();
    }
    FUN_180119893(0,0);
    ppppppuVar7 = local_68;
    if (0xf < local_50) {
      ppppppuVar7 = (undefined8 ******)local_68[0];
    }
    FUN_18013309a(ppppppuVar7,0);
    uVar10 = *param_2;
    uVar6 = uVar10 + 1;
    *param_2 = uVar6;
    if (bVar3) {
      if (cVar4 == '\0') {
        lVar8 = *param_1;
        if (uVar6 < (ulonglong)((param_1[1] - lVar8 >> 3) * -0x3333333333333333)) {
          lVar9 = uVar10 * 0x28 + 0x2c;
          do {
            if (*(int *)(lVar8 + lVar9) <= iVar1) break;
            uVar6 = uVar6 + 1;
            *param_2 = uVar6;
            lVar8 = *param_1;
            lVar9 = lVar9 + 0x28;
          } while (uVar6 < (ulonglong)((param_1[1] - lVar8 >> 3) * -0x3333333333333333));
        }
      }
      else {
        FUN_180173007(param_1,param_2);
        FUN_18014d7a9();
      }
    }
    FUN_18011834f();
    if ((*param_2 < (ulonglong)((param_1[1] - *param_1 >> 3) * -0x3333333333333333)) &&
       (*(int *)(*param_1 + 4 + *param_2 * 0x28) < iVar1)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    FUN_180001ef2(local_68);
    if (!bVar3) {
      return;
    }
  } while( true );
}

