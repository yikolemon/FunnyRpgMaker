/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140050e99 */

undefined8 FUN_140050e99(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  plVar1 = param_2 + 2;
  if (7 < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  if (*plVar1 == 0) {
    FUN_14000169c(param_1,&DAT_14016e735);
  }
  else {
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    puVar2 = (undefined8 *)((longlong)param_2 + *plVar1 * 2);
    for (; param_2 != puVar2; param_2 = (undefined8 *)((longlong)param_2 + 2)) {
      FUN_140051093(local_78,param_2);
      FUN_14001a45e(&local_58,local_78);
      FUN_1400017de(local_78);
    }
    FUN_14000169c(local_b8,&DAT_14017146a);
    FUN_1400198e7(local_98,&local_58,local_b8);
    FUN_140018136(local_78,&DAT_14017066d,local_98);
    FUN_14000ed8c(param_1,local_78,&DAT_1401705ae);
    FUN_1400017de(local_78);
    FUN_1400017de(local_98);
    FUN_14000eeca(&local_58);
  }
  return param_1;
}

