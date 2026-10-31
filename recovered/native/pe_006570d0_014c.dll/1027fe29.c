/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1027fe29 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

undefined4 FUN_1027fe29(uint param_1,undefined4 param_2,uint param_3)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_14;
  
  if (param_1 == 0xfffffffe) {
    puVar2 = (undefined4 *)FUN_10269012();
    *puVar2 = 0;
    puVar2 = (undefined4 *)FUN_10268ffd();
    *puVar2 = 9;
  }
  else {
    if (((int)param_1 < 0) || (DAT_103a5430 <= param_1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      iVar4 = (param_1 & 0x3f) * 0x38;
      if ((*(byte *)((&DAT_103a5230)[(int)param_1 >> 6] + 0x28 + iVar4) & 1) == 0)
      goto LAB_1027fe6f;
      if (param_3 < 0x80000000) {
        ___acrt_lowio_lock_fh(param_1);
        uVar3 = 0xffffffff;
        if ((*(byte *)((&DAT_103a5230)[(int)param_1 >> 6] + 0x28 + iVar4) & 1) == 0) {
          puVar2 = (undefined4 *)FUN_10268ffd();
          *puVar2 = 9;
          puVar2 = (undefined4 *)FUN_10269012();
          *puVar2 = 0;
        }
        else {
          uVar3 = FUN_1027ff42(param_1,param_2,param_3);
        }
        FUN_1027ff3a();
        goto LAB_1027ff24;
      }
      puVar2 = (undefined4 *)FUN_10269012();
      *puVar2 = 0;
      puVar2 = (undefined4 *)FUN_10268ffd();
      *puVar2 = 0x16;
    }
    else {
LAB_1027fe6f:
      puVar2 = (undefined4 *)FUN_10269012();
      *puVar2 = 0;
      puVar2 = (undefined4 *)FUN_10268ffd();
      *puVar2 = 9;
    }
    FUN_10273ea8();
  }
  uVar3 = 0xffffffff;
LAB_1027ff24:
  *unaff_FS_OFFSET = local_14;
  return uVar3;
}

