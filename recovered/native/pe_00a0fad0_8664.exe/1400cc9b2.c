/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400cc9b2 */

longlong * FUN_1400cc9b2(undefined8 *param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  longlong local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  FUN_140017584(param_1,&local_48);
  local_58 = local_48;
  uStack_54 = uStack_44;
  uStack_50 = (undefined4)uStack_40;
  uStack_4c = uStack_40._4_4_;
  if (*(char *)(local_38 + 0x19) == '\0') {
    iVar3 = FUN_1400175e8(param_3,local_38 + 0x20);
    if (-1 < iVar3) {
      uVar2 = 0;
      goto code_r0x0001400cca5b;
    }
  }
  if (param_1[1] == 0x3ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_14000fcec();
  }
  FUN_1400cca9e(&local_48,param_1,*param_1,param_3);
  uVar1 = uStack_40;
  uStack_40 = 0;
  FUN_1400ccb5e(&local_48);
  local_68 = local_58;
  uStack_64 = uStack_54;
  uStack_60 = uStack_50;
  uStack_5c = uStack_4c;
  local_38 = FUN_14000fb9c(param_1,&local_68,uVar1);
  uVar2 = 1;
code_r0x0001400cca5b:
  *param_2 = local_38;
  *(undefined1 *)(param_2 + 1) = uVar2;
  return param_2;
}

