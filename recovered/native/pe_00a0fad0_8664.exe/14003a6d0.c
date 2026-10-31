/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14003a6d0 */

void FUN_14003a6d0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined1 local_b8 [64];
  undefined1 local_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined1 local_40 [32];
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  if ((*(char *)(param_1 + 0x26e) == '\x01') &&
     (*(longlong *)(param_1 + 0x238) == *(longlong *)(param_1 + 0x240))) {
    FUN_140006874(local_40,param_1 + 0xe8);
    FUN_14003a478(param_1,local_40,param_1 + 0x238);
    *(undefined1 *)(param_1 + 0x268) = 0;
    FUN_1400017de(local_40);
  }
  if (*(char *)(param_1 + 0x268) == '\0') {
    FUN_1400203b6(param_1,param_1 + 0x238);
    *(undefined1 *)(param_1 + 0x268) = 2;
  }
  else if ('\x03' < *(char *)(param_1 + 0x268)) goto code_r0x00014003a784;
  FUN_140020762(param_1,param_1 + 0x250,param_1 + 0x238);
  *(undefined1 *)(param_1 + 0x268) = 4;
code_r0x00014003a784:
  *(undefined1 *)(param_1 + 0x268) = 6;
  plVar1 = *(longlong **)(param_1 + 0x230);
  if (plVar1 != (longlong *)0x0) {
    lVar3 = param_1 + 0x250;
    if (*(longlong *)(param_1 + 0x250) == *(longlong *)(param_1 + 600)) {
      lVar3 = param_1 + 0x238;
    }
    cVar2 = (**(code **)(*plVar1 + 0x10))(plVar1,lVar3);
    if (cVar2 == '\0') {
      local_58 = 0;
      uStack_50 = 0;
      local_48 = 0;
      FUN_140020d68(&local_58,*(longlong *)(param_1 + 0x240) - *(longlong *)(param_1 + 0x238) >> 5,
                    param_1 + 0x238,param_1 + 0x240);
      FUN_14001190c(param_1,local_78,0,0);
      FUN_14003a8cc(local_b8,local_78,&local_58);
                    /* WARNING: Subroutine does not return */
      FUN_140106270(local_b8,&DAT_14017a3a8);
    }
  }
  return;
}

