/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10005e37 */

void FUN_10005e37(char *param_1,int param_2,int param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  char *pcVar4;
  
  if (param_2 != 0) {
    pcVar4 = param_1 + param_2;
    do {
      if (*param_1 != '{') {
        pcVar2 = (char *)FUN_100062be(param_1,pcVar4,0x7b);
        pcVar3 = (char *)FUN_100062be(param_1,pcVar2,0x7d);
        while (pcVar3 != pcVar2) {
          pcVar1 = pcVar3 + 1;
          if ((pcVar1 == pcVar2) || (*pcVar1 != '}')) {
                    /* WARNING: Subroutine does not return */
            FUN_10006198("Unmatched \'}\' in format string.");
          }
          FUN_100062e9(param_1,pcVar1,*(undefined4 *)(param_3 + 0x10));
          *(undefined4 *)(param_3 + 0x10) = extraout_EDX;
          param_1 = pcVar3 + 2;
          pcVar3 = (char *)FUN_100062be(param_1,pcVar2,0x7d);
        }
        FUN_100062e9(param_1,pcVar2,*(undefined4 *)(param_3 + 0x10));
        *(undefined4 *)(param_3 + 0x10) = extraout_EDX_00;
        param_1 = pcVar2;
        if (pcVar2 == pcVar4) {
          return;
        }
      }
      param_1 = (char *)FUN_100061bf(param_1,pcVar4,param_3);
    } while (param_1 != pcVar4);
  }
  return;
}

