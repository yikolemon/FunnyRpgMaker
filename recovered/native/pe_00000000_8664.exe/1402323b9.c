/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402323b9 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1402323b9(longlong param_1,longlong param_2,undefined8 *param_3,ulonglong *param_4,
                       uint param_5,undefined8 param_6)

{
  byte bVar1;
  undefined4 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 local_1138 [4096];
  ulonglong local_138;
  longlong local_130;
  undefined8 local_88;
  undefined8 local_78;
  longlong local_68;
  uint local_54;
  byte local_46;
  undefined1 local_44;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  if (param_3 != (undefined8 *)0x0) {
    *(undefined1 *)(param_3 + 1) = 1;
    FUN_14022aa7a(param_3 + 2,0,local_1138);
  }
  uVar5 = *param_4;
  if (uVar5 == 0) {
    uVar4 = 0;
    goto LAB_1402325b5;
  }
  lVar3 = (ulonglong)(param_1 != param_2 & (byte)(param_5 >> 0xe) & 1) + param_1;
  param_4 = param_4 + 1;
  FUN_14022a3e2(&local_138,lVar3,param_2,param_4,uVar5,*(undefined4 *)(uVar5 + 0x28),
                *(undefined4 *)(uVar5 + 0x20),param_5,local_1138);
  local_130 = local_68;
  local_44 = 0;
  local_88 = 0;
  local_46 = 0;
  bVar1 = FUN_14022b718(&local_138,local_78);
  if (((bVar1 | local_46) & 1) == 0) {
    uVar4 = 0;
    if (((param_5 & 0x40) == 0) && (lVar3 != param_2)) {
      param_4 = &local_138;
      local_54 = local_54 & 0xffffdeff | 0x100;
      do {
        uVar5 = uVar5 & 0xffffffff00000000;
        lVar3 = FUN_1402326e2(param_4,lVar3 + 1,param_2,0,uVar5);
        if (lVar3 == param_2) {
          local_44 = 0;
          local_88 = 0;
          local_46 = 0;
          local_130 = param_2;
          local_68 = param_2;
          uVar2 = FUN_14022b718(&local_138,local_78);
          uVar4 = (ulonglong)CONCAT31((int3)((uint)uVar2 >> 8),(byte)uVar2 | local_46);
          goto LAB_1402324b7;
        }
        local_44 = 0;
        local_88 = 0;
        local_46 = 0;
        local_130 = lVar3;
        local_68 = lVar3;
        bVar1 = FUN_14022b718(param_4,local_78);
      } while (((bVar1 | local_46) & 1) == 0);
      goto LAB_1402324b4;
    }
  }
  else {
LAB_1402324b4:
    uVar4 = CONCAT71((int7)((ulonglong)param_4 >> 8),1);
LAB_1402324b7:
    if ((param_3 != (undefined8 *)0x0) && ((uVar4 & 1) != 0)) {
      FUN_14022a746(&local_138,param_3);
      *param_3 = param_6;
      param_3[5] = param_1;
      *(bool *)(param_3 + 7) = param_1 != param_3[6];
      uVar4 = CONCAT71((int7)(uVar4 >> 8),1);
    }
  }
  FUN_14022a88e(&local_138);
LAB_1402325b5:
  return uVar4 & 0xffffff01;
}

