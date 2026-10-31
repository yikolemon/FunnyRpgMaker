/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180092327 */

ushort * FUN_180092327(undefined4 param_1,ushort *param_2,ushort *param_3,uint *param_4,
                      longlong param_5,uint param_6)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  undefined8 ***_Buf1;
  ulonglong uVar5;
  ushort *puVar6;
  void *_Buf2;
  undefined8 **local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  ulonglong local_60;
  ushort *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_78 = (undefined8 ***)0x0;
  uStack_70 = 0;
  local_68 = 0;
  local_60 = 7;
  local_50 = param_2;
  if (param_4 != (uint *)0x0) {
    FUN_180004450(&local_78,param_1);
    uVar1 = *param_4;
    uVar5 = 1;
    puVar6 = local_50;
    while ((uVar2 = local_68, uVar5 < uVar1 && (puVar6 = puVar6 + 1, puVar6 != param_3))) {
      uVar3 = (uint)*puVar6;
      if ((param_6 >> 8 & 1) != 0) {
        uVar3 = (**(code **)(**(longlong **)(param_5 + 8) + 0x40))
                          (*(longlong **)(param_5 + 8),*puVar6);
      }
      FUN_180004450(&local_78,uVar3);
      uVar5 = uVar5 + 1;
    }
    _Buf1 = &local_78;
    if (7 < local_60) {
      _Buf1 = (undefined8 ***)local_78;
    }
    do {
      uVar1 = *param_4;
      uVar5 = (ulonglong)uVar1;
      if ((uVar5 <= uVar2) && (uVar3 = param_4[3], uVar1 <= uVar3)) {
        _Buf2 = *(void **)(param_4 + 4);
        do {
          iVar4 = memcmp(_Buf1,_Buf2,uVar5 * 2);
          if (iVar4 == 0) {
            local_50 = local_50 + uVar5;
            goto LAB_18009242e;
          }
          uVar3 = uVar3 - uVar1;
          _Buf2 = (void *)((longlong)_Buf2 + uVar5 * 2);
        } while (uVar1 <= uVar3);
      }
      param_4 = *(uint **)(param_4 + 6);
    } while (param_4 != (uint *)0x0);
  }
LAB_18009242e:
  FUN_1800010ec(&local_78);
  return local_50;
}

