/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10045e45 */

short * FUN_10045e45(short *param_1,short *param_2,int *param_3)

{
  short sVar1;
  undefined1 uVar2;
  uint uVar3;
  short *psVar4;
  bool bVar5;
  ulonglong uVar6;
  undefined1 auStack_1c [3];
  undefined1 local_19;
  undefined1 local_18 [4];
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)auStack_1c;
  uVar6 = FUN_1004640d(param_1,param_2,local_18);
  uVar3 = -(uint)((uVar6 & 0x100000000) == 0) | (int)uVar6 - (int)param_1 >> 1;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_10006198("Invalid format string.");
  }
  psVar4 = param_1 + uVar3;
  if (param_1 + uVar3 == param_2) {
    psVar4 = param_1;
  }
  do {
    sVar1 = *psVar4;
    if (sVar1 == 0x5e) {
      uVar2 = 3;
LAB_10045eb0:
      if ((int)psVar4 - (int)param_1 != 0) {
        local_19 = uVar2;
        if (*param_1 == 0x7b) {
                    /* WARNING: Subroutine does not return */
          FUN_10006198("invalid fill character \'{\'");
        }
        FUN_10046390(param_1,(int)psVar4 - (int)param_1 >> 1);
        param_1 = psVar4;
        uVar2 = local_19;
      }
      param_1 = param_1 + 1;
      *(undefined1 *)(*param_3 + 9) = uVar2;
      break;
    }
    if (sVar1 == 0x3e) {
      uVar2 = 2;
      goto LAB_10045eb0;
    }
    if (sVar1 == 0x3c) {
      uVar2 = 1;
      goto LAB_10045eb0;
    }
    bVar5 = psVar4 != param_1;
    psVar4 = param_1;
  } while (bVar5);
  if (DAT_10388d00 != (local_14 ^ (uint)auStack_1c)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return param_1;
}

