/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140064d45 */

void FUN_140064d45(undefined8 *param_1,longlong param_2)

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
  
  local_38 = DAT_140f17b40 ^ (ulonglong)auStack_68;
  if (param_1[1] != 0) {
    psVar5 = (short *)*param_1;
    psVar1 = psVar5 + param_1[1];
    do {
      if (*psVar5 != 0x7b) {
        psVar3 = (short *)FUN_1400595ca(psVar5,psVar1,0x7b);
        psVar4 = (short *)FUN_1400595ca(psVar5,psVar3,0x7d);
        while (psVar4 != psVar3) {
          psVar2 = psVar4 + 1;
          if ((psVar2 == psVar3) || (*psVar2 != 0x7d)) {
                    /* WARNING: Subroutine does not return */
            FUN_140049b0a("Unmatched \'}\' in format string.");
          }
          FUN_140065047(local_48,psVar5,psVar2,*(undefined8 *)(param_2 + 0x20));
          *(undefined8 *)(param_2 + 0x20) = local_40;
          psVar5 = psVar4 + 2;
          psVar4 = (short *)FUN_1400595ca(psVar5,psVar3,0x7d);
        }
        FUN_140065047(local_48,psVar5,psVar3,*(undefined8 *)(param_2 + 0x20));
        *(undefined8 *)(param_2 + 0x20) = local_40;
        psVar5 = psVar3;
        if (psVar3 == psVar1) break;
      }
      psVar5 = (short *)FUN_140064ef8(psVar5,psVar1,param_2);
    } while (psVar5 != psVar1);
  }
  if (DAT_140f17b40 == (local_38 ^ (ulonglong)auStack_68)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_38 ^ (ulonglong)auStack_68);
}

