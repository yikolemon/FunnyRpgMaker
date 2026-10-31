/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400d8791 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400d8791(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_1400d6041();
  if ((*(code **)(lVar2 + 0x38) != (code *)0x0) && (*(char *)(lVar2 + 0x31) == '\x01')) {
    iVar1 = (int)(longlong)(*(float *)(param_1 + 0x30) * _DAT_140e8233c + DAT_1401c86a0);
    if (iVar1 != 0) {
      iVar1 = (**(code **)(lVar2 + 0x38))(param_2,param_3,0,param_4,iVar1);
      if (iVar1 != 0) {
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001400d880d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AdjustWindowRectEx(param_2,param_3,0,param_4);
  return;
}

