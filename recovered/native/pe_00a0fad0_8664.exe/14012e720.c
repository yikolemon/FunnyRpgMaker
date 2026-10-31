/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14012e720 */

undefined8
FUN_14012e720(uint param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  ulonglong local_38;
  undefined *local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  iVar3 = 0;
  local_38 = 0;
  local_18 = 0;
  local_28 = 0;
  uStack_20 = 0;
  piVar1 = &DAT_140169040;
  do {
    if (*piVar1 == param_2) {
      local_30 = (&PTR_DAT_140169048)[(longlong)iVar3 * 2];
      if (local_30 != (undefined *)0x0) {
        local_18 = param_5;
        local_38 = (ulonglong)param_1;
        local_28 = param_3;
        uStack_20 = param_4;
        FUN_14012ebd0(param_6,0xffc0);
        iVar3 = FUN_14010b590(&local_38);
        if (iVar3 == 0) {
          if (param_1 == 1) {
            puVar2 = (undefined4 *)FUN_140113dd4();
            *puVar2 = 0x21;
          }
          else if ((param_1 == 2) || (param_1 == 3)) {
            puVar2 = (undefined4 *)FUN_140113dd4();
            *puVar2 = 0x22;
            return local_18;
          }
        }
        return local_18;
      }
      goto LAB_14012e774;
    }
    iVar3 = iVar3 + 1;
    piVar1 = piVar1 + 4;
  } while ((longlong)piVar1 < 0x140169210);
  local_30 = (undefined *)0x0;
LAB_14012e774:
  FUN_14012ebd0(param_6,0xffc0);
  if (param_1 == 1) {
    puVar2 = (undefined4 *)FUN_140113dd4();
    *puVar2 = 0x21;
  }
  else if ((param_1 == 2) || (param_1 == 3)) {
    puVar2 = (undefined4 *)FUN_140113dd4();
    *puVar2 = 0x22;
    return param_5;
  }
  return param_5;
}

