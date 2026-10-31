/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140230bd4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_140230bd4(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = ram0x000140613b10 ^ (ulonglong)auStack_78;
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  uVar1 = FUN_140230dc8(local_38,&local_38,param_4);
  *param_2 = *param_1;
  param_2[1] = 0;
  FUN_14023140e(param_2,uVar1);
  local_48 = *(undefined4 *)param_2;
  uStack_44 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_40 = *(undefined4 *)(param_2 + 1);
  uStack_3c = *(undefined4 *)((longlong)param_2 + 0xc);
  FUN_140230f12(local_58,&local_48,param_4,param_5);
  if (ram0x000140613b10 == (local_28 ^ (ulonglong)auStack_78)) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_28 ^ (ulonglong)auStack_78);
}

