/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400b200c */

undefined8 FUN_1400b200c(undefined8 param_1,LPCWSTR param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  ushort uVar4;
  undefined1 auStack_2b8 [32];
  undefined8 local_298;
  longlong local_290;
  undefined8 *local_288;
  short local_274;
  ushort local_272;
  undefined4 local_270;
  undefined4 local_268;
  uint local_264;
  uint local_260;
  undefined8 local_258;
  undefined4 local_250;
  WCHAR local_248 [260];
  ulonglong local_40;
  
  local_40 = DAT_1401c9640 ^ (ulonglong)auStack_2b8;
  FUN_1400afdf8(param_3,&local_258);
  lVar1 = FUN_140114300(param_1,&DAT_140173b08);
  if (lVar1 == 0) {
    uVar3 = 0xffffffff;
    goto LAB_1400b21b2;
  }
  GetCurrentDirectoryW(0x104,local_248);
  SetCurrentDirectoryW(param_2);
  local_298 = (ulonglong)local_298._4_4_ << 0x20;
  FUN_1400aff7c(&local_274,0x1c,lVar1,&local_258);
  if (local_274 == 0x5844) {
    uVar4 = local_272;
    if (5 < local_272) goto LAB_1400b219a;
LAB_1400b2115:
    lVar2 = _malloc_base(local_270);
    if (lVar2 == 0) goto LAB_1400b219a;
    uVar3 = 0;
    FUN_140113f48(lVar1,local_268,0);
    local_298 = CONCAT44(local_298._4_4_,-(uint)(uVar4 < 5));
    FUN_1400aff7c(lVar2,local_270,lVar1,&local_258);
    local_298 = (ulonglong)local_260 + lVar2;
    local_290 = lVar1;
    local_288 = &local_258;
    FUN_1400b0fd0(lVar2,local_298,(ulonglong)local_264 + lVar2,&local_274);
    FUN_140115998(lVar1);
    thunk_FUN_1401212e0(lVar2);
  }
  else {
    local_250 = 0xffffffff;
    local_258 = 0xffffffffffffffff;
    FUN_140113f48(lVar1,0,0);
    local_298 = local_298 & 0xffffffff00000000;
    FUN_1400aff7c(&local_274,0x1c,lVar1,&local_258);
    uVar4 = local_272;
    if (local_272 < 6 && local_274 == 0x5844) goto LAB_1400b2115;
LAB_1400b219a:
    FUN_140115998(lVar1);
    uVar3 = 0xffffffff;
  }
  SetCurrentDirectoryW(local_248);
LAB_1400b21b2:
  if (DAT_1401c9640 != (local_40 ^ (ulonglong)auStack_2b8)) {
                    /* WARNING: Subroutine does not return */
    FUN_1400d3720(local_40 ^ (ulonglong)auStack_2b8);
  }
  return uVar3;
}

