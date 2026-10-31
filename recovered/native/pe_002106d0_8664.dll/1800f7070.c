/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f7070 */

longlong FUN_1800f7070(longlong *param_1,char param_2)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  longlong lVar4;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong *local_38;
  char local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_38 = param_1 + 4;
  FUN_180044980();
  local_30 = '\x01';
  if ((param_2 != '\0') && ((char)param_1[0x17] != '\0')) {
                    /* WARNING: Subroutine does not return */
    FUN_1800f7329(2);
  }
  plVar1 = param_1 + 2;
  cVar3 = FUN_180247360(plVar1);
  if (cVar3 == '\0') {
    *(undefined1 *)(param_1 + 0x17) = 1;
    if (*(char *)((longlong)param_1 + 0xc2) == '\0') {
      *(undefined1 *)((longlong)param_1 + 0xc2) = 1;
      (**(code **)(*param_1 + 0x20))(param_1,&local_38);
    }
    if (*(int *)((longlong)param_1 + 0xbc) == 0) {
      do {
        FUN_18023daa0(param_1 + 0xe,local_38);
      } while (*(int *)((longlong)param_1 + 0xbc) == 0);
    }
    cVar3 = FUN_180247360(plVar1);
    if (cVar3 == '\0') {
      if (local_30 == '\x01') {
        FUN_18023d6e0(local_38);
      }
      return (longlong)param_1 + 0xc;
    }
  }
  else {
    local_58 = 0;
    uStack_50 = 0;
    FUN_180247290(&local_58,plVar1);
    FUN_1800f735c(&local_58);
  }
  local_48 = 0;
  uStack_40 = 0;
  FUN_180247290(&local_48,plVar1);
  FUN_1800f735c(&local_48);
  pcVar2 = (code *)swi(3);
  lVar4 = (*pcVar2)();
  return lVar4;
}

