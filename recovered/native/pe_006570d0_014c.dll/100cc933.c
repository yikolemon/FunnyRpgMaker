/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100cc933 */

void FUN_100cc933(void)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_2c;
  local_14 = 0xffffffff;
  local_18 = &LAB_100ce470;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_100446d6();
  local_14 = 0;
  iVar3 = FUN_100cd1f0(local_24);
  if (iVar3 == DAT_1039cc90) goto LAB_100cc9fe;
  cVar2 = FUN_100cd139();
  if (cVar2 != '\0') goto LAB_100cc9fe;
  cVar2 = FUN_100ccb74(local_24);
  if (cVar2 != '\0') goto LAB_100cc9fe;
  do {
    uVar1 = local_24;
    FUN_100cd2cc(&local_2c,local_24);
    FUN_100cd264(local_2c,local_28);
    FUN_100cd2cc(&local_2c,uVar1);
    FUN_100cd264(local_2c,local_28);
    FUN_100cd4fe(&local_2c,uVar1);
    FUN_100cd496(local_2c,local_28);
LAB_100cc9fe:
    iVar3 = FUN_100cd1f0(local_24);
    if (iVar3 == DAT_1039cc98) break;
    cVar2 = FUN_100cd148(local_24);
  } while (cVar2 == '\0');
  local_14 = 0xffffffff;
  FUN_1022c200(&DAT_10388cc8);
  ExceptionList = local_1c;
  return;
}

