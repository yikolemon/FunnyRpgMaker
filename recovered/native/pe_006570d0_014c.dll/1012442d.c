/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1012442d */

void FUN_1012442d(char param_1,undefined4 param_2)

{
  char cVar1;
  char *pcVar2;
  
  cVar1 = FUN_10115d1a();
  if (cVar1 != '\0') {
    FUN_1012d08c("To call IM_DEBUG_BREAK() %s:",param_2);
    FUN_10132188();
    pcVar2 = 
    "- Press \'Pause/Break\' on keyboard.\n- or Click (may alter focus/active id).\n- or navigate using keyboard and press space."
    ;
    if (param_1 != '\0') {
      pcVar2 = "- Press \'Pause/Break\' on keyboard.";
    }
    FUN_1012d079(pcVar2,0);
    FUN_10132188();
    FUN_1012d079("Choose one way that doesn\'t interfere with what you are trying to debug!\nYou need a debugger attached or this will crash!"
                 ,0);
    thunk_FUN_1010ad44();
    return;
  }
  return;
}

