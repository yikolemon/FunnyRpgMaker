/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140070f14 */

longlong *
FUN_140070f14(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  longlong local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  FUN_140017584(param_1,&local_50);
  local_68 = local_50;
  uStack_64 = uStack_4c;
  uStack_60 = (undefined4)uStack_48;
  uStack_5c = uStack_48._4_4_;
  if (*(char *)(local_40 + 0x19) == '\0') {
    iVar3 = FUN_1400175e8(param_3,local_40 + 0x20);
    if (-1 < iVar3) {
      uVar2 = 0;
      goto code_r0x000140070fc7;
    }
  }
  if (param_1[1] == 0x333333333333333) {
                    /* WARNING: Subroutine does not return */
    FUN_14000fcec();
  }
  FUN_140071010(&local_50,param_1,*param_1,param_3,param_4);
  uVar1 = uStack_48;
  uStack_48 = 0;
  FUN_1400710b8(&local_50);
  local_78 = local_68;
  uStack_74 = uStack_64;
  uStack_70 = uStack_60;
  uStack_6c = uStack_5c;
  local_40 = FUN_14000fb9c(param_1,&local_78,uVar1);
  uVar2 = 1;
code_r0x000140070fc7:
  *param_2 = local_40;
  *(undefined1 *)(param_2 + 1) = uVar2;
  return param_2;
}

