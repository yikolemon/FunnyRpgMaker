/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400133e3 */

longlong *
FUN_1400133e3(longlong *param_1,undefined8 *param_2,uint param_3,int *param_4,longlong param_5)

{
  longlong *plVar1;
  undefined8 *puVar2;
  wchar_t *pwVar3;
  byte bVar4;
  undefined8 local_98;
  undefined8 uStack_90;
  int local_88;
  undefined8 **local_78;
  undefined8 local_70;
  undefined8 **local_68;
  longlong *local_60;
  undefined8 local_58;
  ulonglong local_50;
  byte local_45;
  undefined1 local_44;
  byte local_43;
  byte local_42;
  byte local_41;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  local_41 = (byte)param_3;
  if (((char)param_4[2] == '\0') || ((char)param_4[2] == 's')) {
    if ((char)param_4[3] == '\x01') {
      *(undefined1 *)(param_4 + 3) = 0;
      if (param_5 == 0) {
        local_60 = FUN_140086860('\x01');
      }
      else {
        local_60 = *(longlong **)(param_5 + 8);
        (**(code **)(*local_60 + 8))(local_60);
      }
      plVar1 = FUN_140009dcb((longlong)&local_68);
      if ((local_60 != (longlong *)0x0) &&
         (puVar2 = (undefined8 *)(**(code **)(*local_60 + 0x10))(), puVar2 != (undefined8 *)0x0)) {
        (**(code **)*puVar2)(puVar2,1);
      }
      if (local_41 == 0) {
        local_44 = 1;
        (**(code **)(*plVar1 + 0x30))(plVar1,&local_68);
      }
      else {
        (**(code **)(*plVar1 + 0x38))(plVar1,&local_68);
        local_45 = 0;
      }
      local_78 = &local_68;
      if (7 < local_50) {
        local_78 = local_68;
      }
      local_70 = local_58;
      bVar4 = local_41 ^ 1;
      local_43 = bVar4;
      local_42 = bVar4;
      FUN_1400111a4(param_1,param_2,(longlong *)&local_78,param_4);
      local_43 = bVar4;
      local_42 = bVar4;
      if (local_41 == 0) {
        FUN_140002174((longlong *)&local_68);
      }
      local_45 = local_41;
      if (local_41 != 0) {
        FUN_140002174((longlong *)&local_68);
      }
    }
    else {
      pwVar3 = L"false";
      if (local_41 != 0) {
        pwVar3 = L"true";
      }
      FUN_140013b57(param_1,param_2,(undefined1 (*) [32])pwVar3,param_4,param_5);
    }
  }
  else {
    local_88 = param_4[4];
    local_98 = *(undefined8 *)param_4;
    uStack_90 = *(undefined8 *)(param_4 + 2);
    FUN_1400136b0(param_1,param_2,param_3,(int *)&local_98,param_5);
  }
  return param_1;
}

