/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1027f342 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1027f342(DWORD *param_1,uint param_2,short *param_3,int param_4)

{
  short sVar1;
  BOOL BVar2;
  DWORD DVar3;
  short *psVar4;
  short *psVar5;
  uint local_1410;
  HANDLE local_140c;
  short local_1408 [2560];
  uint local_8;
  
  local_8 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  local_140c = *(HANDLE *)((&DAT_103a5230)[(int)param_2 >> 6] + 0x18 + (param_2 & 0x3f) * 0x38);
  psVar4 = (short *)(param_4 + (int)param_3);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  do {
    if (psVar4 <= param_3) break;
    psVar5 = local_1408;
    do {
      if (psVar4 <= param_3) break;
      sVar1 = *param_3;
      param_3 = param_3 + 1;
      if (sVar1 == 10) {
        param_1[2] = param_1[2] + 2;
        *psVar5 = 0xd;
        psVar5 = psVar5 + 1;
      }
      *psVar5 = sVar1;
      psVar5 = psVar5 + 1;
    } while (psVar5 < local_1408 + 0x9ff);
    BVar2 = WriteFile(local_140c,local_1408,(int)psVar5 - (int)local_1408,&local_1410,
                      (LPOVERLAPPED)0x0);
    if (BVar2 == 0) {
      DVar3 = GetLastError();
      *param_1 = DVar3;
      break;
    }
    param_1[1] = param_1[1] + local_1410;
  } while ((uint)((int)psVar5 - (int)local_1408) <= local_1410);
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

