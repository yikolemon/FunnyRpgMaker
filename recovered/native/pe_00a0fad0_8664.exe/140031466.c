/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140031466 */

longlong FUN_140031466(longlong param_1,char param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 local_88 [64];
  undefined1 local_48 [32];
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  cVar1 = *(char *)(param_1 + 0x22);
  *(char *)(param_1 + 0x22) = param_2;
  if ((param_2 != '\0') && (cVar1 == '\0')) {
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x1f0) + 0x140);
    for (plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x1f0) + 0x138); plVar4 != plVar2;
        plVar4 = plVar4 + 1) {
      if ((*plVar4 != param_1) &&
         (lVar3 = FUN_14002e504(*plVar4,param_1), *(longlong *)(lVar3 + 0x10) != 0)) {
        *(undefined1 *)(param_1 + 0x22) = 0;
        FUN_140006fbc(local_48,"adding ignore underscore caused a name conflict with ",lVar3);
        FUN_14002e1b4(local_88,local_48);
                    /* WARNING: Subroutine does not return */
        FUN_140106270(local_88,&DAT_14017a468);
      }
    }
  }
  return param_1;
}

