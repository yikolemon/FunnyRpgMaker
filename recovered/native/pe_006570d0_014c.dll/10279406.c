/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10279406 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

undefined8
FUN_10279406(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  void *local_14;
  
  if (param_1 == 0xfffffffe) {
    *(undefined1 *)(param_5 + 0x24) = 1;
    *(undefined4 *)(param_5 + 0x20) = 0;
    *(undefined1 *)(param_5 + 0x1c) = 1;
    *(undefined4 *)(param_5 + 0x18) = 9;
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
        if ((*(byte *)(iVar2 + 0x28 + (&DAT_103a5230)[(int)param_1 >> 6]) & 1) == 0) {
          *(undefined1 *)(param_5 + 0x1c) = 1;
          *(undefined4 *)(param_5 + 0x18) = 9;
          *(undefined1 *)(param_5 + 0x24) = 1;
          *(undefined4 *)(param_5 + 0x20) = 0;
          uVar3 = 0xffffffffffffffff;
        }
        else {
          uVar3 = FUN_1027952b(param_1,param_2,param_3,param_4,param_5);
        }
        FUN_10279523();
        ExceptionList = local_14;
        return uVar3;
      }
    }
    *(undefined1 *)(param_5 + 0x24) = 1;
    *(undefined4 *)(param_5 + 0x20) = 0;
    *(undefined1 *)(param_5 + 0x1c) = 1;
    *(undefined4 *)(param_5 + 0x18) = 9;
    FUN_10274034(0,0,0,0,0,param_5);
  }
  ExceptionList = local_14;
  return 0xffffffffffffffff;
}

