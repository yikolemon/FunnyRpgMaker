/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1004494f */

void FUN_1004494f(short *param_1,int param_2,int param_3)

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  short *psVar4;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  
  if (param_2 != 0) {
    psVar2 = param_1 + param_2;
    do {
      if (*param_1 != 0x7b) {
        psVar3 = (short *)FUN_10044e04(param_1,psVar2,0x7b);
        psVar4 = (short *)FUN_10044e04(param_1,psVar3,0x7d);
        while (psVar4 != psVar3) {
          psVar1 = psVar4 + 1;
          if ((psVar1 == psVar3) || (*psVar1 != 0x7d)) {
                    /* WARNING: Subroutine does not return */
            FUN_10006198("Unmatched \'}\' in format string.");
          }
          FUN_10044e30(param_1,psVar1,*(undefined4 *)(param_3 + 0x10));
          *(undefined4 *)(param_3 + 0x10) = extraout_EDX;
          param_1 = psVar4 + 2;
          psVar4 = (short *)FUN_10044e04(param_1,psVar3,0x7d);
        }
        FUN_10044e30(param_1,psVar3,*(undefined4 *)(param_3 + 0x10));
        *(undefined4 *)(param_3 + 0x10) = extraout_EDX_00;
        param_1 = psVar3;
        if (psVar3 == psVar2) {
          return;
        }
      }
      param_1 = (short *)FUN_10044d00(param_1,psVar2,param_3);
    } while (param_1 != psVar2);
  }
  return;
}

