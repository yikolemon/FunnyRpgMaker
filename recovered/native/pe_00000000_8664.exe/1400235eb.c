/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400235eb */

undefined8 *
FUN_1400235eb(undefined8 *param_1,longlong param_2,uint *param_3,uint *param_4,int param_5,
             uint param_6,undefined8 param_7)

{
  uint uVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 local_70;
  undefined8 local_68;
  int local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  int iStack_54;
  char local_50;
  undefined4 local_4c;
  byte local_48;
  uint local_44;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  uVar1 = *param_4;
  uVar6 = 0x2e;
  if ((uVar1 >> 0xe & 1) != 0) {
    local_70 = param_7;
    FUN_14001b94e(&local_70,&local_60);
    plVar3 = (longlong *)FUN_14001bd67(&local_60);
    uVar1 = (**(code **)(*plVar3 + 0x18))(plVar3);
    uVar6 = (ulonglong)uVar1;
    if ((longlong *)CONCAT44(iStack_54,local_58) != (longlong *)0x0) {
      puVar4 = (undefined8 *)(**(code **)(*(longlong *)CONCAT44(iStack_54,local_58) + 0x10))();
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)(puVar4,1);
      }
    }
    uVar1 = *param_4;
  }
  local_50 = (char)uVar6;
  uVar7 = *param_3 | 1;
  uVar2 = 0x1f;
  if (uVar7 != 0) {
    for (; uVar7 >> uVar2 == 0; uVar2 = uVar2 - 1) {
    }
  }
  uVar9 = (ulonglong)*param_3 + *(longlong *)(&DAT_1401c9bf0 + (ulonglong)uVar2 * 8);
  iStack_54 = (int)(uVar9 >> 0x20);
  if (((byte)uVar1 & 7) == 1) {
LAB_1400236fc:
    local_44 = (param_3[1] + iStack_54) - 1;
    lVar10 = (longlong)(int)((iStack_54 + 1) - (uint)(param_5 == 0));
    if ((uVar1 >> 0xd & 1) == 0) {
      uVar9 = 0;
      uVar6 = uVar6 & 0xff;
      if (iStack_54 == 1) {
        uVar6 = uVar9;
      }
      local_50 = (char)uVar6;
    }
    else {
      uVar9 = 0;
      if (0 < (int)(param_4[3] - iStack_54)) {
        uVar9 = (ulonglong)(param_4[3] - iStack_54);
      }
      lVar10 = lVar10 + uVar9;
    }
    uVar2 = -local_44;
    if ((int)-local_44 < 0) {
      uVar2 = local_44;
    }
    lVar5 = 4;
    if (99 < uVar2) {
      lVar5 = 6 - (ulonglong)(uVar2 < 1000);
    }
    lVar10 = (lVar5 + lVar10 + 1) - (ulonglong)(local_50 == '\0');
    local_48 = ((uVar1 >> 0xc & 1) == 0) << 5 | 0x45;
    local_60 = param_5;
    uStack_5c = (undefined4)*(undefined8 *)param_3;
    local_58 = (undefined4)((ulonglong)*(undefined8 *)param_3 >> 0x20);
    local_4c = (undefined4)uVar9;
    if ((int)param_4[2] < 1) {
      uVar6 = lVar10 + *(longlong *)(param_2 + 8);
      if (*(ulonglong *)(param_2 + 0x10) < uVar6) {
        (**(code **)(param_2 + 0x18))(param_2,uVar6);
      }
      FUN_140023c6c(&local_60,&local_68,param_2);
      *param_1 = local_68;
    }
    else {
      FUN_140024aec(param_1,param_2,param_4,lVar10,lVar10,&local_60);
    }
  }
  else {
    if ((uVar1 & 7) != 2) {
      iVar8 = param_3[1] + iStack_54;
      uVar2 = param_4[3];
      if ((int)param_4[3] < 1) {
        uVar2 = param_6;
      }
      if ((iVar8 < -3) || ((int)uVar2 < iVar8)) goto LAB_1400236fc;
    }
    FUN_14002384c(param_1,param_2,param_3,uVar9 >> 0x20,uVar6 & 0xff,param_4,param_5,param_7);
  }
  return param_1;
}

