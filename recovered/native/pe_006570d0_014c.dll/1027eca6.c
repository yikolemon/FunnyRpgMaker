/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1027eca6 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

undefined4 FUN_1027eca6(uint param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  void *local_14;
  
  if (param_1 == 0xfffffffe) {
    *(undefined1 *)(param_4 + 0x24) = 1;
    *(undefined4 *)(param_4 + 0x20) = 0;
    *(undefined1 *)(param_4 + 0x1c) = 1;
    *(undefined4 *)(param_4 + 0x18) = 9;
  }
  else {
    if (((int)param_1 < 0) || (DAT_103a5430 <= param_1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      iVar2 = (param_1 & 0x3f) * 0x38;
      if ((*(byte *)((&DAT_103a5230)[(int)param_1 >> 6] + 0x28 + iVar2) & 1) != 0) {
        ___acrt_lowio_lock_fh(param_1);
        uVar3 = 0xffffffff;
        if ((*(byte *)(iVar2 + 0x28 + (&DAT_103a5230)[(int)param_1 >> 6]) & 1) == 0) {
          *(undefined1 *)(param_4 + 0x1c) = 1;
          *(undefined4 *)(param_4 + 0x18) = 9;
          *(undefined1 *)(param_4 + 0x24) = 1;
          *(undefined4 *)(param_4 + 0x20) = 0;
        }
        else {
          uVar3 = FUN_1027ea8a(param_1,param_2,param_3,param_4);
        }
        FUN_1027edaf();
        ExceptionList = local_14;
        return uVar3;
      }
    }
    *(undefined1 *)(param_4 + 0x24) = 1;
    *(undefined4 *)(param_4 + 0x20) = 0;
    *(undefined1 *)(param_4 + 0x1c) = 1;
    *(undefined4 *)(param_4 + 0x18) = 9;
    FUN_10274034(0,0,0,0,0,param_4);
  }
  ExceptionList = local_14;
  return 0xffffffff;
}

