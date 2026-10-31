/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400ad3d0 */

undefined8
FUN_1400ad3d0(uint param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
             uint param_6)

{
  int *piVar1;
  __acrt_ptd *p_Var2;
  undefined8 uVar3;
  int iVar4;
  ulonglong local_38;
  undefined *local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  iVar4 = 0;
  local_38 = 0;
  local_18 = 0;
  local_28 = 0;
  uStack_20 = 0;
  piVar1 = &DAT_140111ef0;
  do {
    if (*piVar1 == param_2) {
      local_30 = (&PTR_DAT_140111ef8)[(longlong)iVar4 * 2];
      if (local_30 != (undefined *)0x0) {
        local_18 = param_5;
        local_38 = (ulonglong)param_1;
        local_28 = param_3;
        uStack_20 = param_4;
        FUN_1400a9d40(param_6,0xffc0);
        uVar3 = FUN_14008eca0(&local_38);
        if ((int)uVar3 == 0) {
          if (param_1 == 1) {
            p_Var2 = FUN_140095e5c();
            *(undefined4 *)p_Var2 = 0x21;
          }
          else if ((param_1 == 2) || (param_1 == 3)) {
            p_Var2 = FUN_140095e5c();
            *(undefined4 *)p_Var2 = 0x22;
            return local_18;
          }
        }
        return local_18;
      }
      goto LAB_1400ad424;
    }
    iVar4 = iVar4 + 1;
    piVar1 = piVar1 + 4;
  } while ((longlong)piVar1 < 0x1401120c0);
  local_30 = (undefined *)0x0;
LAB_1400ad424:
  FUN_1400a9d40(param_6,0xffc0);
  if (param_1 == 1) {
    p_Var2 = FUN_140095e5c();
    *(undefined4 *)p_Var2 = 0x21;
  }
  else if ((param_1 == 2) || (param_1 == 3)) {
    p_Var2 = FUN_140095e5c();
    *(undefined4 *)p_Var2 = 0x22;
    return param_5;
  }
  return param_5;
}

