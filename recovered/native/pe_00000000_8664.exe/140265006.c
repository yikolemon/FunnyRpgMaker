/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140265006 */

longlong * FUN_140265006(undefined8 *param_1,longlong *param_2,undefined8 param_3)

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
  FUN_140265114(param_1,&local_68);
  if (*(char *)(local_58 + 0x19) == '\0') {
    iVar2 = FUN_14022ce98(param_3,local_58 + 0x20);
    if (-1 < iVar2) {
      uVar3 = 0;
      goto code_r0x0001402650ca;
    }
  }
  if (param_1[1] == 0x333333333333333) {
                    /* WARNING: Subroutine does not return */
    FUN_1402653f8();
  }
  local_50 = param_3;
  FUN_140265178(local_48,param_1,*param_1,&DAT_1404c3ed8,&local_50,&local_31);
  uVar1 = local_40;
  local_40 = 0;
  FUN_140265226(local_48);
  local_78 = local_68;
  uStack_74 = uStack_64;
  uStack_70 = uStack_60;
  uStack_6c = uStack_5c;
  local_58 = FUN_1402652a8(param_1,&local_78,uVar1);
  uVar3 = 1;
code_r0x0001402650ca:
  *param_2 = local_58;
  *(undefined1 *)(param_2 + 1) = uVar3;
  return param_2;
}

