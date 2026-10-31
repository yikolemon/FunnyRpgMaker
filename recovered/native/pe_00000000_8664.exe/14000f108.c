/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14000f108 */

longlong * FUN_14000f108(undefined8 *param_1,longlong *param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 uVar5;
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
  FUN_14000f216(param_1,&local_68);
  if (*(char *)(local_58 + 0x19) == '\0') {
    iVar3 = FUN_14000f4fa(param_3,local_58 + 0x20);
    if (-1 < iVar3) {
      uVar5 = 0;
      goto code_r0x00014000f1cc;
    }
  }
  if (param_1[1] == 0x333333333333333) {
    FUN_14000f546();
    pcVar1 = (code *)swi(3);
    plVar4 = (longlong *)(*pcVar1)();
    return plVar4;
  }
  local_50 = param_3;
  FUN_14000f27a(local_48,param_1,*param_1,&DAT_1401c8f3c,&local_50,&local_31);
  uVar2 = local_40;
  local_40 = 0;
  FUN_14000f328(local_48);
  local_78 = local_68;
  uStack_74 = uStack_64;
  uStack_70 = uStack_60;
  uStack_6c = uStack_5c;
  local_58 = FUN_14000f3aa(param_1,&local_78,uVar2);
  uVar5 = 1;
code_r0x00014000f1cc:
  *param_2 = local_58;
  *(undefined1 *)(param_2 + 1) = uVar5;
  return param_2;
}

