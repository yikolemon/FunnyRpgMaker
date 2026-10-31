/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180044bdd */

void FUN_180044bdd(undefined8 *param_1,longlong param_2)

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  short *psVar4;
  short *psVar5;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_180402640 ^ (ulonglong)auStack_68;
  if (param_1[1] != 0) {
    psVar5 = (short *)*param_1;
    psVar1 = psVar5 + param_1[1];
    do {
      if (*psVar5 != 0x7b) {
        psVar3 = (short *)FUN_18004513e(psVar5,psVar1,0x7b);
        psVar4 = (short *)FUN_18004513e(psVar5,psVar3,0x7d);
        while (psVar4 != psVar3) {
          psVar2 = psVar4 + 1;
          if ((psVar2 == psVar3) || (*psVar2 != 0x7d)) {
                    /* WARNING: Subroutine does not return */
            FUN_180005ebc("Unmatched \'}\' in format string.");
          }
          FUN_180045166(local_48,psVar5,psVar2,*(undefined8 *)(param_2 + 0x20));
          *(undefined8 *)(param_2 + 0x20) = local_40;
          psVar5 = psVar4 + 2;
          psVar4 = (short *)FUN_18004513e(psVar5,psVar3,0x7d);
        }
        FUN_180045166(local_48,psVar5,psVar3,*(undefined8 *)(param_2 + 0x20));
        *(undefined8 *)(param_2 + 0x20) = local_40;
        psVar5 = psVar3;
        if (psVar3 == psVar1) break;
      }
      psVar5 = (short *)FUN_180044fef(psVar5,psVar1,param_2);
    } while (psVar5 != psVar1);
  }
  if (DAT_180402640 == (local_38 ^ (ulonglong)auStack_68)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_38 ^ (ulonglong)auStack_68);
}

