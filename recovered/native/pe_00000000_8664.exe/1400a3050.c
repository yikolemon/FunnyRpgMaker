/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400a3050 */

void FUN_1400a3050(char param_1,undefined8 param_2)

{
  char cVar1;
  char *pcVar2;
  
  cVar1 = FUN_140093d6d();
  if (cVar1 != '\0') {
    FUN_1400abfd5("To call IM_DEBUG_BREAK() %s:",param_2);
    FUN_1400b0bd1();
    pcVar2 = 
    "- Press \'Pause/Break\' on keyboard.\n- or Click (may alter focus/active id).\n- or navigate using keyboard and press space."
    ;
    if (param_1 != '\0') {
      pcVar2 = "- Press \'Pause/Break\' on keyboard.";
    }
    FUN_1400abfca(pcVar2,0);
    FUN_1400b0bd1();
    FUN_1400abfca("Choose one way that doesn\'t interfere with what you are trying to debug!\nYou need a debugger attached or this will crash!"
                  ,0);
    thunk_FUN_140088c18();
    return;
  }
  return;
}

