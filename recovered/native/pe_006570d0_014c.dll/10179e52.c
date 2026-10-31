/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10179e52 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10179e52(int param_1)

{
  undefined1 auStack_30e0 [8];
  char local_30d8 [24];
  int local_30c0;
  undefined *local_30bc;
  uint local_30b8;
  undefined4 uStack_30b4;
  undefined4 uStack_30b0;
  undefined4 uStack_30ac;
  undefined4 local_30a8;
  undefined4 uStack_30a4;
  undefined4 local_30a0;
  undefined4 local_309c;
  undefined4 local_3098;
  undefined4 uStack_3094;
  undefined4 local_3090;
  undefined4 local_308c;
  undefined4 local_3088;
  uint local_3080;
  undefined4 uStack_307c;
  undefined4 uStack_3078;
  undefined4 uStack_3074;
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_28 = &stack0xfffffffc;
  uStack_14 = 0x10179e65;
  local_24 = auStack_30e0;
  local_1c = &LAB_10180180;
  local_20 = ExceptionList;
  local_18 = 0;
  ExceptionList = &local_20;
  local_30c0 = param_1;
  FUN_10017d5d(&local_30b8,*(undefined4 *)(param_1 + 4));
  local_18 = 7;
  FUN_10018956("MAP_ID",1);
  local_18 = 8;
  FUN_1002088c(&local_3080,&DAT_1034d933,local_30d8,&local_30b8,0);
  local_18 = 0xffffffff;
  FUN_10018a12();
  FUN_10001fee();
  local_18 = 1;
  local_30bc = PTR_DAT_10389fc0;
  FUN_10018956("LOAD_DATA_FUNCTION_CODE",1);
  local_18 = 5;
  FUN_100aaa1c(&local_30b8,&local_3080,local_30d8,local_30bc,0);
  local_18 = 6;
  FUN_10004e60();
  local_3080 = local_30b8;
  uStack_307c = uStack_30b4;
  uStack_3078 = uStack_30b0;
  uStack_3074 = uStack_30ac;
  local_30a8 = 0;
  uStack_30a4 = 0xf;
  local_30b8 = local_30b8 & 0xffffff00;
  local_18 = 0xffffffff;
  FUN_10001fee();
  FUN_10018a12();
  local_18 = 1;
  FUN_100145e4(local_30d8,&local_3080);
  local_18 = 2;
  FUN_100446d6();
  local_18 = 3;
  if (local_30d8[0] == '\0') {
    DAT_10389fc8 = 0xfffffffe;
  }
  else if (local_30d8[0] == '\x01') {
    FUN_1017a2be(local_30d8);
    local_18 = 4;
    FUN_10042460();
    _DAT_1039d908 = CONCAT44(uStack_30b4,local_30b8);
    _DAT_1039d910 = uStack_30b0;
    local_30b8 = 0;
    uStack_30b4 = 0;
    uStack_30b0 = 0;
    FUN_1002265a(&uStack_30ac);
    FUN_10004eae();
    _DAT_1039d91c = CONCAT44(local_30a0,uStack_30a4);
    _DAT_1039d924 = local_309c;
    uStack_30a4 = 0;
    local_30a0 = 0;
    local_309c = 0;
    FUN_101799fe();
    _DAT_1039d928 = CONCAT44(uStack_3094,local_3098);
    _DAT_1039d930 = local_3090;
    local_3098 = 0;
    uStack_3094 = 0;
    local_3090 = 0;
    DAT_1039d938 = local_3088;
    DAT_1039d934 = local_308c;
    local_18 = 0xffffffff;
    FUN_1016ad90();
    DAT_10389fc8 = *(undefined4 *)(local_30c0 + 4);
  }
  else if (local_30d8[0] == '\t') {
    DAT_10389fc8 = 0xfffffffd;
  }
  local_18 = 0xffffffff;
  FUN_1022c200(&DAT_1039d8b4);
  FUN_10013efc();
  FUN_10001fee();
  DAT_1039d9d8 = 0;
  ExceptionList = local_20;
  return;
}

