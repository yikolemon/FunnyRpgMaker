/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800c3220 */

longlong * FUN_1800c3220(undefined8 *param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 uVar3;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 local_50;
  undefined1 local_48 [8];
  undefined8 local_40;
  undefined1 local_31;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  FUN_180053c44(param_1,&local_68);
  if (*(char *)(local_58 + 0x19) == '\0') {
    iVar2 = FUN_18001b9c8(param_3,local_58 + 0x20);
    if (-1 < iVar2) {
      uVar3 = 0;
      goto code_r0x0001800c32e4;
    }
  }
  if (param_1[1] == 0x2aaaaaaaaaaaaaa) {
                    /* WARNING: Subroutine does not return */
    FUN_180053f28();
  }
  local_50 = param_3;
  FUN_1800c332e(local_48,param_1,*param_1,&DAT_1802b2a08,&local_50,&local_31);
  uVar1 = local_40;
  local_40 = 0;
  FUN_180067022(local_48);
  local_78 = local_68;
  uStack_74 = uStack_64;
  uStack_70 = uStack_60;
  uStack_6c = uStack_5c;
  local_58 = FUN_180053dd8(param_1,&local_78,uVar1);
  uVar3 = 1;
code_r0x0001800c32e4:
  *param_2 = local_58;
  *(undefined1 *)(param_2 + 1) = uVar3;
  return param_2;
}

