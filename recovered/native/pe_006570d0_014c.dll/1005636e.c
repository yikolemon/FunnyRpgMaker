/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1005636e */

undefined4 * __thiscall
FUN_1005636e(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
            undefined4 param_5)

{
  undefined4 *puVar1;
  lconv *plVar2;
  void *_Dst;
  char cVar3;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_28;
  local_18 = &LAB_1005ad10;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  *param_1 = 0;
  param_1[1] = 0;
  *param_1 = param_2;
  param_1[1] = param_3;
  local_14 = 1;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  local_24 = param_1;
  plVar2 = _localeconv();
  puVar1 = local_24;
  local_24[0x12] = plVar2;
  if (plVar2->thousands_sep == (char *)0x0) {
    cVar3 = '\0';
  }
  else {
    cVar3 = *plVar2->thousands_sep;
  }
  *(char *)(local_24 + 0x13) = cVar3;
  if (plVar2->decimal_point == (char *)0x0) {
    cVar3 = '\0';
  }
  else {
    cVar3 = *plVar2->decimal_point;
  }
  *(char *)((int)local_24 + 0x4d) = cVar3;
  _memset((void *)((int)local_24 + 0x4e),0,0x200);
  local_28 = (undefined4 *)CONCAT31(local_28._1_3_,param_4);
  *(undefined1 *)((int)puVar1 + 0x24e) = param_4;
  *(undefined8 *)(puVar1 + 0x98) = 0;
  puVar1[0x94] = 0;
  puVar1[0x95] = 0;
  puVar1[0x96] = 0;
  puVar1[0x97] = 0;
  local_14 = 1;
  _Dst = (void *)FUN_10228350(0x210);
  local_24[0x94] = _Dst;
  local_24[0x98] = 0x200;
  local_24[0x99] = 0x20f;
  _memset(_Dst,(uint)local_28 & 0xff,0x200);
  puVar1 = local_24;
  *(undefined1 *)((int)_Dst + 0x200) = 0;
  local_28 = local_24 + 0x94;
  local_24[0x9a] = param_5;
  local_14 = 0xffffffff;
  FUN_100431d4();
  ExceptionList = local_1c;
  return puVar1;
}

