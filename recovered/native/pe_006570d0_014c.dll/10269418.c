/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10269418 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

undefined4 FUN_10269418(FILE *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_14;
  
  if (param_1 != (FILE *)0x0) {
    if (((param_4 == 0) || (param_4 == 1)) || (param_4 == 2)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      __lock_file(param_1);
      uVar2 = FUN_1026932c(param_1,param_2,param_3,param_4,param_5);
      FUN_102694b8();
      goto LAB_102694a5;
    }
  }
  *(undefined4 *)(param_5 + 0x18) = 0x16;
  *(undefined1 *)(param_5 + 0x1c) = 1;
  FUN_10274034(0,0,0,0,0,param_5);
  uVar2 = 0xffffffff;
LAB_102694a5:
  *unaff_FS_OFFSET = local_14;
  return uVar2;
}

