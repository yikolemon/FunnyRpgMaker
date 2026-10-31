/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14002210b */

undefined8 *
FUN_14002210b(undefined8 *param_1,char *param_2,char *param_3,int *param_4,undefined4 *param_5,
             undefined8 param_6)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined1 auStack_78 [43];
  undefined1 local_4d;
  undefined4 local_4c;
  char *local_48;
  undefined8 local_40;
  undefined4 *local_38;
  undefined4 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_140f17b40 ^ (ulonglong)auStack_78;
  local_4c = 0;
  local_48 = param_2;
  if ((byte)(*param_2 - 0x30U) < 10) {
    iVar1 = FUN_14002164f(&local_48,param_3,0xffffffff);
    if (iVar1 != -1) {
      *param_4 = iVar1;
      param_2 = local_48;
LAB_140022201:
      *param_1 = param_2;
      *(undefined4 *)(param_1 + 1) = local_4c;
      if (DAT_140f17b40 != (local_28 ^ (ulonglong)auStack_78)) {
                    /* WARNING: Subroutine does not return */
        FUN_140188a00(local_28 ^ (ulonglong)auStack_78);
      }
      return param_1;
    }
    pcVar3 = "number is too big";
  }
  else {
    if (*param_2 == '{') {
      param_2 = param_2 + 1;
      local_48 = param_2;
      if (param_2 != param_3) {
        if ((*param_2 == '}') || (*param_2 == ':')) {
          uVar2 = FUN_1400215d2();
          *param_5 = uVar2;
          local_4c = 1;
        }
        else {
          local_40 = param_6;
          local_38 = param_5;
          local_30 = &local_4c;
          param_2 = (char *)FUN_140022266(param_2,param_3);
          local_48 = param_2;
        }
      }
      if ((param_2 != param_3) && (*param_2 == '}')) {
        param_2 = param_2 + 1;
        goto LAB_140022201;
      }
    }
    pcVar3 = "invalid format string";
  }
  local_4d = 1;
  FUN_14001b296(&local_40,pcVar3);
                    /* WARNING: Subroutine does not return */
  FUN_14018f0a0(&local_40,&DAT_140ee3c60);
}

