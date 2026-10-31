/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18012a120 */

void FUN_18012a120(char param_1,undefined8 param_2)

{
  char cVar1;
  char *pcVar2;
  
  cVar1 = FUN_18011aab1();
  if (cVar1 != '\0') {
    FUN_1801330a5("To call IM_DEBUG_BREAK() %s:",param_2);
    FUN_180137ca1();
    pcVar2 = 
    "- Press \'Pause/Break\' on keyboard.\n- or Click (may alter focus/active id).\n- or navigate using keyboard and press space."
    ;
    if (param_1 != '\0') {
      pcVar2 = "- Press \'Pause/Break\' on keyboard.";
    }
    FUN_18013309a(pcVar2,0);
    FUN_180137ca1();
    FUN_18013309a("Choose one way that doesn\'t interfere with what you are trying to debug!\nYou need a debugger attached or this will crash!"
                  ,0);
    thunk_FUN_18010f900();
    return;
  }
  return;
}

