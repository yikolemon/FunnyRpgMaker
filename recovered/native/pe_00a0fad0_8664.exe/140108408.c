/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140108408 */

undefined8
FUN_140108408(undefined1 *param_1,longlong param_2,longlong param_3,longlong param_4,
             undefined8 param_5,__crt_locale_pointers *param_6)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 local_res8 [8];
  longlong local_a8;
  longlong local_a0;
  char local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  char local_60;
  undefined1 *local_58;
  longlong local_50;
  undefined1 *local_48;
  longlong local_40;
  undefined8 local_38;
  undefined1 local_30;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_a8,param_6);
  uVar7 = 0;
  uVar1 = *(undefined4 *)(local_a0 + 0x18);
  if ((((param_1 == (undefined1 *)0x0) || (param_2 == 0)) || (*param_1 = 0, param_3 == 0)) ||
     (param_4 == 0)) {
    puVar3 = (undefined4 *)FUN_140113dd4();
    *puVar3 = 0x16;
    FUN_140120ee8();
  }
  else {
    local_88 = 0;
    local_80 = 0;
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
    local_60 = '\0';
    iVar2 = FUN_140108574(param_3,&local_88,local_res8,uVar1);
    if (iVar2 == 0) {
      lVar4 = _malloc_base(param_2 * 2);
      uVar6 = uVar7;
      if ((lVar4 != 0) &&
         (lVar5 = FUN_14010888c(lVar4,param_2,local_78,param_4,param_5,param_6), lVar5 != 0)) {
        local_38 = 0;
        local_30 = 0;
        local_58 = param_1;
        local_50 = param_2;
        local_48 = param_1;
        local_40 = param_2;
        iVar2 = FUN_140108714(lVar4,&local_58,local_res8,uVar1);
        uVar6 = local_38;
        if (iVar2 != 0) {
          uVar6 = uVar7;
        }
      }
      FUN_1401212e0(lVar4);
      uVar7 = uVar6;
    }
    if (local_60 != '\0') {
      FUN_1401212e0(local_78);
    }
  }
  if (local_90 != '\0') {
    *(uint *)(local_a8 + 0x3a8) = *(uint *)(local_a8 + 0x3a8) & 0xfffffffd;
  }
  return uVar7;
}

