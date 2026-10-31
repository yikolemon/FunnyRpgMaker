/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400b423a */

undefined8 FUN_1400b423a(undefined8 param_1,LPCWSTR param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_2c8 [32];
  longlong local_2a8;
  longlong local_2a0;
  undefined1 *local_298;
  short local_284;
  short local_282;
  undefined4 local_280;
  undefined8 local_274;
  longlong local_26c;
  longlong local_264;
  undefined1 local_254 [12];
  WCHAR local_248 [264];
  ulonglong local_38;
  
  local_38 = DAT_1401c9640 ^ (ulonglong)auStack_2c8;
  FUN_1400b2294(param_3,local_254);
  lVar1 = FUN_140114300(param_1,&DAT_140173b08);
  if (lVar1 == 0) {
    uVar3 = 0xffffffff;
    goto LAB_1400b4380;
  }
  GetCurrentDirectoryW(0x104,local_248);
  SetCurrentDirectoryW(param_2);
  local_2a8 = 0;
  FUN_1400b246c(&local_284,0x30,lVar1,local_254);
  if ((local_284 == 0x5844) && (local_282 == 6)) {
    lVar2 = _malloc_base(local_280);
    if (lVar2 == 0) goto LAB_1400b435e;
    uVar3 = 0;
    FUN_140113fe4(lVar1,local_274,0);
    local_2a8 = 0;
    FUN_1400b246c(lVar2,local_280,lVar1,local_254);
    local_2a8 = local_264 + lVar2;
    local_2a0 = lVar1;
    local_298 = local_254;
    FUN_1400b3334(lVar2,local_2a8,local_26c + lVar2,&local_284);
    FUN_140115998(lVar1);
    thunk_FUN_1401212e0(lVar2);
  }
  else {
LAB_1400b435e:
    FUN_140115998(lVar1);
    uVar3 = 0xffffffff;
  }
  SetCurrentDirectoryW(local_248);
LAB_1400b4380:
  if (DAT_1401c9640 == (local_38 ^ (ulonglong)auStack_2c8)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_38 ^ (ulonglong)auStack_2c8);
}

