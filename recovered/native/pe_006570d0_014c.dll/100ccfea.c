/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100ccfea */

undefined4 * FUN_100ccfea(void)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_30;
  local_14 = 0xffffffff;
  local_18 = &LAB_100ce4b0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_100446d6();
  local_14 = 0;
  *(undefined1 *)(local_24 + 1) = 0;
  local_2c = DAT_1039cc90;
  local_28 = (undefined4 *)*DAT_1039cc90;
  while (local_28 != local_2c) {
    local_30 = local_28;
    cVar2 = FUN_100cd139();
    if ((cVar2 != '\0') && ((int)(uint)(local_30[10] == 0) <= (int)local_30[0xb])) {
      uVar1 = local_30[7];
      *(undefined1 *)(local_24 + 1) = 1;
      *local_24 = uVar1;
    }
    FUN_10016fb8();
  }
  local_14 = 0xffffffff;
  FUN_1022c200(&DAT_10388cc8);
  ExceptionList = local_1c;
  return local_24;
}

