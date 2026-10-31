/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140041fe2 */

longlong *
FUN_140041fe2(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  int iVar4;
  longlong *plVar5;
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
  FUN_14000f216(param_1,&local_50);
  local_68 = local_50;
  uStack_64 = uStack_4c;
  uStack_60 = (undefined4)uStack_48;
  uStack_5c = uStack_48._4_4_;
  if (*(char *)(local_40 + 0x19) == '\0') {
    iVar4 = FUN_14000f4fa(param_3,local_40 + 0x20);
    if (-1 < iVar4) {
      uVar3 = 0;
      goto code_r0x000140042095;
    }
  }
  if (param_1[1] == 0x333333333333333) {
    FUN_14000f546();
    pcVar1 = (code *)swi(3);
    plVar5 = (longlong *)(*pcVar1)();
    return plVar5;
  }
  FUN_1400420de(&local_50,param_1,*param_1,param_3,param_4);
  uVar2 = uStack_48;
  uStack_48 = 0;
  FUN_14000f328(&local_50);
  local_78 = local_68;
  uStack_74 = uStack_64;
  uStack_70 = uStack_60;
  uStack_6c = uStack_5c;
  local_40 = FUN_14000f3aa(param_1,&local_78,uVar2);
  uVar3 = 1;
code_r0x000140042095:
  *param_2 = local_40;
  *(undefined1 *)(param_2 + 1) = uVar3;
  return param_2;
}

