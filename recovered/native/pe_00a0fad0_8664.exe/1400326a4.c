/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400326a4 */

void FUN_1400326a4(longlong param_1,int param_2,undefined8 *param_3)

{
  char *_Str;
  size_t sVar1;
  longlong lVar2;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  if ((*(longlong *)(param_1 + 0x18) == 0) || (*(char *)(param_1 + 0x4b) != '\0')) {
    *(undefined1 *)(param_1 + 0x4b) = 1;
    _Str = (char *)*param_3;
    sVar1 = strlen(_Str);
    FUN_140017200(param_1 + 8,_Str,sVar1);
  }
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  FUN_140031cc2(&local_58,(longlong)param_2 + -1);
  lVar2 = (longlong)param_2 + -1;
  while (lVar2 != 0) {
    local_60 = param_3[lVar2];
    FUN_1400327f0(&local_58,&local_60);
    lVar2 = lVar2 + -1;
  }
  if (*(int *)(param_1 + 0x324) != 0) {
    FUN_140032a72(param_1);
  }
  *(undefined4 *)(param_1 + 0x324) = 1;
  FUN_140032b5e(param_1);
  FUN_140032d7c(param_1);
  *(undefined8 *)(param_1 + 0x348) = 0;
  *(undefined4 *)(param_1 + 0x324) = 0;
  FUN_140032e18(param_1,&local_58);
  FUN_140032fde(param_1,0,0);
  FUN_14000eeca(&local_58);
  return;
}

