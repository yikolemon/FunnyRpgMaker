/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140275b10 */

undefined8 * FUN_140275b10(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong *local_68;
  longlong *plStack_60;
  undefined8 local_58;
  undefined8 *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_68 = (longlong *)0x0;
  plStack_60 = (longlong *)0x0;
  local_58 = 0;
  local_50 = param_1;
  FUN_1402776d0(&local_68);
  uVar10 = 0;
  while (uVar10 < (ulonglong)param_2[2]) {
    puVar5 = param_2;
    if (3 < (ulonglong)param_2[3]) {
      puVar5 = (undefined8 *)*param_2;
    }
    iVar1 = *(int *)((longlong)puVar5 + uVar10 * 4);
    if (iVar1 == 10) {
      FUN_1402779d8(plStack_60 + -4,"t (",1);
      uVar10 = uVar10 + 1;
      FUN_1402776d0(&local_68);
    }
    else if (iVar1 == 0xd) {
      if ((uVar10 + 1 < (ulonglong)param_2[2]) &&
         (*(int *)((longlong)puVar5 + uVar10 * 4 + 4) == 10)) {
        FUN_1402779d8(plStack_60 + -4,"or at (",2);
        uVar10 = uVar10 + 2;
      }
      else {
        FUN_1402779d8(plStack_60 + -4,"Descriptor at (",1);
        uVar10 = uVar10 + 1;
      }
      FUN_1402776d0(&local_68);
    }
    else {
      plStack_60[-5] = plStack_60[-5] + 1;
      uVar10 = uVar10 + 1;
    }
  }
  if (local_68 != plStack_60) {
    if ((plStack_60[-5] == 0) && (plStack_60[-2] == 0)) {
      if (1 < (ulonglong)(((longlong)plStack_60 - (longlong)local_68 >> 3) * -0x3333333333333333)) {
        FUN_140272f3b(plStack_60 + -5);
        plStack_60 = plStack_60 + -5;
      }
    }
    if (local_68 != plStack_60) {
      uVar10 = 0;
      plVar2 = local_68;
      do {
        uVar10 = uVar10 + *plVar2;
        plVar2 = plVar2 + 5;
      } while (plVar2 != plStack_60);
      if (uVar10 != 0) {
        *local_50 = 0;
        local_50[1] = 0;
        local_50[2] = 0;
        local_50[3] = 3;
        lVar9 = 0;
        uVar6 = 0;
        uVar11 = 0;
        while( true ) {
          uVar3 = ((longlong)plStack_60 - (longlong)local_68 >> 3) * -0x3333333333333333;
          if (uVar3 <= uVar11) break;
          lVar9 = lVar9 + local_68[uVar11 * 5];
          uVar4 = param_3[2];
          if (uVar11 + 1 != uVar3) {
            uVar4 = (uVar4 * lVar9 + (uVar10 >> 1)) / uVar10;
          }
          puVar5 = param_3;
          if (3 < (ulonglong)param_3[3]) {
            puVar5 = (undefined8 *)*param_3;
          }
          FUN_140274cdc(local_50,(longlong)puVar5 + uVar6 * 4,uVar4 - uVar6);
          if ((ulonglong)local_68[uVar11 * 5 + 4] < 4) {
            plVar2 = local_68 + uVar11 * 5 + 1;
          }
          else {
            plVar2 = (longlong *)local_68[uVar11 * 5 + 1];
          }
          FUN_140274cdc(local_50,plVar2,local_68[uVar11 * 5 + 3]);
          uVar6 = uVar4;
          uVar11 = uVar11 + 1;
        }
        goto LAB_140275db9;
      }
    }
  }
  FUN_1402749fa(local_50,param_3);
  plVar2 = plStack_60;
  for (plVar8 = local_68; plVar8 != plVar2; plVar8 = plVar8 + 5) {
    if ((ulonglong)plVar8[4] < 4) {
      plVar7 = plVar8 + 1;
    }
    else {
      plVar7 = (longlong *)plVar8[1];
    }
    FUN_140274cdc(local_50,plVar7,plVar8[3]);
  }
LAB_140275db9:
  FUN_140272ec4(&local_68);
  return local_50;
}

