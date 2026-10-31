/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140027809 */

undefined8 *
FUN_140027809(undefined8 *param_1,longlong param_2,ulonglong *param_3,uint *param_4,int param_5,
             uint param_6,undefined8 param_7)

{
  uint uVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 local_80;
  undefined8 local_78;
  int local_70 [2];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int local_58;
  char local_54;
  undefined4 local_50;
  byte local_4c;
  uint local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  uVar1 = *param_4;
  uVar6 = 0x2e;
  if ((uVar1 >> 0xe & 1) != 0) {
    local_80 = param_7;
    FUN_14001b94e(&local_80,local_70);
    plVar3 = (longlong *)FUN_14001bd67(local_70);
    uVar1 = (**(code **)(*plVar3 + 0x18))(plVar3);
    uVar6 = (ulonglong)uVar1;
    if ((longlong *)CONCAT44(uStack_64,local_68) != (longlong *)0x0) {
      puVar4 = (undefined8 *)(**(code **)(*(longlong *)CONCAT44(uStack_64,local_68) + 0x10))();
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)(puVar4,1);
      }
    }
    uVar1 = *param_4;
  }
  local_54 = (char)uVar6;
  uVar8 = *param_3 | 1;
  lVar9 = 0x3f;
  if (uVar8 != 0) {
    for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
    }
  }
  local_58 = (uint)(byte)(&DAT_1401c9dc0)[lVar9] -
             (uint)(*param_3 <
                   *(ulonglong *)(&DAT_1401c9e00 + (ulonglong)(byte)(&DAT_1401c9dc0)[lVar9] * 8));
  if (((byte)uVar1 & 7) == 1) {
LAB_140027929:
    local_48 = (local_58 + (int)param_3[1]) - 1;
    lVar9 = (longlong)(int)((local_58 + 1) - (uint)(param_5 == 0));
    if ((uVar1 >> 0xd & 1) == 0) {
      uVar8 = 0;
      uVar6 = uVar6 & 0xff;
      if (local_58 == 1) {
        uVar6 = uVar8;
      }
      local_54 = (char)uVar6;
    }
    else {
      uVar8 = 0;
      if (0 < (int)(param_4[3] - local_58)) {
        uVar8 = (ulonglong)(param_4[3] - local_58);
      }
      lVar9 = lVar9 + uVar8;
    }
    uVar2 = -local_48;
    if ((int)-local_48 < 0) {
      uVar2 = local_48;
    }
    lVar5 = 4;
    if (99 < uVar2) {
      lVar5 = 6 - (ulonglong)(uVar2 < 1000);
    }
    lVar9 = (lVar5 + lVar9 + 1) - (ulonglong)(local_54 == '\0');
    local_4c = ((uVar1 >> 0xc & 1) == 0) << 5 | 0x45;
    local_70[0] = param_5;
    local_68 = (undefined4)*param_3;
    uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_60 = (undefined4)param_3[1];
    uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
    local_50 = (undefined4)uVar8;
    if ((int)param_4[2] < 1) {
      uVar6 = lVar9 + *(longlong *)(param_2 + 8);
      if (*(ulonglong *)(param_2 + 0x10) < uVar6) {
        (**(code **)(param_2 + 0x18))(param_2,uVar6);
      }
      FUN_140027e9a(local_70,&local_78,param_2);
      *param_1 = local_78;
    }
    else {
      FUN_1400288ee(param_1,param_2,param_4,lVar9,lVar9,local_70);
    }
  }
  else {
    if ((uVar1 & 7) != 2) {
      iVar7 = local_58 + (int)param_3[1];
      uVar2 = param_4[3];
      if ((int)param_4[3] < 1) {
        uVar2 = param_6;
      }
      if ((iVar7 < -3) || ((int)uVar2 < iVar7)) goto LAB_140027929;
    }
    FUN_140027a7a(param_1,param_2,param_3,local_58,uVar6 & 0xff,param_4,param_5,param_7);
  }
  return param_1;
}

