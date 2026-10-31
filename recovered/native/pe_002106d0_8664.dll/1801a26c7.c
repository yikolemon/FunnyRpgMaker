/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801a26c7 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801a26c7(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_18019ff31();
  if ((*(code **)(lVar2 + 0x38) != (code *)0x0) && (*(char *)(lVar2 + 0x31) == '\x01')) {
    iVar1 = (int)(longlong)(*(float *)(param_1 + 0x30) * _DAT_1803280d8 + DAT_1802dbb2c);
    if (iVar1 != 0) {
      iVar1 = (**(code **)(lVar2 + 0x38))(param_2,param_3,0,param_4,iVar1);
      if (iVar1 != 0) {
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001801a2743. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AdjustWindowRectEx(param_2,param_3,0,param_4);
  return;
}

