/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10125880 */

void FUN_10125880(char *param_1,int param_2)

{
  char *pcVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  float local_48;
  int local_44;
  int local_40;
  int local_3c;
  float local_38;
  float fStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  float local_28;
  float local_24;
  float local_20 [2];
  undefined4 local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_48;
  FUN_1012d079(param_1,param_2);
  cVar3 = FUN_10102a1a(0xa0);
  if ((cVar3 != '\0') && (param_1 <= (char *)(param_2 + -10))) {
    local_40 = DAT_1039d74c + 0x1e8c;
    local_38 = *(float *)(DAT_1039d74c + 0x1e8c);
    fStack_34 = *(float *)(DAT_1039d74c + 0x1e90);
    local_3c = DAT_1039d74c;
    local_44 = DAT_1039d74c + 0x1e94;
    uStack_30 = 0;
    uStack_2c = 0;
    local_48 = fStack_34 + 0.0;
    pcVar5 = param_1;
    do {
      local_18 = 0;
      if ((((*pcVar5 == '0') && ((byte)(pcVar5[1] | 0x20U) == 0x78)) &&
          (iVar4 = FUN_10125a29(pcVar5 + 2,"%X",&local_18), iVar4 == 1)) &&
         (((bVar2 = pcVar5[10], 9 < (byte)(bVar2 - 0x30) && (5 < bVar2 - 0x41)) &&
          (5 < bVar2 - 0x61)))) {
        pcVar1 = pcVar5 + 10;
        FUN_100fdb2e(local_20,param_1,pcVar5,0,0xbf800000);
        FUN_100fdb2e(&local_28,pcVar5,pcVar1,0,0xbf800000);
        *(float *)(local_3c + 0x1e8c) = local_20[0] + local_38;
        *(float *)(local_3c + 0x1e90) = local_48;
        *(ulonglong *)(local_3c + 0x1e94) =
             CONCAT44(local_24 + fStack_34,local_28 + local_20[0] + local_38);
        cVar3 = FUN_10102f3a(local_40,local_44,1);
        pcVar5 = pcVar1;
        if (cVar3 != '\0') {
          FUN_10124092(local_18);
        }
      }
      pcVar5 = pcVar5 + 1;
    } while (pcVar5 <= (char *)(param_2 + -10));
  }
  if (DAT_10388d00 != (local_14 ^ (uint)&local_48)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return;
}

