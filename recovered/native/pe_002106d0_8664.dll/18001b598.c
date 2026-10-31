/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18001b598 */

undefined1 *
FUN_18001b598(undefined4 param_1,undefined1 *param_2,undefined1 *param_3,uint *param_4,
             longlong param_5,uint param_6)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 ***_Buf1;
  ulonglong uVar6;
  uint uVar7;
  undefined1 *puVar8;
  void *_Buf2;
  undefined8 **local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  ulonglong local_60;
  undefined1 *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_78 = (undefined8 ***)0x0;
  uStack_70 = 0;
  local_68 = 0;
  local_60 = 0xf;
  local_50 = param_2;
  if (param_4 != (uint *)0x0) {
    uVar4 = FUN_180003bf2(&local_78,param_1);
    uVar1 = *param_4;
    uVar6 = 1;
    puVar8 = local_50;
    while ((uVar5 = local_68, uVar6 < uVar1 && (puVar8 = puVar8 + 1, puVar8 != param_3))) {
      uVar5 = CONCAT71((int7)((ulonglong)uVar4 >> 8),*puVar8);
      uVar2 = (undefined4)uVar5;
      if ((param_6 >> 8 & 1) != 0) {
        uVar2 = (**(code **)(**(longlong **)(param_5 + 8) + 0x20))
                          (*(longlong **)(param_5 + 8),uVar5 & 0xffffffff);
      }
      uVar4 = FUN_180003bf2(&local_78,uVar2);
      uVar6 = uVar6 + 1;
    }
    _Buf1 = &local_78;
    if (0xf < local_60) {
      _Buf1 = (undefined8 ***)local_78;
    }
    do {
      uVar1 = *param_4;
      uVar6 = (ulonglong)uVar1;
      if ((uVar6 <= uVar5) && (uVar7 = param_4[3], uVar1 <= uVar7)) {
        _Buf2 = *(void **)(param_4 + 4);
        do {
          iVar3 = memcmp(_Buf1,_Buf2,uVar6);
          if (iVar3 == 0) {
            local_50 = local_50 + uVar6;
            goto LAB_18001b691;
          }
          _Buf2 = (void *)((longlong)_Buf2 + uVar6);
          uVar7 = uVar7 - uVar1;
        } while (uVar1 <= uVar7);
      }
      param_4 = *(uint **)(param_4 + 6);
    } while (param_4 != (uint *)0x0);
  }
LAB_18001b691:
  FUN_180001ef2(&local_78);
  return local_50;
}

