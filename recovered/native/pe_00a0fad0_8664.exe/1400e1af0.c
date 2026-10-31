/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400e1af0 */

void FUN_1400e1af0(longlong param_1,undefined2 *param_2,undefined2 *param_3,undefined1 param_4,
                  undefined1 *param_5)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [8];
  ulonglong local_38;
  
  local_38 = DAT_1401c9640 ^ (ulonglong)auStack_68;
  if (param_2 != param_3) {
    do {
      local_48 = 0;
      iVar2 = FUN_1400da5d0(local_40,*param_2,&local_48,param_1 + 0x30);
      uVar1 = local_40[0];
      if (iVar2 != 1) {
        uVar1 = param_4;
      }
      param_2 = param_2 + 1;
      *param_5 = uVar1;
      param_5 = param_5 + 1;
    } while (param_2 != param_3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_38 ^ (ulonglong)auStack_68);
}

