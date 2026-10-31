/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800432de */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800432de(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 local_ac [36];
  longlong local_88 [8];
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  plVar1 = *(longlong **)(param_1 + 0x80);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000180043332. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1,param_2);
    return;
  }
  FUN_180044980(&DAT_1803fff18);
  lVar6 = _Xtime_get_ticks();
  DAT_180417820 = DAT_180417820 + 1;
  if (9999999 < lVar6 - _DAT_180417818) {
    local_88[0] = lVar6 / 10000000;
    _DAT_180417818 = lVar6;
    thunk_FUN_18027f518(local_ac,local_88);
    FUN_18026f1b4(local_88,0x40,"%Y-%m-%d %H:%M:%S",local_ac);
    lVar5 = DAT_180417820;
    puVar2 = (undefined8 *)*param_2;
    uVar3 = param_2[3];
    lVar6 = *(longlong *)(param_1 + 8);
    uVar4 = *(ulonglong *)(param_1 + 0x20);
    uVar7 = FUN_1802723a4(2);
    lVar8 = param_1 + 8;
    if (0xf < uVar4) {
      lVar8 = lVar6;
    }
    if (0xf < uVar3) {
      param_2 = puVar2;
    }
    FUN_180043470(uVar7,"[*** LOG ERROR #%04zu ***] [%s] [%s] %s\n",lVar5,local_88,lVar8,param_2);
  }
  FUN_18023d6e0(&DAT_1803fff18);
  return;
}

