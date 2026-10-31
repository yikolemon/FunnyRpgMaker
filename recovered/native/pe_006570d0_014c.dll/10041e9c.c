/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10041e9c */

int * __thiscall
FUN_10041e9c(undefined4 param_1,int *param_2,uint param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  int *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_24;
  local_18 = &LAB_1005a430;
  local_1c = ExceptionList;
  local_14 = 0;
  local_24 = param_2;
  ExceptionList = &local_1c;
  FUN_100426a8(param_2,param_1);
  local_14 = 1;
  iVar1 = *local_24;
  if ((uint *)(iVar1 + 8) != &param_3) {
    FUN_10004e60();
    *(ulonglong *)(iVar1 + 0x18) = CONCAT44(param_8,param_7);
    *(uint *)(iVar1 + 8) = param_3;
    *(undefined4 *)(iVar1 + 0xc) = param_4;
    *(undefined4 *)(iVar1 + 0x10) = param_5;
    *(undefined4 *)(iVar1 + 0x14) = param_6;
    param_7 = 0;
    param_8 = 0xf;
    param_3 = param_3 & 0xffffff00;
  }
  local_14 = 0xffffffff;
  FUN_10001fee();
  ExceptionList = local_1c;
  return param_2;
}

